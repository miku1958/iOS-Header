//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface XBLaunchImageProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)sharedInstance;
- (void)_generateLaunchImageWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 generationHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_generateSnapshotInManifest:(id)arg1 store:(id)arg2 withCompatibilityInfo:(id)arg3 launchRequest:(id)arg4 remoteContextID:(unsigned int)arg5 snapshotProvider:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)captureLaunchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequests:(id)arg3 firstImageIsReady:(CDUnknownBlockType)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)configureLaunchImageSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;
- (void)launchImageForManifest:(id)arg1 withCompatibilityInfo:(id)arg2 launchRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

