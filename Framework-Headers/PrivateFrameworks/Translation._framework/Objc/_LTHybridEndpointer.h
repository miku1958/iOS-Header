//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/EARCaesuraSilencePosteriorGeneratorDelegate-Protocol.h>

@class EARCaesuraSilencePosteriorGenerator, NSDictionary, NSNumber, NSString, _EAREndpointer, _LTHybridEndpointerAssetInfo, _LTServerEndpointerFeatures, _LTTranslationContext;
@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate;

__attribute__((visibility("hidden")))
@interface _LTHybridEndpointer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>
{
    _LTTranslationContext *_context;
    _LTHybridEndpointerAssetInfo *_asset;
    _EAREndpointer *_sourceEndpointer;
    NSNumber *_sourceEndpointerThreshold;
    NSNumber *_sourceDisconnectedEndpointerThreshold;
    _LTServerEndpointerFeatures *_sourceEndpointerFeatures;
    _EAREndpointer *_targetEndpointer;
    NSNumber *_targetEndpointerThreshold;
    NSNumber *_targetDisconnectedEndpointerThreshold;
    _LTServerEndpointerFeatures *_targetEndpointerFeatures;
    EARCaesuraSilencePosteriorGenerator *_spg;
    id<_LTSpeechTranslationDelegate> _delegate;
    BOOL _didEndpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_featureQueue;
    unsigned long long _endpointerSignpostID;
    BOOL _useDefaultServerFeaturesOnClientLag;
    NSDictionary *_endpointerThreshold;
    long long _samplingRate;
    long long _audioBitDepth;
    double _clientLagThresholdMs;
    double _clampedSFLatencyMsForClientLag;
}

@property (readonly, nonatomic) long long audioBitDepth; // @synthesize audioBitDepth=_audioBitDepth;
@property (nonatomic) double clampedSFLatencyMsForClientLag; // @synthesize clampedSFLatencyMsForClientLag=_clampedSFLatencyMsForClientLag;
@property (nonatomic) double clientLagThresholdMs; // @synthesize clientLagThresholdMs=_clientLagThresholdMs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *endpointerThreshold; // @synthesize endpointerThreshold=_endpointerThreshold;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long samplingRate; // @synthesize samplingRate=_samplingRate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDefaultServerFeaturesOnClientLag; // @synthesize useDefaultServerFeaturesOnClientLag=_useDefaultServerFeaturesOnClientLag;

- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)arg1;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (BOOL)didEndpointWithFeatures:(id)arg1 silenceFeatures:(id)arg2 endpointer:(id)arg3;
- (void)endAudio;
- (id)init;
- (void)setServerEndpointerFeatures:(id)arg1 withLocale:(id)arg2;
- (void)startEndpointingWithContext:(id)arg1 delegate:(id)arg2;

@end
