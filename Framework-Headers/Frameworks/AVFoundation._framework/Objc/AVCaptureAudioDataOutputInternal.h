//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue;

@interface AVCaptureAudioDataOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *bufferQueue;
    struct OpaqueFigSimpleMutex *remoteQueueMutex;
    void *remoteReceiverQueue;
}

- (void)dealloc;
- (id)init;

@end

