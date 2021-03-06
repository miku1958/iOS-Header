//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@protocol VCHardwareSettingsEmbeddedProtocol <NSObject>

@property (readonly, nonatomic) long long chipId;
@property (readonly, nonatomic) long long deviceClass;
@property (readonly, nonatomic) BOOL hasAppleNeuralEngine;
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
@property (readonly, nonatomic) BOOL supportsHEIFEncoding;
@property (readonly, nonatomic) BOOL supportsMultiway720pStream;
@property (readonly, nonatomic) BOOL useSoftFramerateSwitching;
@property (readonly, nonatomic) long long videoEncoderType;

@end

