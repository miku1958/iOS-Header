//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCHardwareSettings.h>

#import <AVConference/VCHardwareSettingsEmbeddedProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol>
{
    NSString *_deviceName;
    long long _chipId;
    int _deviceClass;
    int _screenWidth;
    int _screenHeight;
    long long _videoEncoderType;
    BOOL _hasBasebandInitialized;
    BOOL _hasBaseband;
    BOOL _hasAppleNeuralEngine;
}

@property (readonly, nonatomic) unsigned int audioPacketLossConcealmentAlgorithmAACELD;
@property (readonly, nonatomic) BOOL canDo1080p;
@property (readonly, nonatomic) long long chipId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long deviceClass;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) BOOL hasAppleNeuralEngine;
@property (readonly, nonatomic) BOOL hasBaseband;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isDeviceLargeScreen;
@property (readonly, nonatomic) BOOL isHEVC444DecodeSupported;
@property (readonly, nonatomic) BOOL isPixelFormatAvailable;
@property (readonly, nonatomic) BOOL isSecondDisplaySupportEnabled;
@property (readonly, nonatomic) unsigned int maxActiveVideoDecoders;
@property (readonly, nonatomic) unsigned int maxActiveVideoEncoders;
@property (readonly, nonatomic) unsigned int maxDisplayRefreshRate;
@property (readonly, nonatomic) unsigned int maxMultiwayFramerateSupported;
@property (readonly, nonatomic) int screenHeight;
@property (readonly, nonatomic) int screenWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHEIFEncoding;
@property (readonly, nonatomic) BOOL supportsMultiway720pStream;
@property (readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property (readonly, nonatomic) long long videoEncoderType;

+ (long long)deviceClass;
+ (id)sharedInstance;
- (void)_initializeScreenDimension;
- (void)addPixelFormat;
- (void)dealloc;
- (id)init;
- (unsigned int)maxRemoteParticipants30fps;

@end

