//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUImageTransform : NUGeometryTransform
{
}

- (id)description;
- (unsigned long long)hash;
- (id)inverseTransform;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIdentityImageTransform;
- (id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)transformByRotateZ:(double)arg1;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (struct CGRect)transformRect:(struct CGRect)arg1;

@end
