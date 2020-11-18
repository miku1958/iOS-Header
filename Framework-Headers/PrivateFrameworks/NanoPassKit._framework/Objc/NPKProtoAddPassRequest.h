//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoCatalog, NPKProtoHash, NPKProtoPass;

@interface NPKProtoAddPassRequest : PBRequest <NSCopying>
{
    NPKProtoCatalog *_catalog;
    unsigned int _lastKnownResyncID;
    NPKProtoHash *_libraryHash;
    NPKProtoPass *_pass;
    unsigned int _resyncID;
    unsigned int _syncID;
    CDStruct_02c44088 _has;
}

@property (strong, nonatomic) NPKProtoCatalog *catalog; // @synthesize catalog=_catalog;
@property (readonly, nonatomic) BOOL hasCatalog;
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (readonly, nonatomic) BOOL hasLibraryHash;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (nonatomic) unsigned int lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
@property (strong, nonatomic) NPKProtoHash *libraryHash; // @synthesize libraryHash=_libraryHash;
@property (strong, nonatomic) NPKProtoPass *pass; // @synthesize pass=_pass;
@property (nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property (nonatomic) unsigned int syncID; // @synthesize syncID=_syncID;

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

