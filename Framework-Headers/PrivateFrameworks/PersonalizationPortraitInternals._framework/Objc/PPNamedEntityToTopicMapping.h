//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPNamedEntityToTopicMapping : NSObject
{
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)_filesystemAssetPath;
+ (id)currentTrieSha256;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_loadAssetData;
- (void)dealloc;
- (id)init;
- (id)mappedTopicForEntity:(id)arg1;

@end
