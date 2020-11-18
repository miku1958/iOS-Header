//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTTimerManagerIntentSupport-Protocol.h>
#import <MobileTimer/MTTimerManagerProviding-Protocol.h>
#import <MobileTimer/MTUserDefaultNotificationObserver-Protocol.h>

@class MTMetrics, MTTimerCache, MTTimerManagerExportedObject, MTXPCConnectionProvider, NSNotificationCenter, NSString;
@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver>
{
    MTTimerManagerExportedObject *_exportedObject;
    struct MTXPCConnectionProvider *_connectionProvider;
    MTMetrics *_metrics;
    MTTimerCache *_cache;
    NSNotificationCenter *_notificationCenter;
}

@property (strong, nonatomic) MTTimerCache *cache; // @synthesize cache=_cache;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MTTimerManagerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MTMetrics *metrics; // @synthesize metrics=_metrics;
@property (strong, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<MTTimerManagerIntentSupport> timerManager;

+ (double)defaultDuration;
+ (void)setDefaultDuration:(double)arg1;
+ (void)updateTimerShortcutItem;
+ (void)warmUp;
- (void).cxx_destruct;
- (void)_getCachedTimersWithFuture:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)_updateCurrentTimerWithState:(unsigned long long)arg1;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)arg1;
- (id)addTimer:(id)arg1;
- (void)checkIn;
- (id)currentTimer;
- (void)dealloc;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)getCurrentTimerSync;
- (id)init;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithMetrics:(id)arg1;
- (id)nextTimer;
- (id)nextTimersForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)pauseCurrentTimer;
- (BOOL)pauseCurrentTimerSync;
- (void)reconnect;
- (id)removeTimer:(id)arg1;
- (id)repeatTimerWithIdentifier:(id)arg1;
- (id)resumeCurrentTimer;
- (BOOL)resumeCurrentTimerSync;
- (id)startCurrentTimerWithDuration:(double)arg1;
- (BOOL)startCurrentTimerWithDurationSync:(double)arg1;
- (id)stopCurrentTimer;
- (BOOL)stopCurrentTimerSync;
- (id)timers;
- (id)timersSync;
- (id)updateTimer:(id)arg1;

@end

