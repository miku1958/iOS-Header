//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBatteryView.h>

@interface _UIStaticBatteryView : _UIBatteryView
{
    long long _inflightBoltAnimationCount;
}

+ (id)_batteryBodyImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 batteryRect:(struct CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5;
+ (id)_batteryBodyImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 batteryRect:(struct CGRect)arg3 cornerRadius:(double)arg4 lineWidth:(double)arg5 withBoltCutOutOfSize:(struct CGSize)arg6 inRect:(struct CGRect)arg7 boltFlipped:(BOOL)arg8;
+ (id)_batteryBoltImageWithSize:(struct CGSize)arg1 boltSize:(struct CGSize)arg2 forScale:(double)arg3;
+ (id)_batteryBoltMaskImageWithSize:(struct CGSize)arg1 boltSize:(struct CGSize)arg2 forScale:(double)arg3;
+ (id)_batteryFillImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3;
+ (id)_batteryFillImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 cornerRadius:(double)arg3 withBoltCutOutOfSize:(struct CGSize)arg4 inRect:(struct CGRect)arg5 boltFlipped:(BOOL)arg6;
+ (id)_batteryPinImageWithSize:(struct CGSize)arg1 forScale:(double)arg2 complexPinPath:(BOOL)arg3;
+ (id)_imageByPunchingImage:(id)arg1 inRect:(struct CGRect)arg2 flippedHorizontally:(BOOL)arg3 outOfImage:(id)arg4 inRect:(struct CGRect)arg5 size:(struct CGSize)arg6 scale:(double)arg7;
+ (id)_imageWithRenderedBezierPath:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 pathScaleFactor:(double)arg4 stroke:(BOOL)arg5;
+ (id)_renderedImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withActions:(CDUnknownBlockType)arg3;
- (double)_batteryBoltLargeScaleFactor;
- (double)_batteryBoltSmallScaleFactor;
- (double)_batteryPathScaleFactor;
- (struct CGSize)_boltPathSize;
- (struct CGRect)_boltRectForTraitCollection:(id)arg1 boltSize:(struct CGSize)arg2;
- (void)_createBodyLayers;
- (void)_createBoltLayersWithSize:(struct CGSize)arg1;
- (void)_createFillLayer;
- (void)_didFinishAnimatingBoltToVisible:(BOOL)arg1;
- (void)_updateBatteryFillColor;
- (void)_updateBodyColors;
- (struct CGRect)_updateBodyLayers;
- (void)_updateFillLayer;
- (BOOL)_useImagesWithCutoutsForBolt;
- (void)_willBeginAnimatingBoltToVisible:(BOOL)arg1;

@end

