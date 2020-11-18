//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _int64Value;
    NSData *_bytesValue;
    NSString *_stringValue;
    BOOL _boolValue;
    CDStruct_f7459c01 _has;
}

@property (nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
@property (strong, nonatomic) NSData *bytesValue; // @synthesize bytesValue=_bytesValue;
@property (nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasInt64Value;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) long long int64Value; // @synthesize int64Value=_int64Value;
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
