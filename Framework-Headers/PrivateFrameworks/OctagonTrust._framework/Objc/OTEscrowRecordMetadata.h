//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OctagonTrust/NSCopying-Protocol.h>

@class NSData, NSString, OTEscrowRecordMetadataClientMetadata;

@interface OTEscrowRecordMetadata : PBCodable <NSCopying>
{
    unsigned long long _secureBackupTimestamp;
    unsigned long long _secureBackupUsesMultipleIcscs;
    NSData *_backupKeybagDigest;
    NSString *_bottleId;
    NSString *_bottleValidity;
    OTEscrowRecordMetadataClientMetadata *_clientMetadata;
    NSData *_escrowedSpki;
    NSData *_peerInfo;
    NSString *_serial;
    struct {
        unsigned int secureBackupTimestamp:1;
        unsigned int secureBackupUsesMultipleIcscs:1;
    } _has;
}

@property (strong, nonatomic) NSData *backupKeybagDigest; // @synthesize backupKeybagDigest=_backupKeybagDigest;
@property (strong, nonatomic) NSString *bottleId; // @synthesize bottleId=_bottleId;
@property (strong, nonatomic) NSString *bottleValidity; // @synthesize bottleValidity=_bottleValidity;
@property (strong, nonatomic) OTEscrowRecordMetadataClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property (strong, nonatomic) NSData *escrowedSpki; // @synthesize escrowedSpki=_escrowedSpki;
@property (readonly, nonatomic) BOOL hasBackupKeybagDigest;
@property (readonly, nonatomic) BOOL hasBottleId;
@property (readonly, nonatomic) BOOL hasBottleValidity;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasEscrowedSpki;
@property (readonly, nonatomic) BOOL hasPeerInfo;
@property (nonatomic) BOOL hasSecureBackupTimestamp;
@property (nonatomic) BOOL hasSecureBackupUsesMultipleIcscs;
@property (readonly, nonatomic) BOOL hasSerial;
@property (strong, nonatomic) NSData *peerInfo; // @synthesize peerInfo=_peerInfo;
@property (nonatomic) unsigned long long secureBackupTimestamp; // @synthesize secureBackupTimestamp=_secureBackupTimestamp;
@property (nonatomic) unsigned long long secureBackupUsesMultipleIcscs; // @synthesize secureBackupUsesMultipleIcscs=_secureBackupUsesMultipleIcscs;
@property (strong, nonatomic) NSString *serial; // @synthesize serial=_serial;

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

