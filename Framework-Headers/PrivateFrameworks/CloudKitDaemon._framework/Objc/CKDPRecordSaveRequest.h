//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecord, CKDPRecordSaveRequestConflictLoserUpdate, CKDPRecordSaveRequestShareIdUpdate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordSaveRequest : PBRequest <NSCopying>
{
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;
    NSMutableArray *_conflictLosersToResolves;
    NSString *_etag;
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;
    CKDPRecord *_record;
    NSString *_recordProtectionInfoTag;
    int _saveSemantics;
    NSString *_shareEtag;
    CKDPRecordSaveRequestShareIdUpdate *_shareIDUpdate;
    NSString *_zoneProtectionInfoTag;
    BOOL _merge;
    struct {
        unsigned int saveSemantics:1;
        unsigned int merge:1;
    } _has;
}

@property (strong, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate; // @synthesize conflictLoserUpdate=_conflictLoserUpdate;
@property (strong, nonatomic) NSMutableArray *conflictLosersToResolves; // @synthesize conflictLosersToResolves=_conflictLosersToResolves;
@property (strong, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (strong, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges; // @synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges;
@property (readonly, nonatomic) BOOL hasConflictLoserUpdate;
@property (readonly, nonatomic) BOOL hasEtag;
@property (nonatomic) BOOL hasMerge;
@property (readonly, nonatomic) BOOL hasRecord;
@property (readonly, nonatomic) BOOL hasRecordProtectionInfoTag;
@property (nonatomic) BOOL hasSaveSemantics;
@property (readonly, nonatomic) BOOL hasShareEtag;
@property (readonly, nonatomic) BOOL hasShareIDUpdate;
@property (readonly, nonatomic) BOOL hasZoneProtectionInfoTag;
@property (nonatomic) BOOL merge; // @synthesize merge=_merge;
@property (strong, nonatomic) CKDPRecord *record; // @synthesize record=_record;
@property (strong, nonatomic) NSString *recordProtectionInfoTag; // @synthesize recordProtectionInfoTag=_recordProtectionInfoTag;
@property (nonatomic) int saveSemantics; // @synthesize saveSemantics=_saveSemantics;
@property (strong, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property (strong, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate; // @synthesize shareIDUpdate=_shareIDUpdate;
@property (strong, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;

+ (id)options;
- (void).cxx_destruct;
- (void)addConflictLosersToResolve:(id)arg1;
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;
- (void)clearConflictLosersToResolves;
- (void)clearFieldsToDeleteIfExistOnMerges;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictLosersToResolvesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

