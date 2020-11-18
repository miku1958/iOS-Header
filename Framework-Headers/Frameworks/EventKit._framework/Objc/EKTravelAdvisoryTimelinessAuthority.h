//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/CalActivatable-Protocol.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable>
{
    BOOL _internalActive;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_timer;
    NSDate *_startOfLeaveNowPeriod;
    NSDate *_startOfRunningLatePeriod;
    unsigned long long _internalPeriod;
    CDUnknownBlockType _internalPeriodChangedCallback;
}

@property (readonly, nonatomic) BOOL active;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL internalActive; // @synthesize internalActive=_internalActive;
@property (nonatomic) unsigned long long internalPeriod; // @synthesize internalPeriod=_internalPeriod;
@property (copy, nonatomic) CDUnknownBlockType internalPeriodChangedCallback; // @synthesize internalPeriodChangedCallback=_internalPeriodChangedCallback;
@property (readonly, nonatomic) unsigned long long period;
@property (copy, nonatomic) CDUnknownBlockType periodChangedCallback;
@property (strong, nonatomic) NSDate *startOfLeaveNowPeriod; // @synthesize startOfLeaveNowPeriod=_startOfLeaveNowPeriod;
@property (strong, nonatomic) NSDate *startOfRunningLatePeriod; // @synthesize startOfRunningLatePeriod=_startOfRunningLatePeriod;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)stringForPeriod:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_refresh;
- (void)_refreshOnDate:(id)arg1;
- (void)_refreshPeriod;
- (void)_refreshTimer;
- (void)_uninstallTimer;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (void)updateWithHypothesis:(id)arg1;

@end
