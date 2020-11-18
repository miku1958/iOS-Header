//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/RTCVideoEncoder-Protocol.h>

@class NSString, WK_RTCVideoCodecInfo;

__attribute__((visibility("hidden")))
@interface WK_RTCVideoEncoderH264 : NSObject <RTCVideoEncoder>
{
    WK_RTCVideoCodecInfo *_codecInfo;
    struct unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster>> _bitrateAdjuster;
    unsigned int _targetBitrateBps;
    unsigned int _encoderBitrateBps;
    unsigned int _encoderFrameRate;
    unsigned int _maxAllowedFrameRate;
    unsigned long long _packetizationMode;
    struct optional<webrtc::H264::ProfileLevelId> _profile_level_id;
    CDUnknownBlockType _callback;
    int _width;
    int _height;
    BOOL _useVCP;
    struct OpaqueVTCompressionSession *_vtCompressionSession;
    void *_vcpCompressionSession;
    struct __CVPixelBufferPool *_pixelBufferPool;
    unsigned long long _mode;
    struct H264BitstreamParser _h264BitstreamParser;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _frameScaleBuffer;
    BOOL _disableEncoding;
    BOOL _isKeyFrameRequired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureCompressionSession;
- (void)dealloc;
- (void)destroyCompressionSession;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (void)frameWasEncoded:(int)arg1 flags:(unsigned int)arg2 sampleBuffer:(struct opaqueCMSampleBuffer *)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned int)arg8 rotation:(long long)arg9 isKeyFrameRequired:(BOOL)arg10;
- (BOOL)hasCompressionSession;
- (id)implementationName;
- (id)initWithCodecInfo:(id)arg1;
- (unsigned int)pixelFormatOfFrame:(id)arg1;
- (long long)releaseEncoder;
- (BOOL)resetCompressionSessionIfNeededWithFrame:(id)arg1;
- (int)resetCompressionSessionWithPixelFormat:(unsigned int)arg1;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)setEncoderBitrateBps:(unsigned int)arg1 frameRate:(unsigned int)arg2;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end
