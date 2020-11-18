//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARLightEstimate.h>

#import <ARKit/NSCopying-Protocol.h>

@class MISSING_TYPE, NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying>
{
    CDStruct_9c26ff66 _sphericalHarmonicIntensity;
    NSData *_sphericalHarmonicsCoefficients;
    double _primaryLightIntensity;
    double _timestamp;
    double _confidenceRating;
    MISSING_TYPE *_primaryLightDirection;
}

@property (nonatomic) double confidenceRating; // @synthesize confidenceRating=_confidenceRating;
@property (readonly, nonatomic) MISSING_TYPE *primaryLightDirection; // @synthesize primaryLightDirection=_primaryLightDirection;
@property (readonly, nonatomic) double primaryLightIntensity; // @synthesize primaryLightIntensity=_primaryLightIntensity;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirectionalLightEstimate:(id)arg1;
- (id)initWithSphericalHarmonics:(CDStruct_9c26ff66)arg1 temperature:(double)arg2;
- (id)lightEstimateByApplyingRotation:(CDStruct_8e0628e6)arg1;

@end

