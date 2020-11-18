//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecord, CKDPRecordIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying>
{
    NSString *_etag;
    CKDPRecordIdentifier *_identifier;
    CKDPRecord *_record;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (strong, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasRecord;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) CKDPRecordIdentifier *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) CKDPRecord *record; // @synthesize record=_record;
@property (nonatomic) int type; // @synthesize type=_type;

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

