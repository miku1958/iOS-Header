//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStreamConfig.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VCAudioStreamConfig : VCMediaStreamConfig
{
    unsigned long long _ptime;
    unsigned long long _maxPtime;
    long long _audioStreamMode;
    BOOL _latencySensitiveMode;
    NSMutableDictionary *_codecConfigurations;
    BOOL _redEnabled;
    unsigned char _numRedundantPayloads;
    NSMutableSet *_supportedNumRedundantPayload;
    BOOL _enableMaxBitrateOnNoChangeCMR;
    BOOL _forceEVSWideBand;
    float _volume;
}

@property (nonatomic) long long audioStreamMode; // @synthesize audioStreamMode=_audioStreamMode;
@property (readonly, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR; // @synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) BOOL forceEVSWideBand; // @synthesize forceEVSWideBand=_forceEVSWideBand;
@property (nonatomic, getter=isLatencySensitiveMode) BOOL latencySensitiveMode; // @synthesize latencySensitiveMode=_latencySensitiveMode;
@property (nonatomic) unsigned long long maxPtime; // @synthesize maxPtime=_maxPtime;
@property (nonatomic) unsigned char numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property (nonatomic) unsigned long long ptime; // @synthesize ptime=_ptime;
@property (readonly, nonatomic, getter=isRedEnabled) BOOL redEnabled; // @synthesize redEnabled=_redEnabled;
@property (readonly, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) float volume; // @synthesize volume=_volume;

- (void)addCodecConfiguration:(id)arg1;
- (void)addSupportedNumRedundantPayload:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithClientDictionary:(id)arg1;
- (BOOL)setupCNCodecWithClientDictionary:(id)arg1;
- (BOOL)setupCodecWithClientDictionary:(id)arg1;
- (BOOL)setupDTMFCodecWithClientDictionary:(id)arg1;
- (void)setupRedWithRxPayload:(unsigned int)arg1 txPayload:(unsigned int)arg2;

@end

