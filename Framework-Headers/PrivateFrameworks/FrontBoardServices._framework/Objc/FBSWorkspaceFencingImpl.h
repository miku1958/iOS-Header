//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSWorkspaceFencing-Protocol.h>

@class BSMutableIntegerMap, BSMutableIntegerSet, FBSSerialQueue, NSString;
@protocol OS_dispatch_queue;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    unsigned long long _signpostName;
    BSMutableIntegerMap *_triggerToFenceNameMap;
    BSMutableIntegerSet *_triggersToIgnore;
    BOOL _synchronizingFence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2;
- (BOOL)isTrackingAnySystemAnimationFence;
- (id)requestSystemAnimationFence;
- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(CDUnknownBlockType)arg1;
- (BOOL)trackSystemAnimationFence:(id)arg1;

@end

