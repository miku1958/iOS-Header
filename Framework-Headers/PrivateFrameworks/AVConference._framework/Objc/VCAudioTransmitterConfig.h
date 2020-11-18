//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, NSMutableArray, VCAudioPayload, VCTransportSession;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitterConfig : NSObject
{
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_rtpVideo;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_afrcHandle;
    void *_controlInfoGenerator;
    AVCStatisticsCollector *_statisticsCollector;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_chosenAudioPayload;
    VCAudioPayload *_chosenDTXPayload;
    unsigned char _packetsPerBundle;
    BOOL _useAFRC;
    int _bundlingScheme;
    BOOL _isUseCaseWatchContinuity;
    BOOL _allowAudioSwitching;
    BOOL _supportsAdaptation;
    int _chosenRedPayloadType;
    BOOL _redEnabled;
    BOOL _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    BOOL _transmitROC;
    BOOL _needsPacketThread;
    int _operatingMode;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    VCTransportSession *_transportSession;
    BOOL _ignoreSilence;
}

@property (nonatomic) struct tagHANDLE *afrcHandle; // @synthesize afrcHandle=_afrcHandle;
@property (nonatomic) BOOL allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property (strong, nonatomic) NSMutableArray *audioPayloads; // @synthesize audioPayloads=_audioPayloads;
@property (nonatomic) int bundlingScheme; // @synthesize bundlingScheme=_bundlingScheme;
@property (strong, nonatomic) VCAudioPayload *chosenAudioPayload; // @synthesize chosenAudioPayload=_chosenAudioPayload;
@property (strong, nonatomic) VCAudioPayload *chosenDTXPayload; // @synthesize chosenDTXPayload=_chosenDTXPayload;
@property (nonatomic) int chosenRedPayloadType; // @synthesize chosenRedPayloadType=_chosenRedPayloadType;
@property (nonatomic) void *controlInfoGenerator; // @synthesize controlInfoGenerator=_controlInfoGenerator;
@property (nonatomic) BOOL ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property (nonatomic) BOOL includeRedSequenceOffset; // @synthesize includeRedSequenceOffset=_includeRedSequenceOffset;
@property (nonatomic) struct AudioStreamBasicDescription inputFormat; // @synthesize inputFormat=_inputFormat;
@property (nonatomic) BOOL isUseCaseWatchContinuity; // @synthesize isUseCaseWatchContinuity=_isUseCaseWatchContinuity;
@property (nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property (nonatomic) BOOL needsPacketThread; // @synthesize needsPacketThread=_needsPacketThread;
@property (nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property (nonatomic) unsigned char packetsPerBundle; // @synthesize packetsPerBundle=_packetsPerBundle;
@property (nonatomic, getter=isRedEnabled) BOOL redEnabled; // @synthesize redEnabled=_redEnabled;
@property (nonatomic) unsigned int redMaxDelay20ms; // @synthesize redMaxDelay20ms=_redMaxDelay20ms;
@property (nonatomic) unsigned int redNumPayloads; // @synthesize redNumPayloads=_redNumPayloads;
@property (nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property (nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
@property (nonatomic) struct tagHANDLE *rtpVideo; // @synthesize rtpVideo=_rtpVideo;
@property (strong, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property (nonatomic) BOOL supportsAdaptation; // @synthesize supportsAdaptation=_supportsAdaptation;
@property (nonatomic) BOOL transmitROC; // @synthesize transmitROC=_transmitROC;
@property (strong, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property (nonatomic) BOOL useAFRC; // @synthesize useAFRC=_useAFRC;

- (void)dealloc;
- (id)description;

@end
