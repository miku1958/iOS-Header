//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, _UIBackdropView;

@interface NCMaterialView : UIView
{
    unsigned long long _styleOptions;
    _UIBackdropView *_backdropView;
    UIView *_lightOverlayView;
    UIView *_whiteOverlayView;
    UIView *_cutoutOverlayView;
    UIView *_colorInfusionView;
    double _colorInfusionViewAlpha;
    double _subviewsContinuousCornerRadius;
}

@property (strong, nonatomic) UIView *colorInfusionView; // @synthesize colorInfusionView=_colorInfusionView;
@property (nonatomic, getter=_colorInfusionViewAlpha, setter=_setColorInfusionViewAlpha:) double colorInfusionViewAlpha; // @synthesize colorInfusionViewAlpha=_colorInfusionViewAlpha;
@property (nonatomic) double grayscaleValue;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic, getter=_subviewsContinuousCornerRadius, setter=_setSubviewsContinuousCornerRadius:) double subviewsContinuousCornerRadius; // @synthesize subviewsContinuousCornerRadius=_subviewsContinuousCornerRadius;

+ (id)materialViewWithStyleOptions:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_configureBackdropViewIfNecessary;
- (void)_configureColorInfusionViewIfNecessary;
- (void)_configureCutoutOverlayViewIfNecessary;
- (void)_configureIfNecessary;
- (void)_configureLightOverlayViewIfNecessary;
- (void)_configureWhiteOverlayViewIfNecessary;
- (void)_reduceTransparencyStatusDidChange;
- (void)dealloc;
- (id)initWithStyleOptions:(unsigned long long)arg1;

@end
