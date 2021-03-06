//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPDate, FCCKPRecordReference, NSData, NSMutableArray, NSString;

@interface FCCKPRecordFieldValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _signedValue;
    NSData *_bytesValue;
    FCCKPDate *_dateValue;
    NSMutableArray *_listValues;
    FCCKPRecordReference *_referenceValue;
    NSString *_stringValue;
    int _type;
    struct {
        unsigned int doubleValue:1;
        unsigned int signedValue:1;
        unsigned int type:1;
    } _has;
}

@property (strong, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property (strong, nonatomic) FCCKPDate *dateValue; // @synthesize dateValue=_dateValue;
@property (nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (nonatomic) BOOL hasSignedValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) NSMutableArray *listValues; // @synthesize listValues=_listValues;
@property (strong, nonatomic) FCCKPRecordReference *referenceValue; // @synthesize referenceValue=_referenceValue;
@property (nonatomic) long long signedValue; // @synthesize signedValue=_signedValue;
@property (strong, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (nonatomic) int type; // @synthesize type=_type;

+ (Class)listValueType;
- (void)addListValue:(id)arg1;
- (void)clearListValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)listValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

