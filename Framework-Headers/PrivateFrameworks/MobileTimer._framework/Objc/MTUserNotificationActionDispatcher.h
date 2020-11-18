//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTNotificationResponseDelegate-Protocol.h>
#import <MobileTimer/UNUserNotificationCenterDelegate-Protocol.h>

@class MTAlarmStorage, MTMetrics, MTTimerStorage, NSString;

@interface MTUserNotificationActionDispatcher : NSObject <UNUserNotificationCenterDelegate, MTNotificationResponseDelegate>
{
    MTAlarmStorage *_alarmStorage;
    MTTimerStorage *_timerStorage;
    MTMetrics *_metrics;
}

@property (strong, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MTMetrics *metrics; // @synthesize metrics=_metrics;
@property (readonly) Class superclass;
@property (strong, nonatomic) MTTimerStorage *timerStorage; // @synthesize timerStorage=_timerStorage;

+ (unsigned long long)_alarmNotificationActionForUserNotificationAction:(id)arg1 nonSnoozableNotification:(BOOL)arg2;
+ (unsigned long long)_timerNotificationActionForUserNotificationAction:(id)arg1;
- (void).cxx_destruct;
- (void)_handleAlarmNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleTimerNotificationResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAlarmStorage:(id)arg1 timerStorage:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

