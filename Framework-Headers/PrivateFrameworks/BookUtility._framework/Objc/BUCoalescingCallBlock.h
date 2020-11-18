//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BUCoalescingCallBlock : NSObject
{
    BOOL _pending;
    BOOL _invoking;
    unsigned short _notifyTimeoutDurationSeconds;
    double _coalescingDelay;
    double _maximumDelay;
    CDUnknownBlockType _notifyBlock;
    CDUnknownBlockType _notifyTimeoutBlock;
    unsigned long long _nextCoalescingTime;
    unsigned long long _nextMaxTime;
    NSString *_notifyBlockDescription;
    NSMutableArray *_callbacks;
    NSObject<OS_dispatch_queue> *_sync;
    NSObject<OS_dispatch_group> *_group;
}

@property (strong, nonatomic) NSMutableArray *callbacks; // @synthesize callbacks=_callbacks;
@property (nonatomic) double coalescingDelay; // @synthesize coalescingDelay=_coalescingDelay;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property (nonatomic, getter=isInvoking) BOOL invoking; // @synthesize invoking=_invoking;
@property (nonatomic) double maximumDelay; // @synthesize maximumDelay=_maximumDelay;
@property (nonatomic) unsigned long long nextCoalescingTime; // @synthesize nextCoalescingTime=_nextCoalescingTime;
@property (nonatomic) unsigned long long nextMaxTime; // @synthesize nextMaxTime=_nextMaxTime;
@property (copy, nonatomic) CDUnknownBlockType notifyBlock; // @synthesize notifyBlock=_notifyBlock;
@property (copy, nonatomic) NSString *notifyBlockDescription; // @synthesize notifyBlockDescription=_notifyBlockDescription;
@property (copy, nonatomic) CDUnknownBlockType notifyTimeoutBlock; // @synthesize notifyTimeoutBlock=_notifyTimeoutBlock;
@property (nonatomic) unsigned short notifyTimeoutDurationSeconds; // @synthesize notifyTimeoutDurationSeconds=_notifyTimeoutDurationSeconds;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *sync; // @synthesize sync=_sync;

- (void).cxx_destruct;
- (void)_coalescingTimeExpired:(unsigned long long)arg1;
- (void)_invoke;
- (void)_invokeIfNotInProgress;
- (void)_maxTimeExpired:(unsigned long long)arg1;
- (id)description;
- (id)initWithNotifyBlock:(CDUnknownBlockType)arg1 blockDescription:(id)arg2;
- (id)initWithNotifyBlock:(CDUnknownBlockType)arg1 notifyTimeout:(unsigned short)arg2 blockDescription:(id)arg3 notifyTimeoutBlock:(CDUnknownBlockType)arg4;
- (void)signalWithCompletion:(CDUnknownBlockType)arg1;

@end
