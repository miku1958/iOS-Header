//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMZoomButton, NSArray, NSString, UIImageView;

@interface CAMZoomButtonPlatter : UIView
{
    double _zoomFactor;
    NSArray *_zoomFactors;
    NSString *_contentSizeCategory;
    UIImageView *__platterBackgroundView;
    NSArray *__allButtons;
    CAMZoomButton *__zoomButton1;
    CAMZoomButton *__zoomButton2;
    CAMZoomButton *__zoomButton3;
}

@property (readonly, nonatomic) NSArray *_allButtons; // @synthesize _allButtons=__allButtons;
@property (readonly, nonatomic) UIImageView *_platterBackgroundView; // @synthesize _platterBackgroundView=__platterBackgroundView;
@property (readonly, nonatomic) CAMZoomButton *_zoomButton1; // @synthesize _zoomButton1=__zoomButton1;
@property (readonly, nonatomic) CAMZoomButton *_zoomButton2; // @synthesize _zoomButton2=__zoomButton2;
@property (readonly, nonatomic) CAMZoomButton *_zoomButton3; // @synthesize _zoomButton3=__zoomButton3;
@property (copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (nonatomic) long long orientation;
@property (nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property (readonly, nonatomic) CAMZoomButton *zoomFactorButton;
@property (copy, nonatomic) NSArray *zoomFactors; // @synthesize zoomFactors=_zoomFactors;

- (void).cxx_destruct;
- (id)_createPlatterImageForContentSize:(id)arg1;
- (void)_updateButtonsAnimated:(BOOL)arg1;
- (void)_updateForContentSize;
- (double)baseZoomFactorForButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)nearestZoomButtonForTouch:(id)arg1;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setZoomFactor:(double)arg1 animated:(BOOL)arg2;

@end
