//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKProtobufRemoteRegistrationRequestResult : PBCodable <NSCopying>
{
    unsigned int _result;
    unsigned int _version;
    struct {
        unsigned int result:1;
    } _has;
}

@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned int result; // @synthesize result=_result;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

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

