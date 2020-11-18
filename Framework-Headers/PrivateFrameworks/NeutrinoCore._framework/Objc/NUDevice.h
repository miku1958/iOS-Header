//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUDevice-Protocol.h>

@class NSString, NURenderer;
@protocol MTLDevice, NURenderer, OS_dispatch_queue;

@interface NUDevice : NSObject <NUDevice>
{
    NURenderer *_renderer;
    NURenderer *_lowPriorityRenderer;
    NURenderer *_noIntermediatesRenderer;
    NURenderer *_lowPriorityNoIntermediatesRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    long long _defaultSampleMode;
    NSString *_name;
    NSString *_model;
    id<MTLDevice> _metalDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long defaultSampleMode;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long family;
@property (readonly, nonatomic) BOOL hasMetalSupport;
@property (readonly, nonatomic) BOOL hasOpenGLSupport;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<NURenderer> lowPriorityRenderer; // @synthesize lowPriorityRenderer=_lowPriorityRenderer;
@property (readonly, nonatomic) id<MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
@property (readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) long long openGLVirtualScreen;
@property (readonly, nonatomic) id<NURenderer> renderer; // @synthesize renderer=_renderer;
@property (readonly, nonatomic) BOOL shouldRenderUsingMetal;
@property (readonly, nonatomic) BOOL shouldRenderUsingOpenGL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_computeDefaultSampleMode;
- (long long)_defaultSampleMode;
- (id)_lowPriorityRenderer:(out id *)arg1;
- (id)_lowPriorityRendererWithoutIntermediateCaching:(out id *)arg1;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id *)arg1;
- (id)_newLowPriorityRenderer:(out id *)arg1;
- (id)_newNoIntermediatesRenderer:(out id *)arg1;
- (id)_newRenderer:(out id *)arg1;
- (long long)_openGLVirtualScreen;
- (long long)_preferredSampleMode;
- (id)_renderer:(out id *)arg1;
- (id)_rendererWithoutIntermediateCaching:(out id *)arg1;
- (void)clearCaches;
- (id)init;
- (id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3;
- (id)lowPriorityRenderer:(out id *)arg1;
- (id)lowPriorityRendererWithoutIntermediateCaching:(out id *)arg1;
- (id)renderer:(out id *)arg1;
- (id)rendererWithoutIntermediateCaching:(out id *)arg1;
- (BOOL)shouldLogRendererUsed;

@end
