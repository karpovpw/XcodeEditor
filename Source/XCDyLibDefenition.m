//
//  XCDyLibDefenition.m
//  XcodeEditor
//
//  Created by Stas Kochkin on 13/06/2017.
//  Copyright © 2017 appsquickly. All rights reserved.
//

#import "XCDyLibDefenition.h"

@implementation XCDyLibDefenition

+ (XCDyLibDefenition*)dynamicLibraryDefinitionWithFilePath:(NSString *)filePath
                                         copyToDestination:(BOOL)copyToDestination {
    return [[XCDyLibDefenition alloc] initWithFilePath:filePath
                                     copyToDestination:copyToDestination
                                            sourceTree:SourceTreeGroup];
}

+ (XCDyLibDefenition*)dynamicLibraryDefinitionWithFilePath:(NSString *)filePath
                                         copyToDestination:(BOOL)copyToDestination
                                                sourceTree:(XcodeSourceTreeType)sourceTree {
    return [[XCDyLibDefenition alloc] initWithFilePath:filePath
                                     copyToDestination:copyToDestination
                                            sourceTree:sourceTree];
}

@end
