//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface PKUndoSwipeGestureRecognizer : UIGestureRecognizer
{
    BOOL _startedSwipe;
    struct CGPoint _startCentroid;
    struct CGPoint _swipeStartCentroid;
    unsigned long long _touchCount;
    BOOL _swipeRight;
}

@property (nonatomic) BOOL swipeRight; // @synthesize swipeRight=_swipeRight;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
