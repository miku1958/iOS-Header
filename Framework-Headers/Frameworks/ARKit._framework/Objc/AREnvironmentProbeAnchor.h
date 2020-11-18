//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARAnchor.h>

@class MISSING_TYPE, NSData, NSUUID;
@protocol MTLTexture;

@interface AREnvironmentProbeAnchor : ARAnchor
{
    float _opaquePixelPercentage;
    id<MTLTexture> _environmentTexture;
    NSData *_colorHistogram;
    NSUUID *_trackedPlaneIdentifier;
    MISSING_TYPE *_extent;
}

@property (strong, nonatomic) NSData *colorHistogram; // @synthesize colorHistogram=_colorHistogram;
@property (strong, nonatomic) id<MTLTexture> environmentTexture; // @synthesize environmentTexture=_environmentTexture;
@property (readonly, nonatomic) MISSING_TYPE *extent; // @synthesize extent=_extent;
@property (nonatomic) float opaquePixelPercentage; // @synthesize opaquePixelPercentage=_opaquePixelPercentage;
@property (strong, nonatomic) NSUUID *trackedPlaneIdentifier; // @synthesize trackedPlaneIdentifier=_trackedPlaneIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 onPlane:(struct ARTexturedPlane)arg2;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithIdentifier:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 extent: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 transform:(CDStruct_14d5dc5e)arg2;
- (id)initWithName:(id)arg1 transform:(CDStruct_14d5dc5e)arg2 extent: /* Error: Ran out of types for this method. */;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1;
- (id)initWithTransform:(CDStruct_14d5dc5e)arg1 extent: /* Error: Ran out of types for this method. */;

@end
