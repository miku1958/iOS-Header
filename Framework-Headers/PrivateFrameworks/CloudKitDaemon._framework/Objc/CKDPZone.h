//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPRecordZoneIdentifier, NSData;

__attribute__((visibility("hidden")))
@interface CKDPZone : PBCodable <NSCopying>
{
    NSData *_encryptedLastZoneishPCSRollDate;
    CKDPProtectionInfo *_protectionInfo;
    CKDPProtectionInfo *_recordProtectionInfo;
    CKDPRecordZoneIdentifier *_zoneIdentifier;
}

@property (strong, nonatomic) NSData *encryptedLastZoneishPCSRollDate; // @synthesize encryptedLastZoneishPCSRollDate=_encryptedLastZoneishPCSRollDate;
@property (readonly, nonatomic) BOOL hasEncryptedLastZoneishPCSRollDate;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfo;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (strong, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property (strong, nonatomic) CKDPProtectionInfo *recordProtectionInfo; // @synthesize recordProtectionInfo=_recordProtectionInfo;
@property (strong, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;

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
