//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRPendingMessageQueue, NSMutableDictionary;
@protocol MRTelevisionMessageQueueDatasource, MRTelevisionMessageQueueDelegate;

@interface MRTelevisionMessageQueue : NSObject
{
    MRPendingMessageQueue *_pendingMessageQueue;
    NSMutableDictionary *_pendingReplyQueue;
    id<MRTelevisionMessageQueueDatasource> _datasource;
    id<MRTelevisionMessageQueueDelegate> _delegate;
}

@property (nonatomic) id<MRTelevisionMessageQueueDatasource> datasource; // @synthesize datasource=_datasource;
@property (nonatomic) id<MRTelevisionMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;

- (id)_dataForMessage:(id)arg1;
- (void)dealloc;
- (void)enqueueMessage:(id)arg1 reply:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)flush;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;
- (BOOL)reply:(id)arg1;

@end

