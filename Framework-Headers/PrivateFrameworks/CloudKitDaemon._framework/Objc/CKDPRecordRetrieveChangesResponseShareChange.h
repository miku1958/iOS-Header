//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPShare, CKDPShareIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying>
{
    int _changeType;
    CKDPShare *_share;
    CKDPShareIdentifier *_shareIdentifier;
    CDStruct_f5f6ac14 _has;
}

@property (nonatomic) int changeType; // @synthesize changeType=_changeType;
@property (nonatomic) BOOL hasChangeType;
@property (readonly, nonatomic) BOOL hasShare;
@property (readonly, nonatomic) BOOL hasShareIdentifier;
@property (strong, nonatomic) CKDPShare *share; // @synthesize share=_share;
@property (strong, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
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

