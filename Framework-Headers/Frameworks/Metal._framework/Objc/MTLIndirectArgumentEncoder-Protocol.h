//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class NSString;
@protocol MTLBuffer, MTLDevice, MTLSamplerState, MTLTexture;

@protocol MTLIndirectArgumentEncoder <NSObject>

@property (readonly) unsigned long long alignment;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long encodedLength;
@property (copy) NSString *label;

- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setBuffer:(id<MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setIndirectArgumentBuffer:(id<MTLBuffer>)arg1 offset:(unsigned long long)arg2;
- (void)setIndirectArgumentBuffer:(id<MTLBuffer>)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setSamplerState:(id<MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id<MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
@end
