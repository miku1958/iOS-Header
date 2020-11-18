//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/Endpointer-Protocol.h>

@class NSDictionary, NSMutableData, NSString;
@protocol AFAudioAnalyzerDelegate;

@interface AFAudioAnalyzer : NSObject <Endpointer>
{
    BOOL _detectedOneShotStartpoint;
    BOOL _detectedRecurrentStartpoint;
    BOOL _communicatedStartPointDetection;
    BOOL _detectedOneShotEndpoint;
    BOOL _detectedRecurrentEndpoint;
    BOOL _communicatedEndpointDetection;
    double _sampleRate;
    double _samplesSeen;
    unsigned int _frameRate;
    double _lastOneShotStartpoint;
    double _lastOneShotEndpoint;
    double _lastRecurrentStartpoint;
    double _lastRecurrentEndpoint;
    NSMutableData *_floatSampleBuffer;
    NSDictionary *_topLevelParameterDict;
    NSString *_modelDictPath;
    struct OpaqueAudioComponentInstance *_audioUnitEPVAD2;
    BOOL _isConfigured;
    BOOL _saveSampleSeenInReset;
    double _previousSamplesSeen;
    int _endpointMode;
    double _startWaitTime;
    double _interspeechWaitTime;
    double _endWaitTime;
    long long _style;
    double _automaticEndpointingSuspensionEndTime;
    double _minimumDurationForEndpointer;
    id<AFAudioAnalyzerDelegate> _delegate;
}

@property (nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFAudioAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
@property int endpointMode; // @synthesize endpointMode=_endpointMode;
@property (readonly) unsigned long long hash;
@property double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
@property (readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property (readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property (nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
- (void)_detectVoiceActivityInSamples:(float *)arg1 numSamples:(unsigned int)arg2;
- (BOOL)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;
- (void)dealloc;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;
- (id)init;
- (void)preheat;
- (void)reset;
- (void)saveSamplesSeenOnNextReset;

@end

