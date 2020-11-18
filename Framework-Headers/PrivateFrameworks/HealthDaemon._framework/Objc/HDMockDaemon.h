//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHealthDaemon-Protocol.h>

@class HDAchievementDefinitionAlertManager, HDBackgroundTaskScheduler, HDMockPrimaryProfile, HDPluginManager, HDPrimaryProfile, NSString, _HKBehavior;
@protocol HDNanoAlertSuppressionService;

@interface HDMockDaemon : NSObject <HDHealthDaemon>
{
    HDAchievementDefinitionAlertManager *achievementDefinitionAlertManager;
    HDBackgroundTaskScheduler *backgroundTaskScheduler;
    HDMockPrimaryProfile *mockPrimaryProfile;
    HDPrimaryProfile *primaryProfile;
    HDPluginManager *pluginManager;
    id<HDNanoAlertSuppressionService> alertSuppressionService;
}

@property (strong, nonatomic) HDAchievementDefinitionAlertManager *achievementDefinitionAlertManager; // @synthesize achievementDefinitionAlertManager;
@property (strong, nonatomic) id<HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler; // @synthesize backgroundTaskScheduler;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HDMockPrimaryProfile *mockPrimaryProfile; // @synthesize mockPrimaryProfile;
@property (readonly) HDPluginManager *pluginManager; // @synthesize pluginManager;
@property (readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)daemonExtensionWithIdentifier:(id)arg1;
- (id)daemonExtensionsConformingToProtocol:(id)arg1;
- (id)init;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;

@end
