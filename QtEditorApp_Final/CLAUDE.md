# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is QtEditor0809, a Qt-based text editor application with MDI (Multiple Document Interface) support. The application provides a rich text editing environment with standard text operations, formatting capabilities, and multiple window management.

## Build System

The project uses qmake as its build system with the following key components:

- **Project file**: `QtEditor0809.pro` - Standard Qt qmake project configuration
- **Qt modules**: Uses `core gui printsupport widgets` (Qt 5/6 compatible)
- **C++ standard**: C++17
- **Resource file**: `qtdeitor.qrc` - Contains UI icons and images

### Build Commands

```bash
# Generate Makefile (if needed)
qmake QtEditor0809.pro

# Build the application
make
# or
make debug    # For debug build
make release  # For release build

# Clean build artifacts
make clean
```

### Build directories
- `build/Desktop_Qt_*_Debug/` - Debug builds
- `build/Desktop_Qt_*_Release/` - Release builds

## Architecture

### Core Components

**QtEditor Class** (`qteditor.h`, `qteditor.cpp`):
- Main application window inheriting from `QMainWindow`
- Implements MDI functionality using `QMdiArea`
- Manages multiple text documents simultaneously
- Provides comprehensive menu/toolbar system

**Key Features**:
- **MDI Support**: Multiple document interface with subwindows
- **Rich Text Editing**: Full text formatting capabilities
- **Font Management**: Font family and size selection via toolbar widgets
- **Template-based Action Creation**: Generic `makeAction()` templates for UI elements
- **Window Management**: Tile, cascade, and navigation between subwindows

### Menu Structure
- **File**: New, Open, Save, Save As, Print, Quit
- **Edit**: Undo, Redo, Copy, Cut, Paste, Zoom In/Out
- **Format**: Color, Font, Text Alignment (Left, Center, Right, Justify)
- **Window**: Tile, Cascade, Previous/Next, Toolbar management
- **Help**: About, About Qt

### UI Components
- **Toolbars**: File, Edit, Format operations with icons
- **Status Bar**: Application status and permanent labels
- **Dock Widget**: Resizable docked panel (right side by default)
- **Font Controls**: Combo box for font family, spin box for font size

## File Structure

```
QtEditor0809/
├── QtEditor0809.pro          # qmake project file
├── main.cpp                  # Application entry point
├── qteditor.h               # Main window class declaration
├── qteditor.cpp             # Main window implementation
├── qtdeitor.qrc             # Resource file for images/icons
├── images/                  # UI icons directory
│   ├── new.png, open.png, save.png, etc.
└── build/                   # Build output directory
```

## Key Implementation Patterns

### Template-based Action Creation
The `makeAction()` method uses C++ templates to create QAction objects with different shortcut types (QKeySequence, const char*, etc.), enabling flexible UI construction.

### MDI Window Management
- Each new file creates a QTextEdit widget in a QMdiSubWindow
- Window menu dynamically updates with active documents
- Hash table (`windowHash`) maps QAction objects to corresponding QWidget windows

### Signal-Slot Architecture
Extensive use of Qt's signal-slot mechanism for:
- Menu/toolbar action connections
- Font widget synchronization with current document
- MDI area window activation handling

## Development Notes

### Code Issues Present
The current codebase contains several compilation errors that need attention:
- Variable name inconsistencies (`fileName` vs `filename`)
- Undefined variables (`subWindow` vs `window`)
- Typos in method calls (`toUt8()` should be `toUtf8()`)
- Missing QMessageBox enum (`QMessageBos::Ok`)
- Incomplete function implementations (saveasFile method)

### Testing
No automated test framework is currently configured. Manual testing involves:
1. Building and running the application
2. Testing file operations (new, open, save)
3. Verifying text formatting features
4. Testing MDI window management

### Resources
The application uses embedded resources via Qt's resource system. All UI icons are stored in the `images/` directory and compiled into the executable through `qtdeitor.qrc`.