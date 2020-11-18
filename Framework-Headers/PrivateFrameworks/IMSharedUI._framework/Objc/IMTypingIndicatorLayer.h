//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <IMSharedUI/IMTypingIndicatorLayerProtocol-Protocol.h>

@class CAReplicatorLayer, NSString, UIColor;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol>
{
    BOOL _hasDarkBackground;
    id _iconImage;
    double _bubbleOpacity;
    struct UIColor *_customBubbleColor;
    CALayer *_bubbleContainer;
    CALayer *_smallBubble;
    CALayer *_mediumBubble;
    CALayer *_largeBubble;
    CALayer *_thinkingDotContainer;
    CALayer *_thinkingDot;
    CAReplicatorLayer *_thinkingDots;
    CALayer *_iconImageLayer;
}

@property (readonly, nonatomic) UIColor *bubbleColor;
@property (strong, nonatomic) CALayer *bubbleContainer; // @synthesize bubbleContainer=_bubbleContainer;
@property (nonatomic) double bubbleOpacity; // @synthesize bubbleOpacity=_bubbleOpacity;
@property (copy, nonatomic) UIColor *customBubbleColor; // @synthesize customBubbleColor=_customBubbleColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDarkBackground; // @synthesize hasDarkBackground=_hasDarkBackground;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id iconImage; // @synthesize iconImage=_iconImage;
@property (strong, nonatomic) CALayer *iconImageLayer; // @synthesize iconImageLayer=_iconImageLayer;
@property (strong, nonatomic) CALayer *largeBubble; // @synthesize largeBubble=_largeBubble;
@property (strong, nonatomic) CALayer *mediumBubble; // @synthesize mediumBubble=_mediumBubble;
@property (strong, nonatomic) CALayer *smallBubble; // @synthesize smallBubble=_smallBubble;
@property (readonly) Class superclass;
@property (strong, nonatomic) CALayer *thinkingDot; // @synthesize thinkingDot=_thinkingDot;
@property (strong, nonatomic) CALayer *thinkingDotContainer; // @synthesize thinkingDotContainer=_thinkingDotContainer;
@property (strong, nonatomic) CAReplicatorLayer *thinkingDots; // @synthesize thinkingDots=_thinkingDots;

+ (struct UIColor *)darkBackgroundThinkingDotColor;
+ (struct UIColor *)defaultBubbleColor;
+ (struct CGSize)defaultSize;
+ (struct UIColor *)defaultThinkingDotColor;
+ (struct CGRect)iconImageFrame;
+ (double)iconImageTrailingSpace;
+ (struct CGRect)largeBubbleFrame;
+ (struct CGPoint)largeBubbleGrowOffset;
+ (struct CGRect)mediumBubbleFrame;
+ (struct CGPoint)mediumBubbleGrowOffset;
+ (struct CGRect)smallBubbleFrame;
+ (struct CGPoint)smallBubbleGrowOffset;
+ (BOOL)supportsTypingIndicatorAnimation;
+ (double)thinkingDotDiameter;
+ (double)thinkingDotSpace;
+ (struct CGPoint)thinkingDotsOffset;
- (void).cxx_destruct;
- (void)_buildIconImage;
- (void)_buildThinkingDots;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)_setup;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint)arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)_updateBubbleColors;
- (void)_updateForImage;
- (double)convertedCurrentMediaTime;
- (id)init;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopAnimation;
- (void)stopPulseAnimation;

@end

