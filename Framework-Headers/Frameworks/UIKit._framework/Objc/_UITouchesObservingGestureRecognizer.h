//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer
{
    NSSet *_touches;
}

@property (copy, nonatomic) NSSet *touches; // @synthesize touches=_touches;

+ (BOOL)_shouldDefaultToTouches;
- (void).cxx_destruct;
- (BOOL)_affectedByGesture:(id)arg1;
- (BOOL)_allTouchesAreEndedOrCancelled:(id)arg1;
- (void)_updateTouchesFromEvent:(id)arg1;
- (BOOL)_wantsPartialTouchSequences;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

