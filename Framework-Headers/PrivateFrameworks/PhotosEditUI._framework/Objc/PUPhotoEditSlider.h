//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <PhotosEditUI/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSString, PUPhotoEditPrecisionLevelSlider, UIColor, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSlider : UIControl <UIScrollViewDelegate>
{
    NSMutableArray *_constraints;
    double _value;
    double _defaultValue;
    double _minimumValue;
    double _maximumValue;
    PUPhotoEditPrecisionLevelSlider *_slider;
    UIView *_levelIndicatorView;
    UIScrollView *_contentScrollView;
    long long _layoutOrientation;
}

@property (strong, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *indicatorColor;
@property (nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property (strong, nonatomic) UIView *levelIndicatorView; // @synthesize levelIndicatorView=_levelIndicatorView;
@property (nonatomic) unsigned long long mainTickMarkInterval;
@property (nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property (nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property (strong, nonatomic) PUPhotoEditPrecisionLevelSlider *slider; // @synthesize slider=_slider;
@property (readonly) Class superclass;
@property (nonatomic) double value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)_setNormalizedProgressValue:(double)arg1;
- (void)_setValue:(double)arg1 shouldSendActions:(BOOL)arg2 shouldUpdateScrollPosition:(BOOL)arg3;
- (void)_updateScrollViewPosition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layoutOrientation:(long long)arg2;
- (void)layoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateConstraints;

@end

