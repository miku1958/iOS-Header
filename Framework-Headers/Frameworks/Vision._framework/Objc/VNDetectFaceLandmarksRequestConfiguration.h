//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration
{
    BOOL _refineMouthRegion;
    BOOL _refineLeftEyeRegion;
    BOOL _refineRightEyeRegion;
    BOOL _performBlinkDetection;
    NSNumber *_cascadeStepCount;
    unsigned long long _constellation;
}

@property (strong, nonatomic) NSNumber *cascadeStepCount; // @synthesize cascadeStepCount=_cascadeStepCount;
@property (nonatomic) unsigned long long constellation; // @synthesize constellation=_constellation;
@property (nonatomic) BOOL performBlinkDetection; // @synthesize performBlinkDetection=_performBlinkDetection;
@property (nonatomic) BOOL refineLeftEyeRegion; // @synthesize refineLeftEyeRegion=_refineLeftEyeRegion;
@property (nonatomic) BOOL refineMouthRegion; // @synthesize refineMouthRegion=_refineMouthRegion;
@property (nonatomic) BOOL refineRightEyeRegion; // @synthesize refineRightEyeRegion=_refineRightEyeRegion;

+ (BOOL)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

