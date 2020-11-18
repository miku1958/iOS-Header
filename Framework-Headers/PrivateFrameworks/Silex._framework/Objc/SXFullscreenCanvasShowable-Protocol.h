//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXFullscreenCanvasController, SXFullscreenCanvasViewController, SXFullscreenCaption, SXImageView, UIGestureRecognizer, UIView;
@protocol SXFullscreenCanvasShowable;

@protocol SXFullscreenCanvasShowable <NSObject>
- (SXFullscreenCanvasViewController *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 canvasViewControllerForShowable:(id<SXFullscreenCanvasShowable>)arg2 completionBlock:(void (^)(void))arg3;
- (struct CGRect)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 fullScreenFrameForShowable:(id<SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3 withinRect:(struct CGRect)arg4;
- (unsigned long long)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 numberOfViewsForShowable:(id<SXFullscreenCanvasShowable>)arg2;
- (struct CGRect)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 originalFrameForShowable:(id<SXFullscreenCanvasShowable>)arg2 onCanvasView:(UIView *)arg3 viewIndex:(unsigned long long)arg4;
- (SXImageView *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 originalViewForShowable:(id<SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 shouldAddGestureView:(UIView *)arg2 forShowable:(id<SXFullscreenCanvasShowable>)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id<SXFullscreenCanvasShowable>)arg2 shouldTransferToOriginalViewWithIndex:(unsigned long long)arg3;
- (unsigned long long)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 viewIndexForPoint:(struct CGPoint)arg2 inShowable:(id<SXFullscreenCanvasShowable>)arg3;
- (BOOL)requestInteractivityFocusForFullScreenCanvasController:(SXFullscreenCanvasController *)arg1;

@optional
- (SXFullscreenCaption *)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 captionForShowable:(id<SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 didHideShowable:(id<SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 didShowShowable:(id<SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id<SXFullscreenCanvasShowable>)arg2 didHideViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id<SXFullscreenCanvasShowable>)arg2 didShowViewWithIndex:(unsigned long long)arg3;
- (BOOL)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id<SXFullscreenCanvasShowable>)arg2 gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 showable:(id<SXFullscreenCanvasShowable>)arg2 willShowViewWithIndex:(unsigned long long)arg3;
- (void)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 willHideShowable:(id<SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
- (BOOL)fullScreenCanvasController:(SXFullscreenCanvasController *)arg1 willShowShowable:(id<SXFullscreenCanvasShowable>)arg2 viewIndex:(unsigned long long)arg3;
@end
