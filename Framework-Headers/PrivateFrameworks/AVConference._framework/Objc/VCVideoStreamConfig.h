//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStreamConfig.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCVideoStreamConfig : VCMediaStreamConfig
{
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _txInitialBitrate;
    unsigned long long _rxMaxBitrate;
    unsigned long long _rxMinBitrate;
    unsigned long long _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    BOOL _enableCVO;
    unsigned long long _cvoExtensionID;
    BOOL _isVideoProtected;
    long long _type;
    unsigned long long _sourceFramerate;
    int _encodingMode;
    _Atomic unsigned char *_videoPriorityPointer;
    int _captureSource;
    unsigned int _screenDisplayID;
    unsigned long long _customWidth;
    unsigned long long _customHeight;
    NSMutableDictionary *_rxCodecFeatureListStrings;
    NSMutableDictionary *_txCodecFeatureListStrings;
    unsigned long long _tilesPerFrame;
    unsigned int _pixelFormat;
    BOOL _ltrpEnabled;
    int _hdrMode;
    NSString *_remoteDeviceName;
}

@property (nonatomic) int captureSource; // @synthesize captureSource=_captureSource;
@property (nonatomic) unsigned long long customHeight; // @synthesize customHeight=_customHeight;
@property (nonatomic) unsigned long long customWidth; // @synthesize customWidth=_customWidth;
@property (nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property (nonatomic) BOOL enableCVO; // @synthesize enableCVO=_enableCVO;
@property (nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property (nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property (nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property (nonatomic) BOOL isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property (nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property (nonatomic) BOOL ltrpEnabled; // @synthesize ltrpEnabled=_ltrpEnabled;
@property (nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property (strong, nonatomic) NSString *remoteDeviceName; // @synthesize remoteDeviceName=_remoteDeviceName;
@property (nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property (readonly, nonatomic) NSDictionary *rxCodecFeatureListStrings; // @synthesize rxCodecFeatureListStrings=_rxCodecFeatureListStrings;
@property (nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property (nonatomic) unsigned int screenDisplayID; // @synthesize screenDisplayID=_screenDisplayID;
@property (nonatomic) unsigned long long sourceFramerate; // @synthesize sourceFramerate=_sourceFramerate;
@property (nonatomic) unsigned long long tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property (readonly, nonatomic) NSDictionary *txCodecFeatureListStrings; // @synthesize txCodecFeatureListStrings=_txCodecFeatureListStrings;
@property (nonatomic) unsigned long long txInitialBitrate; // @synthesize txInitialBitrate=_txInitialBitrate;
@property (nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property (nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;

+ (BOOL)validateClientDictionary:(id)arg1;
- (void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;
- (void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2;
- (BOOL)applyVideoStreamClientDictionary:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithClientDictionary:(id)arg1;
- (BOOL)updateWithClientDictionary:(id)arg1;

@end

