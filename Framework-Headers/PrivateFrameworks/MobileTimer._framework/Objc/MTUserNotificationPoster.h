//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTNotificationPoster-Protocol.h>

@class FBSSystemService, NAFuture, NSString;
@protocol NAScheduler;

@interface MTUserNotificationPoster : NSObject <MTNotificationPoster>
{
    FBSSystemService *_systemService;
    NAFuture *_notificationCenterFuture;
    id<NAScheduler> _serializer;
    unsigned long long _numAuthAttempts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NAFuture *notificationCenterFuture; // @synthesize notificationCenterFuture=_notificationCenterFuture;
@property (nonatomic) unsigned long long numAuthAttempts; // @synthesize numAuthAttempts=_numAuthAttempts;
@property (readonly, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (readonly) Class superclass;
@property (strong, nonatomic) FBSSystemService *systemService; // @synthesize systemService=_systemService;

+ (id)_bundleIDForPlatform;
+ (id)categoryForScheduledAlarm:(id)arg1;
+ (id)categoryForScheduledTimer:(id)arg1;
+ (id)soundForMTSound:(id)arg1;
+ (id)soundForMTSound:(id)arg1 isGoToBed:(BOOL)arg2 isEarlyWakeUp:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_bedtimeFormatter;
- (id)_durationComponentsFormatter;
- (void)_performBlockRequiringNotificationCenter:(CDUnknownBlockType)arg1;
- (void)_queue_requestAuthorizationWithRetry;
- (void)_requestAuthorizationWithRetryAfterDelay:(double)arg1;
- (void)_setEarlyWakeUpTitleAndBody:(id)arg1 forAlarm:(id)arg2;
- (void)_setGoToBedTitleAndBody:(id)arg1 forAlarm:(id)arg2;
- (id)_userInfoForAlarm:(id)arg1;
- (id)_userInfoForTimer:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissNotificationsForTimer:(id)arg1;
- (void)dismissNotificationsWithIdentifiers:(id)arg1;
- (id)init;
- (id)notificationCategories;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)prewarmNotificationBundle;

@end
