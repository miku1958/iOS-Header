//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSArray;
@protocol OS_dispatch_queue;

@interface AVCaptureMetadataOutputInternal : NSObject
{
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSArray *metadataObjectTypes;
    struct CGRect rectOfInterest;
    AVWeakReference *weakReference;
    struct OpaqueFigSimpleMutex *remoteQueueMutex;
    void *remoteReceiverQueue;
    NSObject<OS_dispatch_queue> *objectQueue;
}

- (void)dealloc;
- (id)init;

@end
