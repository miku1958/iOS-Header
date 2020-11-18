//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AnnotationKit/PKCanvasViewDelegate-Protocol.h>

@class AKPageController, NSHashTable, NSString, PKCanvasView, PKInk, UIGestureRecognizer;
@protocol AKInkOverlayViewDelegate;

@interface AKInkOverlayView : UIView <PKCanvasViewDelegate>
{
    PKInk *_ink;
    NSHashTable *_reportedStrokes;
    AKPageController *_pageController;
    id _drawingUndoTarget;
    PKCanvasView *_canvasView;
    id<AKInkOverlayViewDelegate> _delegate;
    struct CGSize _canvasSizeInPKDrawingSpace;
}

@property struct CGSize canvasSizeInPKDrawingSpace; // @synthesize canvasSizeInPKDrawingSpace=_canvasSizeInPKDrawingSpace;
@property (strong) PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<AKInkOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;
@property (weak) id drawingUndoTarget; // @synthesize drawingUndoTarget=_drawingUndoTarget;
@property (readonly) unsigned long long hash;
@property (copy) PKInk *ink;
@property (weak) AKPageController *pageController; // @synthesize pageController=_pageController;
@property (readonly, nonatomic) UIGestureRecognizer *pinchGestureRecognizer;
@property (readonly) Class superclass;

+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
+ (id)newDrawingUndoTargetWithPageController:(id)arg1;
- (void).cxx_destruct;
- (void)_calculateFixedPixelSize:(struct CGSize *)arg1 drawingScale:(double *)arg2;
- (void)_updateCanvasViewInk;
- (void)awakeFromNib;
- (void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
- (BOOL)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
- (void)canvasViewDidBeginNewStroke:(id)arg1;
- (void)canvasViewDidCancelStroke:(id)arg1;
- (void)canvasViewDidEndStroke:(id)arg1;
- (void)commonInit;
- (void)commonPostInit;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
- (void)layoutSubviews;
- (void)removeStrokesFromDrawing:(id)arg1;
- (void)setupInkView;
- (void)teardown;
- (void)willMoveToSuperview:(id)arg1;

@end

