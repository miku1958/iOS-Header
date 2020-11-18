//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol PLFileManager <NSObject>

@property (readonly, copy) NSString *currentDirectoryPath;

- (NSDictionary *)attributesOfItemAtPath:(NSString *)arg1 error:(id *)arg2;
- (BOOL)changeCurrentDirectoryPath:(NSString *)arg1;
- (BOOL)fileExistsAtPath:(NSString *)arg1;
- (BOOL)fileExistsAtPath:(NSString *)arg1 isDirectory:(BOOL *)arg2;
@end

