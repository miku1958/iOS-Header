//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFParallaxSettings.h>

@interface SBFWallpaperParallaxSettings : SBFParallaxSettings
{
    double _overhangX;
    double _overhangY;
    double _perspectiveTransform;
}

@property double overhangX; // @synthesize overhangX=_overhangX;
@property double overhangY; // @synthesize overhangY=_overhangY;
@property double perspectiveTransform; // @synthesize perspectiveTransform=_perspectiveTransform;

+ (long long)_currentDeviceType;
+ (struct CGSize)_requiredOverhangSizeForCurrentDevice;
+ (struct CGSize)_requiredOverhangSizeForDeviceType:(long long)arg1;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1;
+ (struct CGSize)bestWallpaperSizeForParallaxFactor:(double)arg1 portrait:(BOOL)arg2;
+ (struct CGSize)bestWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2 parallaxFactor:(double)arg3 portrait:(BOOL)arg4;
+ (struct CGSize)minimumWallpaperSizeForCurrentDevice;
+ (struct CGSize)minimumWallpaperSizeForWallpaperSize:(struct CGSize)arg1 deviceType:(long long)arg2;
+ (double)minimumZoomScaleForCurrentDeviceForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2;
+ (double)minimumZoomScaleForWallpaperSize:(struct CGSize)arg1 parallaxFactor:(double)arg2 deviceType:(long long)arg3;
+ (struct CGSize)overhangSizeForCurrentDevice;
+ (struct CGSize)overhangSizeForDeviceType:(long long)arg1;
+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

