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
    PropertyList = 2,            // .plist
    SourceCodeHeader = 3,        // .h
    SourceCodeObjC = 4,          // .m
    SourceCodeObjCPlusPlus = 5,  // .mm
    SourceCodeCPlusPlus = 6,     // .cpp
    XibFile = 7,                 // .xib
    ImageResourcePNG = 8,        // .png
    ImageResourceTiff = 9,       // .tiff
    Bundle = 10,                 // .bundle  .octet
    Archive = 11,                // .a files
    HTML = 12,                   // HTML file
    TEXT = 13,                   // Some text file
    XcodeProject = 14,           // .xcodeproj
    Folder = 15,                 // a Folder reference
    AssetCatalog = 16,           // Assets
    SourceCodeSwift = 17,        // .swift
    Application = 18,            // .app (wrapper.application)
    Playground = 19,             // .playground (file.playground)
    ShellScript = 20,            // no suffix Xcode seems to detect (text.script.sh)
    Markdown = 21,               // .md (net.daringfileball.markdown)
    XMLPropertyList = 22,        // .plist (text.plist.xml)
    Storyboard = 23,             // .storyboard (file.storyboard)
    XCConfig = 24,               // .xcconfig
    XCDataModel = 25,            // .xcdatamodel
    LocalizableStrings = 26      // .strings
};

NSString* NSStringFromXCSourceFileType(XcodeSourceFileType type);

XcodeSourceFileType XCSourceFileTypeFromStringRepresentation(NSString* string);

XcodeSourceFileType XCSourceFileTypeFromFileName(NSString* fileName);

