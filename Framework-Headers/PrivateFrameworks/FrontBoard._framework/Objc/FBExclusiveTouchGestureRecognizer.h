//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol FBExclusiveTouchGestureRecognizerDelegate;

@interface FBExclusiveTouchGestureRecognizer : UIGestureRecognizer
{
    BOOL _achievedMaximumAbsoluteAccumulatedMovement;
    struct CGPoint _maximumAbsoluteAccumulatedMovement;
    struct CGPoint _accumulatedMovement;
}

@property (readonly, nonatomic) struct CGPoint accumulatedMovement; // @synthesize accumulatedMovement=_accumulatedMovement;
@property (readonly, nonatomic) BOOL achievedMaximumAbsoluteAccumulatedMovement; // @synthesize achievedMaximumAbsoluteAccumulatedMovement=_achievedMaximumAbsoluteAccumulatedMovement;
@property (weak, nonatomic) id<FBExclusiveTouchGestureRecognizerDelegate> delegate; // @dynamic delegate;
@property (nonatomic) struct CGPoint maximumAbsoluteAccumulatedMovement; // @synthesize maximumAbsoluteAccumulatedMovement=_maximumAbsoluteAccumulatedMovement;

- (id)description;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

