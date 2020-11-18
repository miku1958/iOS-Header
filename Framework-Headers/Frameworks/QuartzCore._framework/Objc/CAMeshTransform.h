//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    void *_impl;
    unsigned long long _normalization;
    long long _subdivisionSteps;
}

@property (readonly, copy) NSString *depthNormalization;
@property (readonly) unsigned long long faceCount;
@property (readonly) int subdivisionSteps;
@property (readonly) unsigned long long vertexCount;

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;
+ (id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
+ (BOOL)supportsSecureCoding;
- (struct Object *)CA_copyRenderValue;
- (double)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;
- (BOOL)_constructWithData:(id)arg1;
- (id)_data;
- (id)_init;
- (id)_initWithMeshTransform:(id)arg1;
- (id)_subdivideToDepth:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CAMeshFace)faceAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;
- (id)meshTransformForLayer:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct CAMeshVertex)vertexAtIndex:(unsigned long long)arg1;

@end

