//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformOrientation : NUImageTransform
{
    CDStruct_d58201db _inputImageSize;
    long long _orientation;
}

@property (readonly) long long orientation; // @synthesize orientation=_orientation;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (id)inverseTransform;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToGeometryTransformOrientation:(id)arg1;
- (void)nu_updateDigest:(id)arg1;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;

@end

