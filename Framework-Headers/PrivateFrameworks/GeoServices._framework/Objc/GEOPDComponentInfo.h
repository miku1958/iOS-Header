//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDComponentFilter;

@interface GEOPDComponentInfo : PBCodable <NSCopying>
{
    unsigned int _count;
    GEOPDComponentFilter *_filter;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    BOOL _includeSource;
    struct {
        unsigned int count:1;
        unsigned int startIndex:1;
        unsigned int type:1;
        unsigned int urgency:1;
        unsigned int includeSource:1;
    } _has;
}

@property (nonatomic) unsigned int count; // @synthesize count=_count;
@property (strong, nonatomic) GEOPDComponentFilter *filter; // @synthesize filter=_filter;
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasFilter;
@property (nonatomic) BOOL hasIncludeSource;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUrgency;
@property (nonatomic) BOOL includeSource; // @synthesize includeSource=_includeSource;
@property (nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
@property (nonatomic) int type; // @synthesize type=_type;
@property (nonatomic) int urgency; // @synthesize urgency=_urgency;

- (int)StringAsType:(id)arg1;
- (int)StringAsUrgency:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (id)urgencyAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

