//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UISwipeDismissalGestureRecognizer : UIGestureRecognizer
{
    double _allowableMovement;
    struct CGPoint _originalTouchPoint;
}

@property (nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property (nonatomic) struct CGPoint originalTouchPoint; // @synthesize originalTouchPoint=_originalTouchPoint;

+ (BOOL)_shouldDefaultToTouches;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

