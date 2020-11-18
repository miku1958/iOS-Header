//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NUGlobalSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

+ (BOOL)bufferStorageFactoryUsePool;
+ (long long)cacheNodeCacheSizeLimit;
+ (id)cacheNodeDirectoryURL;
+ (long long)cacheNodeFilePermissions;
+ (double)cacheNodeImageCompression;
+ (long long)deviceDefaultSampleMode;
+ (BOOL)deviceDisableMetal;
+ (BOOL)deviceDisableOpenGL;
+ (BOOL)devicePrintRenderer;
+ (id)globalSettings;
+ (BOOL)imageLayerDebug;
+ (BOOL)imageRenderJobUseSurfaceRenderer;
+ (BOOL)imageRenderJobUseTextureRenderer;
+ (BOOL)imageSourceDisableCacheImmediately;
+ (BOOL)imageSourceDisableRAW;
+ (long long)imageTileSize;
+ (BOOL)isViewDebugEnabled;
+ (BOOL)platformHasWideColor;
+ (double)renderJSPipelineTimeout;
+ (BOOL)renderVideoLive;
+ (BOOL)rendererClampToAlpha;
+ (BOOL)rendererUseHalfFloat;
+ (BOOL)rendererUseP3Linear;
+ (void)reset;
+ (void)setBufferStorageFactoryUsePool:(BOOL)arg1;
+ (void)setCacheNodeCacheSizeLimit:(long long)arg1;
+ (void)setCacheNodeDirectoryURL:(id)arg1;
+ (void)setCacheNodeFilePermissions:(long long)arg1;
+ (void)setCacheNodeImageCompression:(double)arg1;
+ (void)setDeviceDefaultSampleMode:(long long)arg1;
+ (void)setDeviceDisableMetal:(BOOL)arg1;
+ (void)setDeviceDisableOpenGL:(BOOL)arg1;
+ (void)setDevicePrintRenderer:(BOOL)arg1;
+ (void)setImageLayerDebug:(BOOL)arg1;
+ (void)setImageRenderJobUseSurfaceRenderer:(BOOL)arg1;
+ (void)setImageRenderJobUseTextureRenderer:(BOOL)arg1;
+ (void)setImageSourceDisableCacheImmediately:(BOOL)arg1;
+ (void)setImageSourceDisableRAW:(BOOL)arg1;
+ (void)setImageTileSize:(long long)arg1;
+ (void)setPlatformHasWideColor:(BOOL)arg1;
+ (void)setRenderJSPipelineTimeout:(double)arg1;
+ (void)setRenderVideoLive:(BOOL)arg1;
+ (void)setRendererClampToAlpha:(BOOL)arg1;
+ (void)setRendererUseHalfFloat:(BOOL)arg1;
+ (void)setRendererUseP3Linear:(BOOL)arg1;
+ (void)setStoragePoolMigrationDelay:(double)arg1;
+ (void)setStoragePoolNonPurgeableLimit:(long long)arg1;
+ (void)setStoragePoolPurgeableLimit:(long long)arg1;
+ (void)setSurfaceStorageFactoryUsePool:(BOOL)arg1;
+ (void)setViewDebugEnabled:(BOOL)arg1;
+ (double)storagePoolMigrationDelay;
+ (long long)storagePoolNonPurgeableLimit;
+ (long long)storagePoolPurgeableLimit;
+ (BOOL)surfaceStorageFactoryUsePool;
- (void).cxx_destruct;
- (id)_settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (BOOL)boolSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (double)doubleSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)init;
- (long long)integerSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)stringSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;
- (id)urlSettingForKey:(id)arg1 defaultValue:(CDUnknownBlockType)arg2;

@end

