//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDCameraRecordingAudioCodecConfiguration, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingVideoCodecConfiguration;

@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    HMDCameraRecordingGeneralConfiguration *_generalConfiguration;
    HMDCameraRecordingVideoCodecConfiguration *_videoConfiguration;
    HMDCameraRecordingAudioCodecConfiguration *_audioConfiguration;
}

@property (readonly, copy, nonatomic) HMDCameraRecordingAudioCodecConfiguration *audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingGeneralConfiguration *generalConfiguration; // @synthesize generalConfiguration=_generalConfiguration;
@property (readonly, copy, nonatomic) HMDCameraRecordingVideoCodecConfiguration *videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3;
- (id)tlvData;

@end

