//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIPortraitEffect.h>

__attribute__((visibility("hidden")))
@interface CIPortraitEffectLight : CIPortraitEffect
{
}

- (id)_enrich;
- (id)_eyeBrightenSoftlight;
- (id)_mixKernel;
- (id)_textureAdd;
- (id)_textureDiff;
- (id)_whitenTeeth;
- (id)enrichImage:(id)arg1;
- (id)eyeBlurForLandmarks:(id)arg1;
- (id)faceMaskForLandmarks:(id)arg1;
- (id)imageForLandmarks:(id)arg1;
- (id)maskForLandmarks:(id)arg1 withFilterNamed:(id)arg2;
- (id)outputImage;
- (id)processEyesIn:(id)arg1 withEyeBlur:(id)arg2 landmarks:(id)arg3;
- (id)processSkinIn:(id)arg1 withFaceMask:(id)arg2;
- (id)processSkinIn:(id)arg1 withSkinMask:(id)arg2;
- (id)processTeethIn:(id)arg1 withFaceMask:(id)arg2;
- (id)processTeethIn:(id)arg1 withTeethMask:(id)arg2;
- (id)skinMaskForLandmarks:(id)arg1;
- (id)teethMaskForLandmarks:(id)arg1;

@end
