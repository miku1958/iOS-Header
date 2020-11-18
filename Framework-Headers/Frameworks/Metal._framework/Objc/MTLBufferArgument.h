//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLArgumentInternal.h>

__attribute__((visibility("hidden")))
@interface MTLBufferArgument : MTLArgumentInternal
{
    unsigned int _dataType:15;
    unsigned int _vertexDescriptorBuffer:1;
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

- (unsigned long long)bufferALUType;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferDataType;
- (id)bufferIndirectArgumentType;
- (unsigned long long)bufferPixelFormat;
- (id)bufferPointerType;
- (id)bufferStructType;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(BOOL)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(BOOL)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12;
- (BOOL)isVertexDescriptorBuffer;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setDataSize:(unsigned long long)arg1;
- (void)setStructType:(id)arg1;
- (void)setStructType:(id)arg1 doRetain:(BOOL)arg2;
- (void)setVertexDescriptorBuffer:(BOOL)arg1;
- (id)structType;

@end
