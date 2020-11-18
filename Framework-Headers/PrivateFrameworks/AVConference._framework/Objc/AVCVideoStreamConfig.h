//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCVideoStreamConfig : NSObject
{
    long long _txCodecType;
    long long _rxCodecType;
    long long _videoResolution;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _rxMaxBitrate;
    unsigned long long _rxMinBitrate;
    unsigned long long _keyFrameInterval;
    int _remoteVideoInitialOrientation;
    BOOL _enableCVO;
    unsigned long long _cvoExtensionID;
    BOOL _isVideoProtected;
}

@property (nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property (nonatomic) BOOL enableCVO; // @synthesize enableCVO=_enableCVO;
@property (nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property (nonatomic) BOOL isVideoProtected; // @synthesize isVideoProtected=_isVideoProtected;
@property (nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property (nonatomic) int remoteVideoInitialOrientation; // @synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation;
@property (nonatomic) long long rxCodecType; // @synthesize rxCodecType=_rxCodecType;
@property (nonatomic) unsigned long long rxMaxBitrate; // @synthesize rxMaxBitrate=_rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate; // @synthesize rxMinBitrate=_rxMinBitrate;
@property (nonatomic) long long txCodecType; // @synthesize txCodecType=_txCodecType;
@property (nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property (nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)clientVideoResolutionFromResolution:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
+ (long long)videoResolutionFromClientResolution:(long long)arg1;
- (id)dictionary;
- (BOOL)isValid;
- (void)setUpWithDictionary:(id)arg1;

@end

