//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCVideoRuleCollections;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorVideoResults : NSObject
{
    BOOL _isSupported;
    unsigned int _remoteSSRC;
    BOOL _isRTCPFBEnabled;
    VCVideoRuleCollections *_videoRuleCollections;
    NSMutableDictionary *_featureStrings;
    NSMutableDictionary *_parameterSets;
}

@property (strong, nonatomic) NSDictionary *featureStrings; // @synthesize featureStrings=_featureStrings;
@property (nonatomic) BOOL isRTCPFBEnabled; // @synthesize isRTCPFBEnabled=_isRTCPFBEnabled;
@property (nonatomic) BOOL isSupported; // @synthesize isSupported=_isSupported;
@property (strong, nonatomic) NSDictionary *parameterSets; // @synthesize parameterSets=_parameterSets;
@property (nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections; // @synthesize videoRuleCollections=_videoRuleCollections;

- (void)addFeatureString:(id)arg1 key:(id)arg2;
- (void)addParameterSet:(id)arg1 key:(id)arg2;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (void)dealloc;
- (id)init;

@end
