//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BLTWatchKitAppList : NSObject
{
    NSDictionary *_appsByAppBundleID;
    struct _opaque_pthread_mutex_t _lock;
}

- (void).cxx_destruct;
- (void)_fetchWatchKitInfo;
- (void)dealloc;
- (void)fetchWatchKitInfoWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)watchKitAppDefinitionWithBundleID:(id)arg1;

@end

