//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVMetadataFaceObject;

@interface CAMFaceResult : NSObject
{
    long long _identifier;
    double _rollAngle;
    AVMetadataFaceObject *_underlyingFaceObject;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) double rollAngle; // @synthesize rollAngle=_rollAngle;
@property (readonly, nonatomic) AVMetadataFaceObject *underlyingFaceObject; // @synthesize underlyingFaceObject=_underlyingFaceObject;

- (void).cxx_destruct;
- (id)burstMetadataRepresentation;
- (id)description;
- (id)initWithFaceObject:(id)arg1;

@end
