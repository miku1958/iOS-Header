//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableQuantity, NSString;

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying>
{
    double _dateValue;
    double _numberDoubleValue;
    long long _numberIntValue;
    NSString *_key;
    HDCodableQuantity *_quantityValue;
    NSString *_stringValue;
    struct {
        unsigned int dateValue:1;
        unsigned int numberDoubleValue:1;
        unsigned int numberIntValue:1;
    } _has;
}

@property (nonatomic) double dateValue; // @synthesize dateValue=_dateValue;
@property (nonatomic) BOOL hasDateValue;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberDoubleValue;
@property (nonatomic) BOOL hasNumberIntValue;
@property (readonly, nonatomic) BOOL hasQuantityValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (nonatomic) double numberDoubleValue; // @synthesize numberDoubleValue=_numberDoubleValue;
@property (nonatomic) long long numberIntValue; // @synthesize numberIntValue=_numberIntValue;
@property (strong, nonatomic) HDCodableQuantity *quantityValue; // @synthesize quantityValue=_quantityValue;
@property (strong, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

