//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBCallRecordValue-Protocol.h>

@class NSString, _INPBCallMetrics, _INPBContactValue, _INPBDateTime, _INPBInteger;

@interface _INPBCallRecordValue : PBCodable <_INPBCallRecordValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int callCapability:1;
        unsigned int callType:1;
        unsigned int unseen:1;
    } _has;
    BOOL _unseen;
    BOOL __encodeLegacyGloryData;
    int _callCapability;
    int _callType;
    _INPBCallMetrics *_callMetrics;
    _INPBContactValue *_caller;
    _INPBDateTime *_dateCreated;
    NSString *_identifier;
    _INPBInteger *_numberOfCalls;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property (nonatomic) int callCapability; // @synthesize callCapability=_callCapability;
@property (strong, nonatomic) _INPBCallMetrics *callMetrics; // @synthesize callMetrics=_callMetrics;
@property (nonatomic) int callType; // @synthesize callType=_callType;
@property (strong, nonatomic) _INPBContactValue *caller; // @synthesize caller=_caller;
@property (strong, nonatomic) _INPBDateTime *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCallCapability;
@property (readonly, nonatomic) BOOL hasCallMetrics;
@property (nonatomic) BOOL hasCallType;
@property (readonly, nonatomic) BOOL hasCaller;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasNumberOfCalls;
@property (nonatomic) BOOL hasUnseen;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) _INPBInteger *numberOfCalls; // @synthesize numberOfCalls=_numberOfCalls;
@property (readonly) Class superclass;
@property (nonatomic) BOOL unseen; // @synthesize unseen=_unseen;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsCallCapability:(id)arg1;
- (int)StringAsCallType:(id)arg1;
- (id)callCapabilityAsString:(int)arg1;
- (id)callTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
