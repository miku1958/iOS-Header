//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVApplePortraitMetadataInternal, NSData, NSIndexSet;

@interface AVApplePortraitMetadata : NSObject <NSSecureCoding>
{
    AVApplePortraitMetadataInternal *_internal;
}

@property (readonly) float apertureFocalRatio;
@property (readonly) NSData *faceObservationsData;
@property (readonly) int faceOrientation;
@property (readonly) struct CGRect focusRectangle;
@property (readonly) NSIndexSet *indexesOfShallowDepthOfFieldObservations;
@property (readonly) float luminanceNoiseAmplitude;
@property (readonly) float maximumApertureFocalRatio;
@property (readonly) float minimumApertureFocalRatio;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternal:(id)arg1;
- (id)initWithPortraitMetadataDictionary:(id)arg1;

@end

