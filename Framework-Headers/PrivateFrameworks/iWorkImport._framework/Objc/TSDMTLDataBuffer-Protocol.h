//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>
#import <iWorkImport/TSDGPUDataBufferSharedAccessors-Protocol.h>

@class NSArray;
@protocol MTLDevice, MTLRenderCommandEncoder, TSDGLDataBuffer, TSDMTLDataBuffer;

@protocol TSDMTLDataBuffer <NSObject, TSDGPUDataBufferSharedAccessors>

@property (readonly) unsigned long long centerAttributeIndex;
@property (nonatomic) unsigned long long metalDrawMode;
@property (readonly) unsigned long long positionAttributeIndex;
@property (readonly) unsigned long long texCoordAttributeIndex;

+ (id<TSDMTLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 meshSize:(struct CGSize)arg2 device:(id<MTLDevice>)arg3;
+ (id<TSDGLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 quadParticleCount:(unsigned long long)arg2 device:(id<MTLDevice>)arg3;
+ (id<TSDMTLDataBuffer>)newDataBufferWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(BOOL)arg4 device:(id<MTLDevice>)arg5;
+ (id<TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 device:(id<MTLDevice>)arg3;
+ (id<TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 device:(id<MTLDevice>)arg4;
+ (id<TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(BOOL)arg4 device:(id<MTLDevice>)arg5;
+ (id<TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5 device:(id<MTLDevice>)arg6;
+ (id<TSDMTLDataBuffer>)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(BOOL)arg3 device:(id<MTLDevice>)arg4;
- (void)disableWithDevice:(id<MTLDevice>)arg1;
- (void)drawWithEncoder:(id<MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id<MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (void)enableDataBuffer;
- (void)encodeWithEncoder:(id<MTLRenderCommandEncoder>)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(NSArray *)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 doubleBuffered:(BOOL)arg4;
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(BOOL)arg4 includeCenterAttribute:(BOOL)arg5;
- (void)updateDataBufferAttributesWithBlock:(void (^)(struct *, unsigned long long))arg1;
- (void)updateMetalDataBufferAttributes:(NSArray *)arg1 withBlock:(void (^)(struct *, unsigned long long))arg2;
@end

