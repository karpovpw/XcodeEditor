////////////////////////////////////////////////////////////////////////////////
//
//  JASPER BLUES
//  Copyright 2012 Jasper Blues
//  All Rights Reserved.
//
//  NOTICE: Jasper Blues permits you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSInteger, XcodeSourceFileType)
{
    FileTypeNil = 0,             // Unknown filetype
    Framework = 1,               // .framework
    CDynamicLibrary = 2,         // .tbd
    PropertyList = 3,            // .plist
    SourceCodeHeader = 4,        // .h
    SourceCodeObjC = 5,          // .m
    SourceCodeObjCPlusPlus = 6,  // .mm
    SourceCodeCPlusPlus = 7,     // .cpp
    XibFile = 8,                 // .xib
    ImageResourcePNG = 9,        // .png
    ImageResourceTiff = 10,      // .tiff
    Bundle = 11,                 // .bundle  .octet
    Archive = 12,                // .a files
    HTML = 13,                   // HTML file
    TEXT = 14,                   // Some text file
    XcodeProject = 15,           // .xcodeproj
    Folder = 16,                 // a Folder reference
    AssetCatalog = 17,           // Assets
    SourceCodeSwift = 18,        // .swift
    Application = 19,            // .app (wrapper.application)
    Playground = 20,             // .playground (file.playground)
    ShellScript = 21,            // no suffix Xcode seems to detect (text.script.sh)
    Markdown = 22,               // .md (net.daringfileball.markdown)
    XMLPropertyList = 23,        // .plist (text.plist.xml)
    Storyboard = 24,             // .storyboard (file.storyboard)
    XCConfig = 25,               // .xcconfig
    XCDataModel = 26,            // .xcdatamodel
    LocalizableStrings = 27      // .strings
};

NSString* NSStringFromXCSourceFileType(XcodeSourceFileType type);

XcodeSourceFileType XCSourceFileTypeFromStringRepresentation(NSString* string);

XcodeSourceFileType XCSourceFileTypeFromFileName(NSString* fileName);

