//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBStarkNotificationBannerSourceDelegate-Protocol.h>
#import <SpringBoard/SBStarkNotificationsAgent-Protocol.h>

@class NSMutableOrderedSet, NSString, SBStarkNotificationSceneComponent;
@protocol SBStarkNotificationsAgentDelegate, SBStarkNotificationsConfiguring;

@interface SBStarkNotificationSceneComponentManager : NSObject <SBStarkNotificationBannerSourceDelegate, SBStarkNotificationsAgent>
{
    NSMutableOrderedSet *_activeComponents;
    id<SBStarkNotificationsAgentDelegate> _delegate;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) SBStarkNotificationSceneComponent *activeComponent;
@property (readonly, nonatomic) id<SBStarkNotificationsConfiguring> activeConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBStarkNotificationsAgentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeConfigurationForScreen:(id)arg1;
- (void)didDismissNotificationRequest:(id)arg1;
- (void)executeAction:(id)arg1 forNotificationRequest:(id)arg2;
- (id)init;
- (void)noteComponentDidActivate:(id)arg1;
- (void)noteComponentDidDeactivate:(id)arg1;
- (void)willPresentNotificationRequest:(id)arg1;

@end
