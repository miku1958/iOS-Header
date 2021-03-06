//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraEditKit/NSObject-Protocol.h>

@class UIColor;

@protocol CEKAbstractSlider <NSObject>

@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic) CDStruct_ae5a35ae gradientInsets;
@property (nonatomic) double labelVerticalPadding;
@property (nonatomic) long long sliderVerticalAlignment;
@property (nonatomic) double sliderVerticalOffset;
@property (nonatomic) long long textOrientation;
@property (nonatomic) long long titleAlignment;
@property (nonatomic) BOOL useLegibilityShadows;
@property (nonatomic) BOOL useTickMarkLegibilityShadows;

- (void)removeGradients;
- (void)setOpaqueGradientsWithColor:(UIColor *)arg1;
- (void)setTextOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setTransparentGradients;
@end

