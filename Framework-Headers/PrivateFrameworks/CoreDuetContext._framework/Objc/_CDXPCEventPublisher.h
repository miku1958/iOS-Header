//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_os_log, OS_xpc_event_publisher, _CDXPCEventPublisherDelegate;

@interface _CDXPCEventPublisher : NSObject
{
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSString *_streamName;
    id<_CDXPCEventPublisherDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    NSMutableArray *_pendingSendEvents;
}

@property (strong, nonatomic) id<_CDXPCEventPublisherDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (strong, nonatomic) NSMutableArray *pendingSendEvents; // @synthesize pendingSendEvents=_pendingSendEvents;
@property (strong, nonatomic) NSObject<OS_xpc_event_publisher> *publisher; // @synthesize publisher=_publisher;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;

+ (id)eventPublisherWithStreamName:(const char *)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4;
- (void).cxx_destruct;
- (void)activatePublisherWithStreamName:(const char *)arg1;
- (void)addToken:(unsigned long long)arg1 descriptor:(id)arg2 userID:(unsigned int)arg3;
- (void)handleEventWithAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithStreamName:(id)arg1 delegate:(id)arg2 queue:(id)arg3 log:(id)arg4;
- (void)removeToken:(unsigned long long)arg1;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendEvent:(id)arg1 toSubscriber:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;

@end
