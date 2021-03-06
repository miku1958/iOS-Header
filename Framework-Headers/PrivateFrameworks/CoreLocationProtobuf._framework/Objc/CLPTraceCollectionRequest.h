//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_events;
    CLPMeta *_meta;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (strong, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
@property (nonatomic) int type; // @synthesize type=_type;

+ (Class)eventsType;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

