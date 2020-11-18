//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class TSDiOSCanvasViewController, UIGestureRecognizer, UITouch, UIView, UIViewController;

@protocol TSDiOSCanvasViewControllerDelegate <NSObject>

@optional
- (BOOL)allowEditMenuToAppear;
- (BOOL)allowTouchOutsideCanvasView:(UITouch *)arg1 forGesture:(UIGestureRecognizer *)arg2;
- (Class)canvasViewClassOverride;
- (BOOL)canvasViewController:(TSDiOSCanvasViewController *)arg1 enableSwipeGestureWithNumberOfTouches:(unsigned long long)arg2;
- (BOOL)canvasViewController:(TSDiOSCanvasViewController *)arg1 shouldBeginTapHoldDragAtPoint:(struct CGPoint)arg2;
- (BOOL)canvasViewControllerShouldShowScaleFeedback:(TSDiOSCanvasViewController *)arg1;
- (void)handleFindTapAtPoint:(struct CGPoint)arg1;
- (BOOL)inFindReplaceMode;
- (BOOL)isPopoverGestureInFlight;
- (BOOL)shouldIgnoreTextGestures;
- (UIViewController *)viewControllerForPresentingAnnotationAuthorUI;
- (UIView *)viewForGestureRecognizer:(UIGestureRecognizer *)arg1;
@end

