//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString, NSURL;

@interface CHSScreenshotManager : NSObject
{
    NSURL *_baseURL;
    NSString *_fileUTI;
    NSString *_fileExtension;
    NSFileManager *_fileManager;
}

@property (readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property (readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property (readonly, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)URLForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3 createIntermediateDirectories:(BOOL)arg4;
- (id)URLIfScreenshotExistsForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3;
- (id)contentIdentifierForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3;
- (void)deleteAllCachedScreenshots;
- (id)finalFileNameForWidget:(id)arg1 metrics:(id)arg2 inColorScheme:(long long)arg3;
- (id)indexingDirectoryNameForWidget:(id)arg1;
- (id)initWithDirectory:(id)arg1 fileType:(id)arg2;
- (id)initWithDirectory:(id)arg1 fileType:(id)arg2 fileManager:(id)arg3;
- (id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3;
- (id)initWithDirectory:(id)arg1 fileUTI:(id)arg2 fileExtension:(id)arg3 fileManager:(id)arg4;

@end

