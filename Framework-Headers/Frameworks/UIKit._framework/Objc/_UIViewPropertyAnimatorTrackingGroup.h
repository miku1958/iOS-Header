//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewImplicitlyAnimating-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIViewPropertyAnimatorTrackingGroup : NSObject <UIViewImplicitlyAnimating>
{
    NSArray *_trackingAnimators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fractionComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isReversed) BOOL reversed;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) long long state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *trackingAnimators; // @synthesize trackingAnimators=_trackingAnimators;

- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (void)finishAnimationAtPosition:(long long)arg1;
- (id)initWithAnimators:(id)arg1;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)stopAnimation:(BOOL)arg1;

@end

