//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UIViewAnimating <NSObject>

@property (nonatomic) double fractionComplete;
@property (nonatomic, getter=isReversed) BOOL reversed;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) long long state;

- (void)finishAnimationAtPosition:(long long)arg1;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)stopAnimation:(BOOL)arg1;
@end

