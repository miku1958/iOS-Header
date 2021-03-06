//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying>
{
    NSMutableArray *_logMsgEvents;
    unsigned int _groupRetryCount;
    int _logMessageType;
    struct {
        unsigned int has_groupRetryCount:1;
        unsigned int has_logMessageType:1;
    } _flags;
}

@property (nonatomic) unsigned int groupRetryCount;
@property (nonatomic) BOOL hasGroupRetryCount;
@property (nonatomic) BOOL hasLogMessageType;
@property (nonatomic) int logMessageType;
@property (strong, nonatomic) NSMutableArray *logMsgEvents;

+ (BOOL)isValid:(id)arg1;
+ (Class)logMsgEventType;
- (void).cxx_destruct;
- (int)StringAsLogMessageType:(id)arg1;
- (void)addLogMsgEvent:(id)arg1;
- (void)clearLogMsgEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)logMessageTypeAsString:(int)arg1;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)logMsgEventsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

