//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying>
{
    double _dateCreated;
    NSString *_containerIdentifier;
    NSData *_shareInvitationToken;
    NSString *_shareURL;
    unsigned int _version;
    NSString *_zoneName;
    struct {
        unsigned int dateCreated:1;
    } _has;
}

@property (strong, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property (nonatomic) double dateCreated; // @synthesize dateCreated=_dateCreated;
@property (readonly, nonatomic) BOOL hasContainerIdentifier;
@property (nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasShareInvitationToken;
@property (readonly, nonatomic) BOOL hasShareURL;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (strong, nonatomic) NSData *shareInvitationToken; // @synthesize shareInvitationToken=_shareInvitationToken;
@property (strong, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property (nonatomic) unsigned int version; // @synthesize version=_version;
@property (strong, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;

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

