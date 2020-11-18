//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol NAScheduler;

@interface MTAgentNotificationManager : NSObject
{
    NSMutableArray *_listeners;
    id<NAScheduler> _serializer;
}

@property (strong, nonatomic) NSMutableArray *listeners; // @synthesize listeners=_listeners;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;

+ (BOOL)_isSchedulingRelatedNotification:(id)arg1 streamName:(id)arg2;
+ (BOOL)_isSleepNotification:(id)arg1 streamName:(id)arg2;
+ (BOOL)_isSyncNotification:(id)arg1 streamName:(id)arg2;
+ (double)_schedulingAssertionTimeout;
- (void).cxx_destruct;
- (void)_handleNotification:(id)arg1;
- (void)_registerForAlarmNotifications;
- (void)_registerForDarwinNotifications;
- (void)_registerForDistributedNotifications;
- (void)_registerForLiveDarwinNotification:(id)arg1;
- (void)_registerForXPCStream:(id)arg1 notificationType:(long long)arg2;
- (void)beginListening;
- (void)dealloc;
- (id)init;
- (void)registerListener:(id)arg1;

@end
