//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface LPHighlightGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startPointInWindowCoordinates;
}

- (struct CGPoint)_locationInWindow;
- (void)cancelHighlight;
- (void)startHighlightIfPossible;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateHighlight;

@end
