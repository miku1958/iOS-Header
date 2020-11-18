//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable <NSCopying>
{
    NSData *_articleRecordData;
    NSData *_masterIssueRecordData;
    NSData *_sourceChannelRecordData;
}

@property (strong, nonatomic) NSData *articleRecordData; // @synthesize articleRecordData=_articleRecordData;
@property (readonly, nonatomic) BOOL hasArticleRecordData;
@property (readonly, nonatomic) BOOL hasMasterIssueRecordData;
@property (readonly, nonatomic) BOOL hasSourceChannelRecordData;
@property (strong, nonatomic) NSData *masterIssueRecordData; // @synthesize masterIssueRecordData=_masterIssueRecordData;
@property (strong, nonatomic) NSData *sourceChannelRecordData; // @synthesize sourceChannelRecordData=_sourceChannelRecordData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

