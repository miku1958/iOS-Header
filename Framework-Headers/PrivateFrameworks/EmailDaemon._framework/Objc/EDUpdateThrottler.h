//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EFDebouncer, NSDate, NSMutableArray, NSString;
@protocol EDResumable, EFScheduler;

@interface EDUpdateThrottler : NSObject
{
    struct os_unfair_lock_s _updatesLock;
    NSMutableArray *_unacknowledgedUpdates;
    BOOL _hasChangesSinceLastUpdate;
    NSString *_name;
    double _delayInterval;
    long long _scalingFactor;
    NSDate *_lastUpdateDate;
    NSDate *_lastAcknowledgementDate;
    long long _updateCounter;
    id<EDResumable> _resumable;
    EFDebouncer *_resumeClientDebouncer;
    id<EFScheduler> _resumeClientScheduler;
}

@property (readonly, nonatomic) double delayInterval; // @synthesize delayInterval=_delayInterval;
@property (nonatomic) BOOL hasChangesSinceLastUpdate; // @synthesize hasChangesSinceLastUpdate=_hasChangesSinceLastUpdate;
@property (strong, nonatomic) NSDate *lastAcknowledgementDate; // @synthesize lastAcknowledgementDate=_lastAcknowledgementDate;
@property (strong, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) id<EDResumable> resumable; // @synthesize resumable=_resumable;
@property (strong, nonatomic) EFDebouncer *resumeClientDebouncer; // @synthesize resumeClientDebouncer=_resumeClientDebouncer;
@property (strong, nonatomic) id<EFScheduler> resumeClientScheduler; // @synthesize resumeClientScheduler=_resumeClientScheduler;
@property (readonly, nonatomic) long long scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property (nonatomic) long long updateCounter; // @synthesize updateCounter=_updateCounter;

+ (void)_registerInstance:(id)arg1;
+ (id)instances;
+ (void)resetAllInstances;
- (void).cxx_destruct;
- (void)_reset;
- (void)dealloc;
- (id)initWithDelayInterval:(double)arg1 scalingFactor:(long long)arg2;
- (id)initWithName:(id)arg1 delayInterval:(double)arg2 resumable:(id)arg3;
- (id)initWithName:(id)arg1 delayInterval:(double)arg2 scalingFactor:(long long)arg3;
- (unsigned long long)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double *)arg1;
- (id)updateWithBlock:(CDUnknownBlockType)arg1 unacknowledgedUpdatesCount:(unsigned long long *)arg2;

@end

