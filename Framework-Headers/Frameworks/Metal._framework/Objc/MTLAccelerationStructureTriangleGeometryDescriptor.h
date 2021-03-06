//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLAccelerationStructureGeometryDescriptor.h>

@protocol MTLBuffer;

@interface MTLAccelerationStructureTriangleGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor
{
    id<MTLBuffer> _vertexBuffer;
    unsigned long long _vertexBufferOffset;
    unsigned long long _vertexStride;
    id<MTLBuffer> _indexBuffer;
    unsigned long long _indexBufferOffset;
    unsigned long long _indexType;
    unsigned long long _triangleCount;
}

@property (strong, nonatomic) id<MTLBuffer> indexBuffer; // @synthesize indexBuffer=_indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset; // @synthesize indexBufferOffset=_indexBufferOffset;
@property (nonatomic) unsigned long long indexType; // @synthesize indexType=_indexType;
@property (nonatomic) unsigned long long triangleCount; // @synthesize triangleCount=_triangleCount;
@property (strong, nonatomic) id<MTLBuffer> vertexBuffer; // @synthesize vertexBuffer=_vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset; // @synthesize vertexBufferOffset=_vertexBufferOffset;
@property (nonatomic) unsigned long long vertexStride; // @synthesize vertexStride=_vertexStride;

+ (id)descriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

