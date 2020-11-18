//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying>
{
    NPKProtoHash *_expectedHash;
    NSMutableArray *_manifestHashes;
    unsigned int _resyncID;
    NSMutableArray *_uniqueIDs;
    BOOL _fullResyncNeeded;
    struct {
        unsigned int resyncID:1;
        unsigned int fullResyncNeeded:1;
    } _has;
}

@property (strong, nonatomic) NPKProtoHash *expectedHash; // @synthesize expectedHash=_expectedHash;
@property (nonatomic) BOOL fullResyncNeeded; // @synthesize fullResyncNeeded=_fullResyncNeeded;
@property (readonly, nonatomic) BOOL hasExpectedHash;
@property (nonatomic) BOOL hasFullResyncNeeded;
@property (nonatomic) BOOL hasResyncID;
@property (strong, nonatomic) NSMutableArray *manifestHashes; // @synthesize manifestHashes=_manifestHashes;
@property (nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property (strong, nonatomic) NSMutableArray *uniqueIDs; // @synthesize uniqueIDs=_uniqueIDs;

- (void).cxx_destruct;
- (void)addManifestHashes:(id)arg1;
- (void)addUniqueIDs:(id)arg1;
- (void)clearManifestHashes;
- (void)clearUniqueIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)manifestHashesAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestHashesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)uniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uniqueIDsCount;
- (void)writeTo:(id)arg1;

@end
