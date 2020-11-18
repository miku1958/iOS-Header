//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableAuthorization : PBCodable <NSCopying>
{
    long long _authorizationRequest;
    long long _authorizationStatus;
    double _modificationDate;
    long long _modificationEpoch;
    long long _objectType;
    struct {
        unsigned int authorizationRequest:1;
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
        unsigned int modificationEpoch:1;
        unsigned int objectType:1;
    } _has;
}

@property (nonatomic) long long authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property (nonatomic) long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property (nonatomic) BOOL hasAuthorizationRequest;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) BOOL hasModificationEpoch;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property (nonatomic) long long modificationEpoch; // @synthesize modificationEpoch=_modificationEpoch;
@property (nonatomic) long long objectType; // @synthesize objectType=_objectType;

- (long long)_authorizationRequest;
- (long long)_authorizationStatus;
- (long long)_dataTypeCode;
- (id)_modificationDate;
- (void)_setAuthorizationRequestWithNumber:(id)arg1;
- (void)_setAuthorizationStatusWithNumber:(id)arg1;
- (void)_setDataTypeCodeWithObjectType:(id)arg1;
- (void)_setModificationDate:(id)arg1;
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

