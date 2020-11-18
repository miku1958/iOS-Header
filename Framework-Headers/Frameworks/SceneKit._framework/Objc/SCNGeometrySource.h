//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface SCNGeometrySource : NSObject <NSSecureCoding>
{
    struct __C3DMeshSource *_meshSource;
    NSData *_data;
    NSString *_semantic;
    long long _vectorCount;
    BOOL _floatComponents;
    long long _componentsPerVector;
    long long _bytesPerComponent;
    long long _dataOffset;
    long long _dataStride;
    unsigned char _mkSemantic;
}

@property (readonly, nonatomic) long long bytesPerComponent;
@property (readonly, nonatomic) long long componentsPerVector;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long dataOffset;
@property (readonly, nonatomic) long long dataStride;
@property (readonly, nonatomic) BOOL floatComponents;
@property (readonly, nonatomic) NSString *semantic;
@property (readonly, nonatomic) long long vectorCount;

+ (id)dataWithPointArray:(const struct CGPoint *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)dataWithVector3Array:(const struct SCNVector3 *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)geometrySourceWithNormals:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithVertices:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void)_clearC3DCache;
- (short)baseTypeForDataFormat;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
- (id)initWithMeshSource:(struct __C3DMeshSource *)arg1;
- (struct __C3DMeshSource *)meshSource;
- (id)mkSemantic;
- (void)setMkSemantic:(id)arg1;

@end
