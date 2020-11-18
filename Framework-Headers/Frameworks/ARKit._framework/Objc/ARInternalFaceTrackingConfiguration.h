//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARConfiguration.h>

@interface ARInternalFaceTrackingConfiguration : ARConfiguration
{
    BOOL _useAlternativeResources;
}

@property (nonatomic) BOOL useAlternativeResources; // @synthesize useAlternativeResources=_useAlternativeResources;

+ (BOOL)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)renderingTechnique;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(BOOL)arg1;
- (void)setMirroredFrameOutput:(BOOL)arg1;
- (id)techniques;

@end

