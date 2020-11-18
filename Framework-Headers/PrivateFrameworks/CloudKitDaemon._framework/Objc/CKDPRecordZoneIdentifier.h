//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPRecordZoneIdentifier : PBCodable <NSCopying>
{
    CKDPIdentifier *_ownerIdentifier;
    CKDPIdentifier *_value;
}

@property (readonly, nonatomic) BOOL hasOwnerIdentifier;
@property (readonly, nonatomic) BOOL hasValue;
@property (strong, nonatomic) CKDPIdentifier *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property (strong, nonatomic) CKDPIdentifier *value; // @synthesize value=_value;

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

