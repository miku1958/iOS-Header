//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineLMPResponseInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_eventId;
    int _interaction;
    BOOL _selected;
    struct {
        unsigned int timestamp:1;
        unsigned int interaction:1;
        unsigned int selected:1;
    } _has;
}

@property (strong, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property (readonly, nonatomic) BOOL hasEventId;
@property (nonatomic) BOOL hasInteraction;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int interaction; // @synthesize interaction=_interaction;
@property (nonatomic) BOOL selected; // @synthesize selected=_selected;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)copyTo:(id)arg1;
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

