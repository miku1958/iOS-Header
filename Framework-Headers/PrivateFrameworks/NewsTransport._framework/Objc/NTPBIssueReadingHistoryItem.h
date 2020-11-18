//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <NSCopying>
{
    NSString *_identifier;
    NSString *_issueID;
    NTPBDate *_lastBadgedPBDate;
    NSString *_lastVisitedArticleID;
    NTPBDate *_lastVisitedPBDate;
    NSString *_lastVisitedPageID;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasIssueID;
@property (readonly, nonatomic) BOOL hasLastBadgedPBDate;
@property (readonly, nonatomic) BOOL hasLastVisitedArticleID;
@property (readonly, nonatomic) BOOL hasLastVisitedPBDate;
@property (readonly, nonatomic) BOOL hasLastVisitedPageID;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property (strong, nonatomic) NTPBDate *lastBadgedPBDate; // @synthesize lastBadgedPBDate=_lastBadgedPBDate;
@property (strong, nonatomic) NSString *lastVisitedArticleID; // @synthesize lastVisitedArticleID=_lastVisitedArticleID;
@property (strong, nonatomic) NTPBDate *lastVisitedPBDate; // @synthesize lastVisitedPBDate=_lastVisitedPBDate;
@property (strong, nonatomic) NSString *lastVisitedPageID; // @synthesize lastVisitedPageID=_lastVisitedPageID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

