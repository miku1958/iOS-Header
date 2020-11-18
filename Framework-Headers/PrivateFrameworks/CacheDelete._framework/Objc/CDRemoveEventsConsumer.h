//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CDRemoveEventsConsumer : NSObject
{
    BOOL _historyDone;
    NSString *_identifier;
    CDUnknownBlockType _consumer;
    struct __FSEventStream *_stream;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSObject<OS_dispatch_queue> *_consumer_q;
    NSString *_volume;
    struct fsid _fsid;
    unsigned long long _since;
}

@property (copy, nonatomic) CDUnknownBlockType consumer; // @synthesize consumer=_consumer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *consumer_q; // @synthesize consumer_q=_consumer_q;
@property struct fsid fsid; // @synthesize fsid=_fsid;
@property BOOL historyDone; // @synthesize historyDone=_historyDone;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property unsigned long long since; // @synthesize since=_since;
@property struct __FSEventStream *stream; // @synthesize stream=_stream;
@property (strong, nonatomic) NSString *volume; // @synthesize volume=_volume;

- (void).cxx_destruct;
- (void)callback:(id)arg1;
- (void)consumeStream:(struct __FSEventStream *)arg1 forVolume:(id)arg2;
- (void)dealloc;
- (id)initWithConsumer:(CDUnknownBlockType)arg1 identifier:(id)arg2;

@end
