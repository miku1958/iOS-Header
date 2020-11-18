//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitRelationship, NSData;

@interface ASCodableRelationshipContainer : PBCodable <NSCopying>
{
    long long _version;
    ASCodableCloudKitRelationship *_relationship;
    NSData *_relationshipShareID;
    NSData *_remoteActivityShareID;
    NSData *_remoteRelationshipShareID;
    NSData *_systemFieldsOnlyRecord;
    struct {
        unsigned int version:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasRelationship;
@property (readonly, nonatomic) BOOL hasRelationshipShareID;
@property (readonly, nonatomic) BOOL hasRemoteActivityShareID;
@property (readonly, nonatomic) BOOL hasRemoteRelationshipShareID;
@property (readonly, nonatomic) BOOL hasSystemFieldsOnlyRecord;
@property (nonatomic) BOOL hasVersion;
@property (strong, nonatomic) ASCodableCloudKitRelationship *relationship; // @synthesize relationship=_relationship;
@property (strong, nonatomic) NSData *relationshipShareID; // @synthesize relationshipShareID=_relationshipShareID;
@property (strong, nonatomic) NSData *remoteActivityShareID; // @synthesize remoteActivityShareID=_remoteActivityShareID;
@property (strong, nonatomic) NSData *remoteRelationshipShareID; // @synthesize remoteRelationshipShareID=_remoteRelationshipShareID;
@property (strong, nonatomic) NSData *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property (nonatomic) long long version; // @synthesize version=_version;

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

