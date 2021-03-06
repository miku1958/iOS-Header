//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

#import <NeutrinoCore/NUGLFramebufferAttachable-Protocol.h>

@class NUIOSurface, NUPixelFormat;

@interface NUGLTexture : NUGLObject <NUGLFramebufferAttachable>
{
    NUPixelFormat *_format;
    CDStruct_d58201db _size;
}

@property (readonly, nonatomic) NUPixelFormat *format; // @synthesize format=_format;
@property (readonly) BOOL isSurface;
@property (readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
@property (readonly, nonatomic) NUIOSurface *surface;

+ (id)textureWithIOSurface:(id)arg1;
- (void).cxx_destruct;
- (void)allocateStorage:(id)arg1;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)copyRect:(CDStruct_996ac03c)arg1 fromBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)copyRect:(CDStruct_996ac03c)arg1 fromTexture:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)copyRect:(CDStruct_996ac03c)arg1 toBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)copyRect:(CDStruct_996ac03c)arg1 toTexture:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 context:(id)arg4;
- (void)delete;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)drawRect:(CDStruct_996ac03c)arg1 atPoint:(CDStruct_912cb5d2)arg2 context:(id)arg3;
- (void)ensure:(id)arg1;
- (void)generate:(id)arg1;
- (id)init;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)newRenderDestination;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)write:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

