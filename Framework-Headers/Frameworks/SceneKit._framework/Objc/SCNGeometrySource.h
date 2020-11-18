//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol MTLBuffer;

@interface SCNGeometrySource : NSObject <NSSecureCoding>
{
    struct __C3DMeshSource *_meshSource;
    NSData *_data;
    NSString *_semantic;
    long long _vectorCount;
    short _componentType;
    unsigned short _componentCount;
    struct CGColorSpace *_colorSpace;
    long long _dataOffset;
    long long _dataStride;
    unsigned char _mkSemantic;
    id<MTLBuffer> _mtlBuffer;
    long long _mtlVertexFormat;
    BOOL _encodeDataAsHalf;
}

@property (readonly, nonatomic) long long bytesPerComponent;
@property (readonly, nonatomic) long long componentsPerVector;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long dataOffset;
@property (readonly, nonatomic) long long dataStride;
@property (readonly, nonatomic) BOOL floatComponents;
@property (readonly, nonatomic) NSString *semantic;
@property (readonly, nonatomic) long long vectorCount;

+ (id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
+ (id)_geometrySourceWithSource:(id)arg1 vertexFormat:(unsigned long long)arg2;
+ (id)dataByConvertingDoublesToFloats:(const double *)arg1 count:(long long)arg2;
+ (id)dataWithPointArray:(const struct CGPoint *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)dataWithVector3Array:(const struct SCNVector3 *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;
+ (id)geometrySourceWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;
+ (id)geometrySourceWithColorComponents:(const float *)arg1 count:(long long)arg2 hasAlpha:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)geometrySourceWithColorData:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;
+ (id)geometrySourceWithMDLVertexAttribute:(id)arg1 mesh:(id)arg2;
+ (id)geometrySourceWithMeshSourceRef:(struct __C3DMeshSource *)arg1;
+ (id)geometrySourceWithNormals:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint *)arg1 count:(long long)arg2;
+ (id)geometrySourceWithVertices:(const struct SCNVector3 *)arg1 count:(long long)arg2;
+ (BOOL)supportsSecureCoding;
- (const void *)__CFObject;
- (void)_clearC3DCache;
- (short)_componentType;
- (BOOL)_encodeDataAsHalf;
- (void)_printData;
- (id)_uninterleaveData:(id)arg1 count:(unsigned long long)arg2 srcOffset:(unsigned long long)arg3 srcStride:(unsigned long long)arg4 dstStride:(unsigned long long)arg5;
- (id)dataByConvertingColorData:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 newColorSpace:(struct CGColorSpace **)arg3 vectorCount:(long long)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 newDataOffset:(long long *)arg9 newDataStride:(long long *)arg10;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 semantic:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 vectorCount:(long long)arg4 floatComponents:(BOOL)arg5 componentsPerVector:(long long)arg6 bytesPerComponent:(long long)arg7 dataOffset:(long long)arg8 dataStride:(long long)arg9;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;
- (id)initWithMeshSource:(struct __C3DMeshSource *)arg1;
- (const struct __C3DMeshSource *)meshSource;
- (id)mkSemantic;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (void)setMkSemantic:(id)arg1;
- (void)set_encodeDataAsHalf:(BOOL)arg1;

@end
