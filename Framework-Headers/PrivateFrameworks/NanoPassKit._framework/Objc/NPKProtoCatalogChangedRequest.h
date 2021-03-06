//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoCatalog;

@interface NPKProtoCatalogChangedRequest : PBRequest <NSCopying>
{
    NPKProtoCatalog *_companionCatalog;
    unsigned int _lastKnownResyncID;
    unsigned int _resyncID;
    unsigned int _syncID;
    NPKProtoCatalog *_watchCatalog;
    CDStruct_02c44088 _has;
}

@property (strong, nonatomic) NPKProtoCatalog *companionCatalog; // @synthesize companionCatalog=_companionCatalog;
@property (nonatomic) BOOL hasLastKnownResyncID;
@property (nonatomic) BOOL hasResyncID;
@property (nonatomic) BOOL hasSyncID;
@property (readonly, nonatomic) BOOL hasWatchCatalog;
@property (nonatomic) unsigned int lastKnownResyncID; // @synthesize lastKnownResyncID=_lastKnownResyncID;
@property (nonatomic) unsigned int resyncID; // @synthesize resyncID=_resyncID;
@property (nonatomic) unsigned int syncID; // @synthesize syncID=_syncID;
@property (strong, nonatomic) NPKProtoCatalog *watchCatalog; // @synthesize watchCatalog=_watchCatalog;

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

