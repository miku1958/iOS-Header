//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURenderer-Protocol.h>

@class CIContext, NSString;
@protocol OS_dispatch_queue;

@interface NURenderer : NSObject <NURenderer>
{
    NSObject<OS_dispatch_queue> *_queue;
    CIContext *_context;
}

@property (readonly, nonatomic) CIContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;

+ (id)_renderContextOptionsWithOptions:(id)arg1 nameSuffix:(id)arg2;
+ (BOOL)allowClampToAlpha;
+ (id)defaultRenderContextOptions;
+ (BOOL)defaultUseHalfFloat;
+ (id)rendererWithGLContext:(id)arg1 options:(id)arg2;
+ (id)rendererWithMetalDevice:(id)arg1 options:(id)arg2;
+ (struct CGColorSpace *)workingColorSpace;
+ (int)workingFormat;
- (void).cxx_destruct;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)init;
- (id)initWithCIContext:(id)arg1;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;
- (id)renderImage:(id)arg1 rect:(CDStruct_996ac03c)arg2 toDestination:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4 error:(out id *)arg5;

@end
