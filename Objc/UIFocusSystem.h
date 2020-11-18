//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusEnvironmentInternal-Protocol.h>
#import <UIKit/_UIFocusEnvironmentPrivate-Protocol.h>

@class NSArray, NSString, UIFocusAnimationCoordinator, UIResponder, UIView, _UIFocusAnimationCoordinatorManager, _UIFocusSoundGenerator, _UIFocusUpdateRequest;
@protocol UIFocusEnvironment, UIFocusItem, _UIFocusHapticFeedbackGenerator, _UIFocusRegionContainer, _UIFocusSystemDelegate;

@interface UIFocusSystem : NSObject <_UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate>
{
    _UIFocusUpdateRequest *_pendingFocusUpdateRequest;
    struct {
        unsigned int shouldIgnoreFocusUpdateIfNeeded:1;
        unsigned int isPendingFocusRestoration:1;
        unsigned int delegateRespondsToPreferredFocusEnvironments:1;
        unsigned int delegateRespondsToPrefersDeferralForFocusUpdateInContext:1;
        unsigned int delegateRespondsToShouldRestoreFocusInContext:1;
        unsigned int delegateRespondsToDidFinishUpdatingFocusInContext:1;
        unsigned int delegateRespondsToFocusMapContainer:1;
    } _flags;
    BOOL _enabled;
    id<UIFocusItem> _focusedItem;
    _UIFocusAnimationCoordinatorManager *_focusAnimationCoordinatorManager;
    id<_UIFocusSystemDelegate> _delegate;
    id<UIFocusItem> _previousFocusedItem;
    _UIFocusSoundGenerator *_focusSoundGenerator;
    id<_UIFocusHapticFeedbackGenerator> _focusHapticFeedbackGenerator;
}

@property (readonly, nonatomic, getter=_currentFocusAnimationCoordinator) UIFocusAnimationCoordinator *currentFocusAnimationCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<_UIFocusSystemDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (nonatomic, getter=_isEnabled, setter=_setEnabled:) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic, getter=_focusAnimationCoordinatorManager, setter=_setFocusAnimationCoordinatorManager:) _UIFocusAnimationCoordinatorManager *focusAnimationCoordinatorManager; // @synthesize focusAnimationCoordinatorManager=_focusAnimationCoordinatorManager;
@property (strong, nonatomic, getter=_focusHapticFeedbackGenerator, setter=_setFocusHapticFeedbackGenerator:) id<_UIFocusHapticFeedbackGenerator> focusHapticFeedbackGenerator; // @synthesize focusHapticFeedbackGenerator=_focusHapticFeedbackGenerator;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;
@property (strong, nonatomic, getter=_focusSoundGenerator, setter=_setFocusSoundGenerator:) _UIFocusSoundGenerator *focusSoundGenerator; // @synthesize focusSoundGenerator=_focusSoundGenerator;
@property (readonly, weak, nonatomic) id<UIFocusItem> focusedItem; // @synthesize focusedItem=_focusedItem;
@property (readonly, weak, nonatomic, getter=_focusedView) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic, getter=_hostFocusSystem) UIFocusSystem *hostFocusSystem;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic, getter=_parentFocusEnvironment) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, weak, nonatomic, getter=_preferredFirstResponder) UIResponder *preferredFirstResponder;
@property (readonly, weak, nonatomic, getter=_preferredFirstResponderFocusSystem) UIFocusSystem *preferredFirstResponderFocusSystem;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, weak, nonatomic, getter=_previousFocusedItem) id<UIFocusItem> previousFocusedItem; // @synthesize previousFocusedItem=_previousFocusedItem;
@property (readonly) Class superclass;

+ (id)_allFocusSystems;
+ (BOOL)environment:(id)arg1 containsEnvironment:(id)arg2;
+ (id)focusSystemForEnvironment:(id)arg1;
+ (void)registerURL:(id)arg1 forSoundIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)_cancelPendingFocusRestoration;
- (id)_contextForUpdateToEnvironment:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_debug_isEnvironmentEligibleForFocusUpdate:(id)arg1 debugReport:(id)arg2;
- (void)_didFinishUpdatingFocusInContext:(id)arg1;
- (void)_focusEnvironmentWillDisappear:(id)arg1;
- (id)_init;
- (id)_initWithFocusEnabled:(BOOL)arg1;
- (BOOL)_isEnvironmentEligibleForFocusUpdate:(id)arg1 shouldResetFocus:(BOOL *)arg2 debugReport:(id)arg3;
- (void)_performWithoutFocusUpdates:(CDUnknownBlockType)arg1;
- (BOOL)_postsFocusUpdateNotifications;
- (id)_preferredFirstResponderFocusSystemForFocusedItem:(id)arg1;
- (BOOL)_prefersDeferralForFocusUpdateInContext:(id)arg1;
- (void)_requestFocusUpdate:(id)arg1;
- (BOOL)_requiresFocusedItemToHaveContainingView;
- (void)_setEnabled:(BOOL)arg1 withAnimationCoordinator:(id)arg2;
- (void)_setNeedsFocusRestoration;
- (BOOL)_shouldRestoreFocusInContext:(id)arg1;
- (id)_simulatedProgrammaticFocusUpdateToEnvironment:(id)arg1;
- (void)_uiktest_setPreviousFocusedItem:(id)arg1;
- (BOOL)_uiktest_updateFocusToItem:(id)arg1;
- (BOOL)_updateFocusImmediatelyWithContext:(id)arg1;
- (BOOL)_updateFocusWithContext:(id)arg1 report:(id)arg2;
- (id)_validatedPendingFocusUpdateRequest;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)init;
- (void)requestFocusUpdateToEnvironment:(id)arg1;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end
