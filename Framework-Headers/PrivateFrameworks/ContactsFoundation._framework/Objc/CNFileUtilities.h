//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNFileServices;

@interface CNFileUtilities : NSObject
{
    id<CNFileServices> _services;
}

+ (id)fileLock;
+ (id)initializeFileLock;
+ (id)os_log;
+ (id)requestSharedLockDirectoryURLWithFileServices:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedLockDirectoryURLWithFileServices:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFileServices:(id)arg1;
- (BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (id)sharedLockUrlWithName:(id)arg1;

@end

