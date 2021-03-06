//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CAAnimationDelegate-Protocol.h>
#import <ChatKit/CKImpactEffectAnimationProvider-Protocol.h>

@class CAEmitterLayer, NSString;
@protocol CKSendAnimationManager, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider>
{
    id<CKSendAnimationManager> _animationDelegate;
    CAEmitterLayer *_dustEmitter;
    NSObject<OS_dispatch_group> *_throwAnimationGroup;
}

@property (weak, nonatomic) id<CKSendAnimationManager> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CAEmitterLayer *dustEmitter; // @synthesize dustEmitter=_dustEmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup; // @synthesize throwAnimationGroup=_throwAnimationGroup;

- (void).cxx_destruct;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;

@end

