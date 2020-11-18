//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MaterialKit/MTSystemModuleMaterialSettings.h>

#import <MaterialKit/MTMaterialSettings_v2-Protocol.h>
#import <MaterialKit/_MTMaterialPerformanceConfiguring-Protocol.h>

@class MTVibrantStylingProvider, NSString, UIColor;

@interface MTSystemModuleSheerMaterialSettings : MTSystemModuleMaterialSettings <MTMaterialSettings_v2, _MTMaterialPerformanceConfiguring>
{
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double brightness;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double luminanceAlpha;
@property (nonatomic) double saturation;
@property (readonly) Class superclass;
@property (nonatomic) double tintAlpha;
@property (readonly, copy, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL usesLuminanceMap;
@property (readonly, weak, nonatomic) MTVibrantStylingProvider *vibrantStylingProvider;

+ (id)sharedMaterialSettings;
- (double)_backdropScaleForOptions:(unsigned long long)arg1;
- (id)_blurInputQualityForOptions:(unsigned long long)arg1;
- (void)setDefaultValues;
- (double)zoom;

@end

