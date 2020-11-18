//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class CALayer, UIColor, UIImage, UIImageView, UIView, _MKBalloonCalloutView;

@interface _MKBalloonAnnotationView : MKAnnotationView
{
    UIColor *_balloonTintColor;
    UIColor *_balloonStrokeColor;
    CALayer *_baseLayer;
    UIImageView *_smallImageView;
    UIImage *_largeImage;
    long long _style;
    _MKBalloonCalloutView *_calloutView;
}

@property (copy, nonatomic) UIColor *balloonStrokeColor; // @synthesize balloonStrokeColor=_balloonStrokeColor;
@property (copy, nonatomic) UIColor *balloonTintColor; // @synthesize balloonTintColor=_balloonTintColor;
@property (strong, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIImage *largeImage; // @synthesize largeImage=_largeImage;
@property (copy, nonatomic) UIImage *smallImage;

- (void).cxx_destruct;
- (id)_baseTransitionAnimation:(BOOL)arg1;
- (void)_updateBaseImage;
- (void)didMoveToWindow;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithAnnotation:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;

@end

