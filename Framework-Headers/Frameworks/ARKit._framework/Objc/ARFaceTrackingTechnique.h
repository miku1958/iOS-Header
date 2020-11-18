//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARImageBasedTechnique.h>

@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique
{
    NSUUID *_singleUserAnchorIdentifier;
    BOOL _isFaceTracked;
    long long _maximumNumberOfTrackedFaces;
}

@property BOOL isFaceTracked; // @synthesize isFaceTracked=_isFaceTracked;
@property (readonly, nonatomic) long long maximumNumberOfTrackedFaces; // @synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces;

+ (BOOL)isSupported;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;

@end
