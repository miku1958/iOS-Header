//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/UIStatusBarManager-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSString, SBAppStatusBarSettings;
@protocol BSInvalidatable;

@interface SBAppStatusBarAssertionManager : NSObject <BSDescriptionProviding, UIStatusBarManager>
{
    NSHashTable *_disableAlphaChangeAssertions;
    NSHashTable *_disableUserInteractionChangeAssertions;
    NSMutableOrderedSet *_windowLevelOverrideReasons;
    NSMutableDictionary *_windowLevelOverrideMap;
    NSPointerArray *_statusBarSettingsAssertionsByLevel[11];
    SBAppStatusBarSettings *_currentStatusBarSettings;
    NSMutableDictionary *_edgeInsetsDictionary;
    NSMutableSet *_activeLayoutLayers;
    NSMutableDictionary *_orientationWindowDictionary;
    double _defaultWindowLevel;
    id<BSInvalidatable> _stateCaptureAssertion;
    NSHashTable *_observers;
    BOOL _changingStatusBarStyle;
    BOOL _changingStatusBarAlpha;
    unsigned long long _statusBarAlphaAnimationCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct UIEdgeInsets statusBarEdgeInsets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long topmostActiveLayoutLayer;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_addStatusBarSettingsAssertion:(id)arg1;
- (void)_addStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_applyEdgeInsetsToStatusBar;
- (void)_cleanUpAllStatusBarSettingsAssertions;
- (id)_descriptionForPropertyWithAssertions:(id)arg1;
- (void)_enumerateAssertionsToLevel:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_evaluateSettingsWithStyleAnimations:(id)arg1;
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1;
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1;
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;
- (void)_removeStatusBarSettingsAssertion:(id)arg1;
- (void)_removeStatusBarSettingsAssertion:(id)arg1 withAnimationParameters:(id)arg2;
- (void)_resolveEffectiveStatusBarStyleForSettings:(id)arg1;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(CDUnknownBlockType)arg2;
- (void)_statusBarUpdatedFromSettings:(id)arg1 toSettings:(id)arg2 withAnimations:(id)arg3;
- (id)_styleRequestForSettings:(id)arg1;
- (void)_updateStatusBarOrientationForTopMostActiveLayer;
- (void)_updateWindowLevel;
- (void)addActiveLayoutLayer:(unsigned long long)arg1;
- (void)addObserver:(id)arg1;
- (id)currentEffectiveStatusBarStyleRequest;
- (id)currentStatusBarSettings;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)effectiveStatusBarStyleRequestForLevel:(unsigned long long)arg1;
- (id)effectiveStatusBarStyleRequestWithSettings:(id)arg1;
- (id)init;
- (BOOL)isStatusBarHidden;
- (BOOL)isStatusBarUserInteractionEnabled;
- (id)orientationWindowForLayoutLayer:(unsigned long long)arg1;
- (void)removeActiveLayoutLayer:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeWindowLevelOverrideReason:(id)arg1;
- (void)setDefaultWindowLevel:(double)arg1;
- (void)setOrientationWindow:(id)arg1 forStatusBarLayoutLayer:(unsigned long long)arg2;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets)arg1 forLayoutLayer:(unsigned long long)arg2;
- (void)setStatusBarUserInteractionEnabled:(BOOL)arg1;
- (void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2;
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (BOOL)statusBar:(id)arg1 shouldRequestStyle:(long long)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4;
- (BOOL)statusBar:(id)arg1 shouldRequestStyleAttributes:(id)arg2 animationParameters:(id)arg3 forced:(BOOL)arg4;
- (BOOL)statusBar:(id)arg1 shouldSetAlpha:(double)arg2;
- (BOOL)statusBarOrientationShouldFollowWindow:(id)arg1;
- (id)statusBarSettingsForLevel:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

