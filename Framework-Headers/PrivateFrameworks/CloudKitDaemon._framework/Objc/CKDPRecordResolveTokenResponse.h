//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecord, CKDPShareMetadata, CKDPZone, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying>
{
    NSString *_container;
    int _containerEnvironment;
    CKDPZone *_recordZone;
    NSMutableArray *_records;
    CKDPShareMetadata *_shareMetadata;
    CKDPRecord *_shareRecord;
    struct {
        unsigned int containerEnvironment:1;
    } _has;
}

@property (strong, nonatomic) NSString *container; // @synthesize container=_container;
@property (nonatomic) int containerEnvironment; // @synthesize containerEnvironment=_containerEnvironment;
@property (readonly, nonatomic) BOOL hasContainer;
@property (nonatomic) BOOL hasContainerEnvironment;
@property (readonly, nonatomic) BOOL hasRecordZone;
@property (readonly, nonatomic) BOOL hasShareMetadata;
@property (readonly, nonatomic) BOOL hasShareRecord;
@property (strong, nonatomic) CKDPZone *recordZone; // @synthesize recordZone=_recordZone;
@property (strong, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property (strong, nonatomic) CKDPShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property (strong, nonatomic) CKDPRecord *shareRecord; // @synthesize shareRecord=_shareRecord;

+ (Class)recordType;
- (void).cxx_destruct;
- (int)StringAsContainerEnvironment:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)clearRecords;
- (id)containerEnvironmentAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)writeTo:(id)arg1;

@end

