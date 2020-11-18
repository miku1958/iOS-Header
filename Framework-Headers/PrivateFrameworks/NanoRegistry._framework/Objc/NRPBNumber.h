//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@interface NRPBNumber : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _int64Value;
    float _floatValue;
    int _int32Value;
    BOOL _boolValue;
    BOOL _isShortOrChar;
    BOOL _isUnsigned;
    struct {
        unsigned int doubleValue:1;
        unsigned int int64Value:1;
        unsigned int floatValue:1;
        unsigned int int32Value:1;
        unsigned int boolValue:1;
        unsigned int isShortOrChar:1;
        unsigned int isUnsigned:1;
    } _has;
}

@property (nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
@property (nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (nonatomic) float floatValue; // @synthesize floatValue=_floatValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) BOOL hasInt32Value;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) BOOL hasIsShortOrChar;
@property (nonatomic) BOOL hasIsUnsigned;
@property (nonatomic) int int32Value; // @synthesize int32Value=_int32Value;
@property (nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
@property (nonatomic) BOOL isShortOrChar; // @synthesize isShortOrChar=_isShortOrChar;
@property (nonatomic) BOOL isUnsigned; // @synthesize isUnsigned=_isUnsigned;

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

