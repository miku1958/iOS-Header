//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PISmartColorAdjustmentController : PIAdjustmentController
{
    struct {
        double p75;
        double p98;
        double autoValue;
        double g98;
    } _stats;
    CDStruct_7982ab34 _smartSettings;
}

@property (nonatomic) double inputColor;
@property (nonatomic) double offsetCast;
@property (nonatomic) double offsetContrast;
@property (nonatomic) double offsetSaturation;
@property (copy, nonatomic) NSDictionary *statistics;

+ (id)attributeCastKey;
+ (id)attributeContrastKey;
+ (id)attributeVibrancyKey;
+ (id)inputCastKey;
+ (id)inputColorKey;
+ (id)inputContrastKey;
+ (id)inputSaturationKey;
+ (id)offsetCastKey;
+ (id)offsetContrastKey;
+ (id)offsetSaturationKey;
+ (id)statisticsKey;
- (void)_updateSettingsWithInputColor:(double)arg1;
- (id)computedSettings;
- (id)initWithAdjustment:(id)arg1;
- (double)inputCast;
- (double)inputContrast;
- (double)inputSaturation;
- (void)setInputCast:(double)arg1;
- (void)setInputContrast:(double)arg1;
- (void)setInputSaturation:(double)arg1;

@end
