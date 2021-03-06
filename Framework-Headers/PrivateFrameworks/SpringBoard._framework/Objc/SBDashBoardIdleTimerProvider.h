//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBIdleTimerObserving-Protocol.h>

@class NSMutableSet, NSString;
@protocol BSInvalidatable, SBDashBoardIdleTimerProviderDelegate, SBFIdleTimerBehaviorProviding, SBIdleTimer;

@interface SBDashBoardIdleTimerProvider : NSObject <SBIdleTimerObserving, BSDescriptionProviding>
{
    id<SBIdleTimer> _idleTimer;
    id<SBFIdleTimerBehaviorProviding> _idleTimerProvider;
    id<BSInvalidatable> _stateCaptureAssertion;
    NSMutableSet *_disabledIdleTimerAssertions;
    id<SBDashBoardIdleTimerProviderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBDashBoardIdleTimerProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SBIdleTimer> idleTimer; // @synthesize idleTimer=_idleTimer;
@property (readonly, nonatomic, getter=isIdleTimerEnabled) BOOL idleTimerEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyIdleTimerBehaviorForBehaviorProvider:(id)arg1;
- (void)_proposeEffectiveIdleTimerBehaviorForReason:(id)arg1;
- (void)_proposeIdleTimerBehavior:(id)arg1 forReason:(id)arg2;
- (void)addDisabledIdleTimerAssertionReason:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)effectiveIdleTimerBehavior;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isDisabledAssertionActiveForReason:(id)arg1;
- (void)removeDisabledIdleTimerAssertionReason:(id)arg1;
- (void)resetIdleTimer;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateIdleTimerWithIdleDimProvider:(id)arg1 reason:(id)arg2;

@end

