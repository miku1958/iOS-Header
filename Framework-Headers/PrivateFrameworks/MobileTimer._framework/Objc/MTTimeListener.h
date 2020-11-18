//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentNotificationListener-Protocol.h>

@class MTAlarmScheduler, MTTimerScheduler, NSString;

@interface MTTimeListener : NSObject <MTAgentNotificationListener>
{
    MTAlarmScheduler *_alarmScheduler;
    MTTimerScheduler *_timerScheduler;
}

@property (strong, nonatomic) MTAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) MTTimerScheduler *timerScheduler; // @synthesize timerScheduler=_timerScheduler;

- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (BOOL)handlesNotification:(id)arg1;
- (id)initWithAlarmScheduler:(id)arg1 timerScheduler:(id)arg2;

@end
