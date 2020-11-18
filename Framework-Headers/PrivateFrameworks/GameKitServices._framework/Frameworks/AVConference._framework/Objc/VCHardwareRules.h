//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCHardwareRules : NSObject
{
    NSMutableDictionary *supportedEncodingRules;
    NSMutableDictionary *supportedDecodingRules;
    int encodeScore;
    int decodeScore;
    BOOL encodeHiDef;
    BOOL decodeHiDef;
    NSString *machineName;
    NSMutableArray *supportedPayloads;
}

@property (readonly) BOOL decodeHiDef; // @synthesize decodeHiDef;
@property (readonly) int decodeScore; // @synthesize decodeScore;
@property (readonly) BOOL encodeHiDef; // @synthesize encodeHiDef;
@property (readonly) int encodeScore; // @synthesize encodeScore;
@property (readonly) NSString *machineName; // @synthesize machineName;
@property (readonly) NSMutableDictionary *supportedDecodingRules; // @synthesize supportedDecodingRules;
@property (readonly) NSMutableDictionary *supportedEncodingRules; // @synthesize supportedEncodingRules;
@property (readonly) NSMutableArray *supportedPayloads; // @synthesize supportedPayloads;

+ (id)VCHardwareRulesSingleton;
- (void)calculateDecodingScore;
- (void)calculateEncodingScore;
- (BOOL)canDoHiDefDecoding;
- (BOOL)canDoHiDefEncoding;
- (void)createSupportedPayloads;
- (void)createSupportedRuleSets;
- (void)dealloc;
- (id)filterRules:(id)arg1 byBitrateRule:(id)arg2;
- (float)getBestDecodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2;
- (void)getBestDecodingFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3;
- (float)getBestEncodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2;
- (void)getBestEncodingFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3;
- (void)getBestFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3 isEncoding:(BOOL)arg4;
- (BOOL)getBestFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5;
- (BOOL)getBestFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5 forPayload:(int)arg6;
- (float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3;
- (float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3 forPayload:(int)arg4;
- (void)getBestPreviewFrameWidth:(int *)arg1 frameHeight:(int *)arg2 frameRate:(float *)arg3;
- (int)getCPUFamilyType;
- (id)getCPUTypeStringForMachineType:(int)arg1;
- (int)getHardwareScore;
- (int)getScoreFromHardwareInfo:(id)arg1 cpuFamily:(int)arg2 frequency:(int)arg3 numProcs:(int)arg4;
- (id)init;
- (BOOL)isGVAEncoderAvailable;
- (BOOL)isHiDefCapapable;
- (BOOL)isMacBook8x;
- (BOOL)isMacBookAirModel;
- (BOOL)isMachineNewerThanSandybridge:(int)arg1;
- (void)removeEncodingRulesWithWidth:(int)arg1 height:(int)arg2;
- (void)resetEncodingRulesForCamera:(unsigned int)arg1;
- (void)setPreferredVideoRules;
- (id)supportedDecodingRulesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedDecodingRulesFromDictionaryForPayload:(int)arg1;
- (id)supportedDecodingSizesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedDecodingSizesFromDictionaryForPayload:(int)arg1;
- (id)supportedEncodingRulesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedEncodingRulesFromDictionaryForPayload:(int)arg1;
- (id)supportedEncodingSizesForBitrate:(id)arg1 andPayload:(int)arg2;
- (id)supportedEncodingSizesFromDictionaryForPayload:(int)arg1;
- (BOOL)useSoftFramerateSwitching;

@end

