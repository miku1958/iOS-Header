//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationOptions.h>

@class NSSet, NSString;

@interface NCMutableNotificationOptions : NCNotificationOptions
{
}

@property (nonatomic) BOOL addToLockScreenWhenUnlocked; // @dynamic addToLockScreenWhenUnlocked;
@property (copy, nonatomic) NSSet *alertSuppressionContexts; // @dynamic alertSuppressionContexts;
@property (nonatomic) BOOL alertsWhenLocked; // @dynamic alertsWhenLocked;
@property (copy, nonatomic) NSString *alternateActionLabel; // @dynamic alternateActionLabel;
@property (nonatomic) BOOL canPlaySound; // @dynamic canPlaySound;
@property (nonatomic) BOOL canTurnOnDisplay; // @dynamic canTurnOnDisplay;
@property (nonatomic) BOOL coalescesWhenLocked; // @dynamic coalescesWhenLocked;
@property (nonatomic) unsigned long long contentPreviewSetting; // @dynamic contentPreviewSetting;
@property (nonatomic) BOOL dismissAutomatically; // @dynamic dismissAutomatically;
@property (nonatomic) BOOL hideClearActionInList; // @dynamic hideClearActionInList;
@property (nonatomic) BOOL lauchUsingSiriForCarPlayDefaultAction; // @dynamic lauchUsingSiriForCarPlayDefaultAction;
@property (nonatomic) unsigned long long lockScreenPersistence; // @dynamic lockScreenPersistence;
@property (nonatomic) unsigned long long lockScreenPriority; // @dynamic lockScreenPriority;
@property (nonatomic) unsigned long long messageNumberOfLines; // @dynamic messageNumberOfLines;
@property (nonatomic) BOOL overridesDowntime; // @dynamic overridesDowntime;
@property (nonatomic) BOOL overridesPocketMode; // @dynamic overridesPocketMode;
@property (nonatomic) BOOL overridesQuietMode; // @dynamic overridesQuietMode;
@property (nonatomic) BOOL preemptsPresentedNotification; // @dynamic preemptsPresentedNotification;
@property (nonatomic) BOOL prefersDarkAppearance; // @dynamic prefersDarkAppearance;
@property (nonatomic) BOOL preventsAutomaticLock; // @dynamic preventsAutomaticLock;
@property (nonatomic) unsigned long long realertCount; // @dynamic realertCount;
@property (nonatomic) BOOL requestsFullScreenPresentation; // @dynamic requestsFullScreenPresentation;
@property (nonatomic) BOOL revealsAdditionalContentIfNoDefaultAction; // @dynamic revealsAdditionalContentIfNoDefaultAction;
@property (nonatomic) BOOL revealsAdditionalContentOnPresentation; // @dynamic revealsAdditionalContentOnPresentation;
@property (nonatomic) BOOL silencedByMenuButtonPress; // @dynamic silencedByMenuButtonPress;
@property (nonatomic) BOOL suppressesAlertsWhenAppIsActive; // @dynamic suppressesAlertsWhenAppIsActive;
@property (nonatomic) BOOL suppressesBodyWhenLocked; // @dynamic suppressesBodyWhenLocked;
@property (nonatomic) BOOL suppressesSubtitleWhenLocked; // @dynamic suppressesSubtitleWhenLocked;
@property (nonatomic) BOOL suppressesTitleWhenLocked; // @dynamic suppressesTitleWhenLocked;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

