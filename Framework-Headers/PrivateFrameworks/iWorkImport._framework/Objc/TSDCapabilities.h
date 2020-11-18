//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDCapabilities : NSObject
{
    long long _platform;
    long long _deviceType;
    long long _device;
    long long _renderer;
}

@property (readonly, nonatomic) long long device; // @synthesize device=_device;
@property (readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property (readonly, nonatomic) BOOL hasLightningPort;
@property (readonly, nonatomic) BOOL isRendererH3OrBelow;
@property (readonly, nonatomic) BOOL isRendererH4OrBelow;
@property (readonly, nonatomic) BOOL isRendererH5OrBelow;
@property (readonly, nonatomic) struct CGSize maximumHardcodedTextureSize;
@property (readonly, nonatomic) long long platform; // @synthesize platform=_platform;
@property (readonly, nonatomic) long long renderer; // @synthesize renderer=_renderer;

+ (id)currentCapabilities;
- (id)init;
- (struct CGSize)maximumTextureSizeWithGLContext:(id)arg1;
- (void)p_setupDevice;
- (void)p_setupPlatform;

@end

