//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBAppLayout;

@interface SBGestureRootSwitcherModifier : SBSwitcherModifier
{
    BOOL _shouldVerifyModifierStackCoherencyCheckAfterHandlingEvent;
    NSString *_activeTransitionKey;
    SBAppLayout *_selectedAppLayout;
    long long _currentEnvironmentMode;
}

@property (readonly, nonatomic) long long currentEnvironmentMode; // @synthesize currentEnvironmentMode=_currentEnvironmentMode;
@property (readonly, nonatomic) SBAppLayout *selectedAppLayout; // @synthesize selectedAppLayout=_selectedAppLayout;

- (void).cxx_destruct;
- (id)_forwardEventAndUpdateInternalState:(id)arg1;
- (id)_gestureModifier;
- (void)_performModifierStackCoherencyCheckIfNeededAfterHandlingEvent:(id)arg1;
- (id)_transitionModifier;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleGestureEvent:(id)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithStartingEnvironmentMode:(long long)arg1;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;

@end
