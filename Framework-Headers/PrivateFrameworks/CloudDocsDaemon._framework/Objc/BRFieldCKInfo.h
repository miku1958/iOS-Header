//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying>
{
    NSString *_etag;
    NSString *_etagBeforeCrossZoneMove;
    BOOL _knownToServer;
    BOOL _wasCached;
    struct {
        unsigned int knownToServer:1;
        unsigned int wasCached:1;
    } _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (strong, nonatomic) NSString *etagBeforeCrossZoneMove; // @synthesize etagBeforeCrossZoneMove=_etagBeforeCrossZoneMove;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasEtagBeforeCrossZoneMove;
@property (nonatomic) BOOL hasKnownToServer;
@property (nonatomic) BOOL hasWasCached;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL knownToServer; // @synthesize knownToServer=_knownToServer;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt *)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithRecord:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)markMovedToCloudDocsZone;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)writeTo:(id)arg1;

@end

