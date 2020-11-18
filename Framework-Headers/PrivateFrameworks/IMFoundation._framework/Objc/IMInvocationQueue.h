//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSProtocolChecker, Protocol;

@interface IMInvocationQueue : NSObject
{
    BOOL _holdQueue;
    id _delegate;
    id _target;
    double _dequeueRate;
    NSMutableArray *_queue;
    NSMutableArray *_options;
    NSProtocolChecker *_protocolChecker;
}

@property (readonly, nonatomic) unsigned long long count;
@property id delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double dequeueRate; // @synthesize dequeueRate=_dequeueRate;
@property (readonly, nonatomic) BOOL holdQueue; // @synthesize holdQueue=_holdQueue;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, strong, nonatomic) NSMutableArray *options; // @synthesize options=_options;
@property (strong, nonatomic) Protocol *protocol;
@property (readonly, strong, nonatomic) NSProtocolChecker *protocolChecker; // @synthesize protocolChecker=_protocolChecker;
@property (readonly, strong, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property id target; // @synthesize target=_target;

- (BOOL)_acceptsOptions:(unsigned long long)arg1;
- (void)_checkQueue;
- (id)_dequeueInvocation;
- (long long)_enqueueInvocation:(id)arg1 options:(unsigned long long)arg2;
- (void)_holdQueueNotification:(id)arg1;
- (BOOL)_insertInvocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_invokeInvocation:(id)arg1;
- (int)_maxQueueLimitSize;
- (int)_numberOfLimitedMessagesInQueue;
- (unsigned long long)_optionsForInvocation:(id)arg1;
- (void)_releaseQueueNotification:(id)arg1;
- (BOOL)_replaceSimilarInvocation:(id)arg1;
- (void)_setQueueTimer;
- (void)_stepQueueNotification:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)invokeAll;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)peek;
- (void)removeAllInvocations;

@end

