//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, UIColor, UIImage, UIImageView;

@interface _MKBalloonCalloutView : UIView
{
    UIImageView *_shadowView;
    UIView *_containerView;
    UIColor *_balloonTintColor;
    UIColor *_strokeColor;
    UIColor *_innerStrokeColor;
    CAShapeLayer *_balloonShape;
    CALayer *_balloonInnerStrokeLayer;
    UIImageView *_balloonBodyImageView;
    UIImageView *_tailView;
    UIView *_innerBackgroundView;
    UIImageView *_imageView;
    struct CGSize _intrinsicSize;
    BOOL _originatesAsSmallBalloon;
    double _croppedImageScale;
    UIImageView *_contentViewMaskView;
    UIView *_contentView;
    long long _style;
    UIImage *_image;
    double _smallBalloonScale;
}

@property (copy, nonatomic) UIColor *balloonTintColor; // @synthesize balloonTintColor=_balloonTintColor;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property (copy, nonatomic) UIColor *innerStrokeColor; // @synthesize innerStrokeColor=_innerStrokeColor;
@property (nonatomic) BOOL originatesAsSmallBalloon; // @synthesize originatesAsSmallBalloon=_originatesAsSmallBalloon;
@property (nonatomic) double smallBalloonScale; // @synthesize smallBalloonScale=_smallBalloonScale;
@property (copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (struct CGRect)_centerFrame;
- (id)_generateInnerStrokeImage;
- (double)_innerDiameter;
- (void)_updateCroppedImage;
- (BOOL)calloutContainsPoint:(struct CGPoint)arg1;
- (void)didMoveToWindow;
- (void)hideCalloutAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hideCalloutAnimated:(BOOL)arg1 endVerticalOffset:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)showCalloutAnimated:(BOOL)arg1;
- (void)showCalloutAnimated:(BOOL)arg1 startVerticalOffset:(double)arg2;

@end
