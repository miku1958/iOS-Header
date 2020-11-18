//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_recordVersions;
    BOOL _isDeleted;
    struct {
        unsigned int isDeleted:1;
    } _has;
}

@property (nonatomic) BOOL hasIsDeleted;
@property (nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property (strong, nonatomic) NSMutableArray *recordVersions; // @synthesize recordVersions=_recordVersions;

+ (Class)recordVersionsType;
- (void).cxx_destruct;
- (void)addRecordVersions:(id)arg1;
- (void)clearRecordVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordVersionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordVersionsCount;
- (void)writeTo:(id)arg1;

@end
