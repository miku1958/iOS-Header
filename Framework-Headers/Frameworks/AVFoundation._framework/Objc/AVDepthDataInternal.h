//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCameraCalibrationData, NSData;

__attribute__((visibility("hidden")))
@interface AVDepthDataInternal : NSObject
{
    struct __CVBuffer *pixelBuffer;
    int version;
    long long quality;
    BOOL filtered;
    long long accuracy;
    AVCameraCalibrationData *calibrationData;
    float depthBlurEffectSimulatedAperture;
    NSData *depthBlurEffectRenderingParameters;
    BOOL portraitScoreIsHigh;
    float portraitScore;
}

@end

