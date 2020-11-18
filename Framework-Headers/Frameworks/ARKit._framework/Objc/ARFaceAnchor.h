//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARAnchor.h>

#import <ARKit/ARTrackable-Protocol.h>

@class ARFaceGeometry, ARFaceTrackingData, MISSING_TYPE, NSDictionary, NSString;

@interface ARFaceAnchor : ARAnchor <ARTrackable>
{
    NSDictionary *_blendShapeCoefficientsDictionary;
    BOOL _isTracked;
    ARFaceGeometry *_geometry;
    ARFaceTrackingData *_trackingData;
}

@property (readonly, nonatomic) NSDictionary *blendShapes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ARFaceGeometry *geometry; // @synthesize geometry=_geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isTracked; // @synthesize isTracked=_isTracked;
@property (readonly) Class superclass;
@property (strong, nonatomic) ARFaceTrackingData *trackingData; // @synthesize trackingData=_trackingData;

+ (id)blendShapeMapping;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (const MISSING_TYPE **)imageVertices;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 trackingData:(id)arg2;
- (BOOL)isEqualToFaceAnchor:(id)arg1;

@end
