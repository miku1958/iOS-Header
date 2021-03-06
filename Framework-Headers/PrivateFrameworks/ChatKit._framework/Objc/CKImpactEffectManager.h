//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKSendAnimationManager-Protocol.h>

@class CABackdropLayer, CKBalloonView, NSString, UIScrollView, UIWindow;
@protocol CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate;

@interface CKImpactEffectManager : NSObject <CKSendAnimationManager>
{
    BOOL _isAnimating;
    BOOL _isDisabled;
    id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
    id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
    id<CKSendAnimationManagerDelegate> _delegate;
    NSString *_animatingIdentifier;
    UIWindow *_expressiveSendAnimationWindow;
    CKBalloonView *_expressiveSendAnimationBalloon;
    CKBalloonView *_originalBalloonView;
    UIScrollView *_expressiveSendScrollView;
    CABackdropLayer *_expressiveSendAnimationBackdrop;
}

@property (readonly, nonatomic) NSString *animatingIdentifier; // @synthesize animatingIdentifier=_animatingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CABackdropLayer *expressiveSendAnimationBackdrop; // @synthesize expressiveSendAnimationBackdrop=_expressiveSendAnimationBackdrop;
@property (strong, nonatomic) CKBalloonView *expressiveSendAnimationBalloon; // @synthesize expressiveSendAnimationBalloon=_expressiveSendAnimationBalloon;
@property (strong, nonatomic) UIWindow *expressiveSendAnimationWindow; // @synthesize expressiveSendAnimationWindow=_expressiveSendAnimationWindow;
@property (strong, nonatomic) UIScrollView *expressiveSendScrollView; // @synthesize expressiveSendScrollView=_expressiveSendScrollView;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property (nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property (strong, nonatomic) CKBalloonView *originalBalloonView; // @synthesize originalBalloonView=_originalBalloonView;
@property (weak, nonatomic) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider; // @synthesize sendAnimationBalloonProvider;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate; // @synthesize sendAnimationManagerDelegate;
@property (readonly) Class superclass;

+ (id)effectIdentifiers;
+ (BOOL)identifierIsAnimatedImpactEffect:(id)arg1;
+ (BOOL)identifierIsValidImpactEffect:(id)arg1;
+ (BOOL)identifierShouldPlayInWindow:(id)arg1;
+ (id)localizedEffectNameForEffectWithIdentifier:(id)arg1;
+ (id)maskingStringForID:(id)arg1;
- (void).cxx_destruct;
- (void)_animateLastMessage:(id)arg1;
- (void)_cleanupExpressiveSendComponents;
- (id)_sendAnimationContextForIdentifier:(id)arg1 message:(id)arg2 isSender:(BOOL)arg3;
- (void)_sizeAnimationWindow;
- (void)_visibleCells:(id *)arg1 aboveItem:(id)arg2;
- (void)animateMessages:(id)arg1;
- (void)animationDidFinishWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)cloneBalloonForAnimationWithChatItem:(id)arg1;
- (id)init;
- (void)matchScrollViewOffset:(id)arg1;
- (void)stopAllEffects;

@end

