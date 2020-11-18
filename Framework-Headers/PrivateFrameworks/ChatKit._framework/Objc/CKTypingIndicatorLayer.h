//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAReplicatorLayer;

@interface CKTypingIndicatorLayer : CALayer
{
    CALayer *_smallBubble;
    CALayer *_mediumBubble;
    CALayer *_largeBubble;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
}

@property (strong, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;
@property (strong, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;
@property (strong, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;
@property (strong, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property (strong, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;

- (void)_buildThinkingDots;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)_setup;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)dealloc;
- (id)init;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimation;
- (void)stopAnimation;
- (void)stopPulseAnimation;

@end

