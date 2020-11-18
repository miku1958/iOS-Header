//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RBEventQueue, RBProcessMap;
@protocol OS_dispatch_queue, RBAssertionManagerQueueDelegate;

@interface RBAssertionManagerEventQueue : NSObject
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    RBEventQueue *_eventQueue;
    RBProcessMap *_expirationWarningEvents;
    id<RBAssertionManagerQueueDelegate> _delegate;
}

@property (readonly) unsigned long long count;
@property (weak, nonatomic) id<RBAssertionManagerQueueDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)updateEventsForAssertions:(id)arg1;

@end
