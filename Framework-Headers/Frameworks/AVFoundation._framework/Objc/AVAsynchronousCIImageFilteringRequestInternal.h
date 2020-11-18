//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsynchronousVideoCompositionRequest, CIImage;

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject
{
    AVAsynchronousVideoCompositionRequest *_compositingRequest;
    CDUnknownBlockType _cancellationTest;
    CDUnknownBlockType _defaultCIContextProvider;
    CDUnknownBlockType _completionHandler;
    CIImage *_sourceCIImage;
    struct __CVBuffer *_sourcePBuf;
    struct CGColorSpace *_dstColorSpace;
}

@property (copy, nonatomic) CDUnknownBlockType cancellationTest; // @synthesize cancellationTest=_cancellationTest;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) AVAsynchronousVideoCompositionRequest *compositingRequest; // @synthesize compositingRequest=_compositingRequest;
@property (copy, nonatomic) CDUnknownBlockType defaultCIContextProvider; // @synthesize defaultCIContextProvider=_defaultCIContextProvider;
@property (strong, nonatomic) struct CGColorSpace *dstColorSpace; // @synthesize dstColorSpace=_dstColorSpace;
@property (strong, nonatomic) CIImage *sourceCIImage; // @synthesize sourceCIImage=_sourceCIImage;
@property (strong, nonatomic) struct __CVBuffer *sourcePBuf; // @synthesize sourcePBuf=_sourcePBuf;

- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (void)finalize;

@end

