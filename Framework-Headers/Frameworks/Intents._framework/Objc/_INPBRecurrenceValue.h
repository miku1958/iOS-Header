//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRecurrenceValue-Protocol.h>

@class NSString;

@interface _INPBRecurrenceValue : PBCodable <_INPBRecurrenceValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int frequency:1;
        unsigned int interval:1;
        unsigned int ordinal:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _frequency;
    unsigned long long _interval;
    long long _ordinal;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frequency; // @synthesize frequency=_frequency;
@property (nonatomic) BOOL hasFrequency;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) BOOL hasOrdinal;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property (nonatomic) long long ordinal; // @synthesize ordinal=_ordinal;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (int)StringAsFrequency:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)frequencyAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
