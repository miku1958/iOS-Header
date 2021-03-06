//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLFunctionSPI-Protocol.h>

@class CaptureMTLDevice, CaptureMTLLibrary, MTLType, NSArray, NSDictionary, NSString;
@protocol MTLDevice, MTLFunction, MTLFunctionSPI;

@interface CaptureMTLFunction : NSObject <MTLFunctionSPI, CaptureMTLObject>
{
    id<MTLFunctionSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    CaptureMTLLibrary *_captureLibrary;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

@property (readonly) NSArray *arguments;
@property (readonly) id<MTLFunction> baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly, copy) NSString *filePath;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) long long lineNumber;
@property (readonly) NSString *name;
@property (readonly) unsigned long long options;
@property (readonly) long long patchControlPointCount;
@property (readonly) unsigned long long patchType;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;
@property (readonly, copy) NSString *unpackedFilePath;
@property (readonly) NSArray *vertexAttributes;

+ (BOOL)newCaptureFunction:(out id *)arg1 associatedWithBaseFunction:(id)arg2 captureLibrary:(id)arg3;
- (void).cxx_destruct;
- (const CDStruct_5af0f983 *)bitCodeHash;
- (id)bitcodeData;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)initWithBaseObject:(id)arg1 captureLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 binaryArchives:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 pipelineLibrary:(id)arg3;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (id)originalObject;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;
- (id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)swapObject:(id)arg1;
- (void)touch;

@end

