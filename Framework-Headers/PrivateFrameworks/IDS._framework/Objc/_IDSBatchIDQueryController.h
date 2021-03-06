//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSIDQueryControllerDelegate-Protocol.h>

@class CUTWeakReference, NSArray, NSDate, NSMutableArray, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface _IDSBatchIDQueryController : NSObject <IDSIDQueryControllerDelegate>
{
    NSString *_serviceName;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_listenerID;
    NSArray *_destinations;
    NSMutableArray *_destinationsToQuery;
    NSTimer *_nextQueryTimer;
    NSDate *_timeOfDeath;
    id _rateLimiter;
    CUTWeakReference *_parent;
    int _numberOfQueriesDone;
    BOOL _isDead;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calloutToDelegateWithResult:(id)arg1 error:(id)arg2;
- (void)_invalidateNextQueryTimer;
- (void)_nextQuery:(id)arg1;
- (void)_scheduleNextQuery:(double)arg1;
- (void)dealloc;
- (id)initWithService:(id)arg1 delegate:(id)arg2 queue:(id)arg3 parent:(id)arg4;
- (void)invalidate;
- (void)setDestinations:(id)arg1;
- (BOOL)underLimit;

@end

