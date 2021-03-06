//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNTextureSource.h>

@class AVPlayer, AVPlayerItemVideoOutput;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNAVPlayerSource : SCNTextureSource
{
    AVPlayer *_player;
    AVPlayerItemVideoOutput *_videoOutput;
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_pixelBuffer;
    id<MTLTexture> _mtlTexture;
    unsigned long long _texturePixelFormat;
    unsigned char _videoSourceFormat;
    unsigned long long _width;
    unsigned long long _height;
}

@property (strong, nonatomic) AVPlayer *player;

- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
- (void)dealloc;
- (void)discardVideoData;
- (id)init;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)registerPlayer:(id)arg1;
- (void)setVideoSourceFormat:(unsigned char)arg1;
- (void)unregisterPlayer:(id)arg1;

@end

