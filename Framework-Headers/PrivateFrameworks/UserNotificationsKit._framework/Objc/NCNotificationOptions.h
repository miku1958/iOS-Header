//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NSSet, NSString;

@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSSet *_alertSuppressionContexts;
    NSString *_alternateActionLabel;
    BOOL _dismissAutomatically;
    BOOL _overridesQuietMode;
    BOOL _alertsWhenLocked;
    BOOL _addToLockScreenWhenLocked;
    unsigned long long _lockScreenPersistence;
    unsigned long long _lockScreenPriority;
    unsigned long long _realertCount;
    BOOL _suppressesAlertsWhenAppIsActive;
    BOOL _silencedByMenuButtonPress;
    BOOL _overridesPocketMode;
    BOOL _canPlaySound;
    BOOL _canTurnOnDisplay;
    BOOL _requestsFullScreenPresentation;
    BOOL _hideClearActionInList;
    unsigned long long _messageNumberOfLines;
    BOOL _preemptsPresentedNotification;
    BOOL _revealsAdditionalContentOnPresentation;
    BOOL _suppressesTitleWhenLocked;
    BOOL _suppressesSubtitleWhenLocked;
    BOOL _suppressesBodyWhenLocked;
    unsigned long long _contentPreviewSetting;
    BOOL _coalescesWhenLocked;
    BOOL _preventsAutomaticLock;
    BOOL _revealsAdditionalContentIfNoDefaultAction;
}

@property (readonly, nonatomic) BOOL addToLockScreenWhenUnlocked; // @synthesize addToLockScreenWhenUnlocked=_addToLockScreenWhenLocked;
@property (readonly, copy, nonatomic) NSSet *alertSuppressionContexts; // @synthesize alertSuppressionContexts=_alertSuppressionContexts;
@property (readonly, nonatomic) BOOL alertsWhenLocked; // @synthesize alertsWhenLocked=_alertsWhenLocked;
@property (readonly, copy, nonatomic) NSString *alternateActionLabel; // @synthesize alternateActionLabel=_alternateActionLabel;
@property (readonly, nonatomic) BOOL canPlaySound; // @synthesize canPlaySound=_canPlaySound;
@property (readonly, nonatomic) BOOL canTurnOnDisplay; // @synthesize canTurnOnDisplay=_canTurnOnDisplay;
@property (readonly, nonatomic) BOOL coalescesWhenLocked; // @synthesize coalescesWhenLocked=_coalescesWhenLocked;
@property (readonly, nonatomic) unsigned long long contentPreviewSetting; // @synthesize contentPreviewSetting=_contentPreviewSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dismissAutomatically; // @synthesize dismissAutomatically=_dismissAutomatically;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideClearActionInList; // @synthesize hideClearActionInList=_hideClearActionInList;
@property (readonly, nonatomic) unsigned long long lockScreenPersistence; // @synthesize lockScreenPersistence=_lockScreenPersistence;
@property (readonly, nonatomic) unsigned long long lockScreenPriority; // @synthesize lockScreenPriority=_lockScreenPriority;
@property (readonly, nonatomic) unsigned long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property (readonly, nonatomic) BOOL overridesPocketMode; // @synthesize overridesPocketMode=_overridesPocketMode;
@property (readonly, nonatomic) BOOL overridesQuietMode; // @synthesize overridesQuietMode=_overridesQuietMode;
@property (readonly, nonatomic) BOOL preemptsPresentedNotification; // @synthesize preemptsPresentedNotification=_preemptsPresentedNotification;
@property (readonly, nonatomic) BOOL preventsAutomaticLock; // @synthesize preventsAutomaticLock=_preventsAutomaticLock;
@property (readonly, nonatomic) unsigned long long realertCount; // @synthesize realertCount=_realertCount;
@property (readonly, nonatomic) BOOL requestsFullScreenPresentation; // @synthesize requestsFullScreenPresentation=_requestsFullScreenPresentation;
@property (readonly, nonatomic) BOOL revealsAdditionalContentIfNoDefaultAction; // @synthesize revealsAdditionalContentIfNoDefaultAction=_revealsAdditionalContentIfNoDefaultAction;
@property (readonly, nonatomic) BOOL revealsAdditionalContentOnPresentation; // @synthesize revealsAdditionalContentOnPresentation=_revealsAdditionalContentOnPresentation;
@property (readonly, nonatomic) BOOL silencedByMenuButtonPress; // @synthesize silencedByMenuButtonPress=_silencedByMenuButtonPress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressesAlertsWhenAppIsActive; // @synthesize suppressesAlertsWhenAppIsActive=_suppressesAlertsWhenAppIsActive;
@property (readonly, nonatomic) BOOL suppressesBodyWhenLocked; // @synthesize suppressesBodyWhenLocked=_suppressesBodyWhenLocked;
@property (readonly, nonatomic) BOOL suppressesSubtitleWhenLocked; // @synthesize suppressesSubtitleWhenLocked=_suppressesSubtitleWhenLocked;
@property (readonly, nonatomic) BOOL suppressesTitleWhenLocked; // @synthesize suppressesTitleWhenLocked=_suppressesTitleWhenLocked;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationOptions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
