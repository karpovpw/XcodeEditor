//
//  XCDyLibDefenition.h
//  XcodeEditor
//
//  Created by Stas Kochkin on 13/06/2017.
//  Copyright © 2017 appsquickly. All rights reserved.
//

#import "XCFrameworkDefinition.h"


@interface XCDyLibDefenition : XCFrameworkDefinition

+ (XCDyLibDefenition*)dynamicLibraryDefinitionWithFilePath:(NSString *)filePath
                                         copyToDestination:(BOOL)copyToDestination;

+ (XCDyLibDefenition*)dynamicLibraryDefinitionWithFilePath:(NSString *)filePath
                                         copyToDestination:(BOOL)copyToDestination
                                                sourceTree:(XcodeSourceTreeType)sourceTree;

@end
