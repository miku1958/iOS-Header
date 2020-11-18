//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCTextStreamConfig : NSObject
{
    long long _codecType;
    unsigned long long _numRedundantPayloads;
    unsigned long long _txRedPayloadType;
    unsigned long long _rxRedPayloadType;
    float _txIntervalMin;
}

@property (nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property (nonatomic) unsigned long long numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property (nonatomic) unsigned long long rxRedPayloadType; // @synthesize rxRedPayloadType=_rxRedPayloadType;
@property (nonatomic) float txIntervalMin; // @synthesize txIntervalMin=_txIntervalMin;
@property (nonatomic) unsigned long long txRedPayloadType; // @synthesize txRedPayloadType=_txRedPayloadType;

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
- (id)dictionary;
- (BOOL)isRedValid;
- (BOOL)isValid;
- (void)setUpWithDictionary:(id)arg1;

@end

