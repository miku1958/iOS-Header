//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManifestConfiguration, NSString, VKResourceManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKGGLTextureManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSObject<OS_dispatch_queue> *_textureQueue;
    shared_ptr_479d1306 _whiteTexture;
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<ggl::Texture2D>>>> _textureDictionary;
    VKResourceManager *_resourceManager;
    struct Device {
        CDUnknownFunctionPointerType *;
        struct DeviceVersion;
        struct DeviceCapabilities;
        struct DeviceAPIProperties;
        int;
        int;
    } *_device;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataWithName:(id)arg1 fromResourceManager:(id)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2 device:(Device_f0710f89 *)arg3;
- (void)purge;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (shared_ptr_479d1306)textureWithName:(id)arg1 forScale:(float)arg2 mipmap:(BOOL)arg3 samplerState:(shared_ptr_cedd5232)arg4;
- (shared_ptr_479d1306)textureWithName:(id)arg1 forScale:(float)arg2 samplerState:(shared_ptr_cedd5232)arg3;
- (shared_ptr_479d1306)textureWithName:(id)arg1 mipmap:(BOOL)arg2 samplerState:(shared_ptr_cedd5232)arg3;
- (shared_ptr_479d1306)textureWithName:(id)arg1 samplerState:(shared_ptr_cedd5232)arg2;
- (const shared_ptr_479d1306 *)whiteTexture;

@end

