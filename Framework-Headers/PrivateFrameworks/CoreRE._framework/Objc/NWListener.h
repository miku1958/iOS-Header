//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_listener;

__attribute__((visibility("hidden")))
@interface NWListener : NSObject
{
    NSObject<OS_dispatch_queue> *listenerQueue;
    NSObject<OS_dispatch_queue> *transportQueue;
    NSObject<OS_dispatch_semaphore> *readySemaphore;
    NSObject<OS_nw_listener> *listener;
    int listenerState;
    struct os_unfair_lock_s layerLock;
    struct NWProtocolLayer *layer;
}

- (void).cxx_destruct;
- (id)initWithLayer:(struct NWProtocolLayer *)arg1;
- (void)setListener:(id)arg1;
- (void)stopListening;
- (void)waitForReady;

@end

