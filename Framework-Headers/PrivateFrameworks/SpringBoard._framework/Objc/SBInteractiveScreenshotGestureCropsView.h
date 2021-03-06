//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSObject, UIColor;
@protocol OS_dispatch_queue;

@interface SBInteractiveScreenshotGestureCropsView : UIView
{
    UIView *_bottomLeftCornerHorizontalView;
    UIView *_bottomLeftCornerVerticalView;
    UIView *_bottomRightCornerHorizontalView;
    UIView *_bottomRightCornerVerticalView;
    UIView *_topLeftCornerHorizontalView;
    UIView *_topLeftCornerVerticalView;
    UIView *_topRightCornerHorizontalView;
    UIView *_topRightCornerVerticalView;
    UIView *_bottomLineView;
    UIView *_bottomLineGrabberView;
    UIView *_leftLineView;
    UIView *_leftLineGrabberView;
    UIView *_rightLineView;
    UIView *_rightLineGrabberView;
    UIView *_topLineView;
    UIView *_topLineGrabberView;
    NSArray *_cornerViews;
    NSArray *_lineViews;
    NSArray *_lineGrabberViews;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _queue_displayScale;
    double _cornerAlpha;
    double _cornerEdgeLength;
    UIColor *_cornerColor;
    double _lineGrabberAlpha;
    double _lineGrabberEdgeLength;
    UIColor *_lineGrabberColor;
    double _grabberLineWidth;
    double _lineAlpha;
    double _lineWidth;
    UIColor *_lineColor;
    id _cropsCompositingFilter;
}

@property (nonatomic) double cornerAlpha; // @synthesize cornerAlpha=_cornerAlpha;
@property (strong, nonatomic) UIColor *cornerColor; // @synthesize cornerColor=_cornerColor;
@property (nonatomic) double cornerEdgeLength; // @synthesize cornerEdgeLength=_cornerEdgeLength;
@property (strong, nonatomic) id cropsCompositingFilter; // @synthesize cropsCompositingFilter=_cropsCompositingFilter;
@property (nonatomic) double grabberLineWidth; // @synthesize grabberLineWidth=_grabberLineWidth;
@property (nonatomic) double lineAlpha; // @synthesize lineAlpha=_lineAlpha;
@property (strong, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property (nonatomic) double lineGrabberAlpha; // @synthesize lineGrabberAlpha=_lineGrabberAlpha;
@property (strong, nonatomic) UIColor *lineGrabberColor; // @synthesize lineGrabberColor=_lineGrabberColor;
@property (nonatomic) double lineGrabberEdgeLength; // @synthesize lineGrabberEdgeLength=_lineGrabberEdgeLength;
@property (nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;

- (void).cxx_destruct;
- (void)_setPresentationValue:(id)arg1 forKey:(id)arg2;
- (void)_updateGeometryForBounds:(struct CGRect)arg1 shouldUsePresentationValues:(BOOL)arg2;
- (void)_updateGeometryOrDeferLayoutUsingModelBounds;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

