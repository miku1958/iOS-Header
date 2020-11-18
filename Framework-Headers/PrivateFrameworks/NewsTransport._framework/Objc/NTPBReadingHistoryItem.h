//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <NSCopying>
{
    unsigned long long _maxVersionRead;
    NSString *_articleID;
    unsigned int _flags;
    NTPBDate *_lastVisitedDate;
    struct {
        unsigned int maxVersionRead:1;
        unsigned int flags:1;
    } _has;
}

@property (strong, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) BOOL hasArticleID;
@property (nonatomic) BOOL hasFlags;
@property (readonly, nonatomic) BOOL hasLastVisitedDate;
@property (nonatomic) BOOL hasMaxVersionRead;
@property (strong, nonatomic) NTPBDate *lastVisitedDate; // @synthesize lastVisitedDate=_lastVisitedDate;
@property (nonatomic) unsigned long long maxVersionRead; // @synthesize maxVersionRead=_maxVersionRead;

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

