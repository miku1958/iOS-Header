//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLCaptureManager.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>

@interface CaptureMTLCaptureManager : MTLCaptureManager <CaptureMTLObject>
{
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

@property (readonly) id baseObject;
@property (readonly) unsigned long long streamReference;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;

- (void)dealloc;
- (id)initWithCaptureContext:(struct GTTraceContext *)arg1;
- (BOOL)isCapturing;
- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (BOOL)startCaptureWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)startCaptureWithDevice:(id)arg1;
- (void)startCaptureWithScope:(id)arg1;
- (void)stopCapture;
- (BOOL)supportsDestination:(long long)arg1;

@end

