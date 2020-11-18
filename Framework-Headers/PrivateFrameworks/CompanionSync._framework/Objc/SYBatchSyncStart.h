//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYMessageHeader;

@interface SYBatchSyncStart : PBCodable <NSCopying>
{
    unsigned int _estimatedChangeCount;
    SYMessageHeader *_header;
    NSString *_syncID;
    struct {
        unsigned int estimatedChangeCount:1;
    } _has;
}

@property (nonatomic) unsigned int estimatedChangeCount; // @synthesize estimatedChangeCount=_estimatedChangeCount;
@property (nonatomic) BOOL hasEstimatedChangeCount;
@property (strong, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
@property (strong, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;

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
