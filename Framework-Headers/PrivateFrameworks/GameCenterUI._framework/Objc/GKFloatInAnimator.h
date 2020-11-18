//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKFloatInAnimator : GKBubblePathAnimator
{
    BOOL _useWelcomeSpringValues;
    long long _focusBubbleType;
    double _delayIncrement;
    double _additionalDelay;
}

@property (nonatomic) double additionalDelay; // @synthesize additionalDelay=_additionalDelay;
@property (nonatomic) double delayIncrement; // @synthesize delayIncrement=_delayIncrement;
@property (nonatomic) long long focusBubbleType; // @synthesize focusBubbleType=_focusBubbleType;
@property (nonatomic) BOOL useWelcomeSpringValues; // @synthesize useWelcomeSpringValues=_useWelcomeSpringValues;

- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (id)floatBubblesSortedLeftToRightInContext:(id)arg1;
- (id)init;

@end
