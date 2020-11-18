//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FFTMeter : NSObject
{
    struct vDSP_DFT_SetupStruct *fftSetup;
    struct DSPSplitComplex dspSplitComplex;
    float sampleHistory[3840];
    float magnitudeBuffer[1920];
    float fftBuffer[3840];
    float windowBuffer[3840];
    float windowHistory[3840];
    float octaveDbOld[54];
    float octaveDb[54];
    float octaveDbFilt[55];
    float lerpIdxs[66];
    float fftNormFactor;
    float adjust0DB;
}

- (id)computeWithSampleBuffer:(char *)arg1 numSamples:(unsigned long long)arg2 voiceActive:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end

