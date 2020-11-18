//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSConnectionServiceDelegate-Protocol.h>

@class NSMutableSet, NSString, RBSConnection;
@protocol OS_dispatch_queue, RBSServiceDelegate;

@interface RBSService : NSObject <RBSConnectionServiceDelegate>
{
    id<RBSServiceDelegate> _delegate;
    struct os_unfair_lock_s _lock;
    NSMutableSet *_inheritances;
    RBSConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)didLoseInheritances:(id)arg1;
- (void)didReceiveInheritances:(id)arg1;
- (id)inheritances;
- (id)init;
- (void)willTerminateProcessWithAcknowledgement:(CDUnknownBlockType)arg1;

@end
