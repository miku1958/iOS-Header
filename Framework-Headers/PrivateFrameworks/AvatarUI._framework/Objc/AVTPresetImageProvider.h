//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTDeviceResourceConsumer-Protocol.h>

@class AVTAvatarConfigurationImageRenderer, AVTRenderingScope, NSString;
@protocol AVTDeviceResourceConsumerDelegate, AVTImageCache, AVTTaskScheduler, AVTUILogger, OS_dispatch_queue;

@interface AVTPresetImageProvider : NSObject <AVTDeviceResourceConsumer>
{
    id<AVTDeviceResourceConsumerDelegate> _consumerDelegate;
    id<AVTImageCache> _cache;
    id<AVTUILogger> _logger;
    AVTAvatarConfigurationImageRenderer *_renderer;
    id<AVTTaskScheduler> _renderingScheduler;
    NSObject<OS_dispatch_queue> *_presetQueue;
    NSObject<OS_dispatch_queue> *_colorQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    AVTRenderingScope *_colorScope;
    AVTRenderingScope *_defaultScope;
}

@property (readonly, nonatomic) id<AVTImageCache> cache; // @synthesize cache=_cache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *colorQueue; // @synthesize colorQueue=_colorQueue;
@property (readonly, nonatomic) AVTRenderingScope *colorScope; // @synthesize colorScope=_colorScope;
@property (weak, nonatomic) id<AVTDeviceResourceConsumerDelegate> consumerDelegate; // @synthesize consumerDelegate=_consumerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AVTRenderingScope *defaultScope; // @synthesize defaultScope=_defaultScope;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *presetQueue; // @synthesize presetQueue=_presetQueue;
@property (readonly, nonatomic) AVTAvatarConfigurationImageRenderer *renderer; // @synthesize renderer=_renderer;
@property (readonly, nonatomic) id<AVTTaskScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property (readonly) Class superclass;

+ (id)configurationToRenderForPreset:(id)arg1 overrides:(id)arg2 baseConfiguration:(id)arg3;
+ (id)presetImageCacheWithEnvironment:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCache:(id)arg1 environment:(id)arg2;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3;
- (id)initWithCache:(id)arg1 renderingScheduler:(id)arg2 renderingQueueProvider:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 renderer:(id)arg5 defaultScope:(id)arg6 environment:(id)arg7;
- (id)initWithRenderingScheduler:(id)arg1 environment:(id)arg2;
- (CDUnknownBlockType)providerForImageForItem:(id)arg1 scope:(id)arg2 queue:(id)arg3 renderingHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)providerForThumbnailForModelColor:(id)arg1;
- (CDUnknownBlockType)providerForThumbnailForModelPreset:(id)arg1 presetOverrides:(id)arg2 poseOverride:(id)arg3 avatarConfiguration:(id)arg4 framingMode:(id)arg5;
- (void)releaseRenderingResourceForEstimatedDuration:(double)arg1;
- (id)renderThumbnailForModelColor:(id)arg1;

@end

