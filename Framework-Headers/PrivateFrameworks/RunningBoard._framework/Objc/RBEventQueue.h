//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, RBEventQueueEvent;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RBEventQueue : NSObject
{
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_eventTimer;
    BOOL _isProcessingEvents;
    BOOL _inModifyBlock;
    BOOL _dirtyDuringModify;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *events; // @synthesize events=_eventQueue;
@property (readonly, nonatomic) RBEventQueueEvent *nextEvent;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)batchModify:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)removeEvents:(id)arg1;

@end

