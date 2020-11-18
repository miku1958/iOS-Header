//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKBHandwritingView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokeView : UIView
{
    UIKBHandwritingView *_keyView;
    struct CGContext *_bitmapContext;
    double _scaleFactor;
    struct CGRect _aggregateInvalidRect;
}

@property (readonly, nonatomic) struct CGRect aggregateInvalidRect; // @synthesize aggregateInvalidRect=_aggregateInvalidRect;
@property (readonly, nonatomic) struct CGContext *bitmapContext; // @synthesize bitmapContext=_bitmapContext;
@property (weak, nonatomic) UIKBHandwritingView *keyView; // @synthesize keyView=_keyView;
@property (readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;

- (void).cxx_destruct;
- (BOOL)_wantsDeepDrawing;
- (void)addHandwritingPoint:(struct)arg1;
- (void)addTrapezoidFromFirstPoint:(struct)arg1 secondPoint:(struct)arg2;
- (void)clearRect:(struct CGRect)arg1;
- (struct CGRect)convertRectToBitmapCoordinates:(struct CGRect)arg1;
- (struct CGRect)convertRectToViewCoordinates:(struct CGRect)arg1;
- (void)createBitmapIfNeeded;
- (void)dealloc;
- (void)displayAggregateInvalidRect;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)handwritingPointToRect:(struct)arg1;
- (void)redrawStrokesInRect:(struct CGRect)arg1;
- (void)updateInkColor;

@end

