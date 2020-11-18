//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CAMCallStatusMonitor : NSObject
{
    BOOL _callActive;
    NSMutableSet *__disabledReasons;
    NSObject<OS_dispatch_queue> *__avscAccessQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_avscAccessQueue; // @synthesize _avscAccessQueue=__avscAccessQueue;
@property (readonly, nonatomic) NSMutableSet *_disabledReasons; // @synthesize _disabledReasons=__disabledReasons;
@property (nonatomic, getter=isCallActive) BOOL callActive; // @synthesize callActive=_callActive;

- (void).cxx_destruct;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)arg1;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (void)_enableCallStatusMonitor;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_setCallActive:(BOOL)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)addDisabledReason:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initDisabledForLaunch;
- (id)initWithInitialDisabledReasons:(id)arg1;
- (void)removeDisabledReason:(long long)arg1;

@end
