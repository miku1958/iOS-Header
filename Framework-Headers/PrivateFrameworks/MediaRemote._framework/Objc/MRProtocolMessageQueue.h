//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRPendingMessageQueue, MRWeakRef, NSMutableDictionary;
@protocol MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate, OS_dispatch_queue;

@interface MRProtocolMessageQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRWeakRef *_datasource;
    MRWeakRef *_delegate;
    MRPendingMessageQueue *_pendingMessageQueue;
    NSMutableDictionary *_pendingReplyQueue;
}

@property (nonatomic) id<MRProtocolMessageQueueDataSource> datasource;
@property (nonatomic) id<MRProtocolMessageQueueDelegate> delegate;

- (id)_dataForMessage:(id)arg1;
- (void)dealloc;
- (void)enqueueMessage:(id)arg1 reply:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)flush;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (BOOL)reply:(id)arg1;

@end

