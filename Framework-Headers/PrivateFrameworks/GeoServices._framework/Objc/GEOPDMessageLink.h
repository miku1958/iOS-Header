//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimezone, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDMessageLink : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_hoursOfOperations;
    NSString *_messageId;
    NSString *_messageUrl;
    NSString *_navBackgroundColor;
    NSString *_navTintColor;
    int _responseTime;
    GEOTimezone *_timezone;
    BOOL _isVerified;
    struct {
        unsigned int responseTime:1;
        unsigned int isVerified:1;
    } _has;
}

@property (nonatomic) BOOL hasIsVerified;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (readonly, nonatomic) BOOL hasMessageUrl;
@property (readonly, nonatomic) BOOL hasNavBackgroundColor;
@property (readonly, nonatomic) BOOL hasNavTintColor;
@property (nonatomic) BOOL hasResponseTime;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (strong, nonatomic) NSMutableArray *hoursOfOperations; // @synthesize hoursOfOperations=_hoursOfOperations;
@property (nonatomic) BOOL isVerified; // @synthesize isVerified=_isVerified;
@property (strong, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property (strong, nonatomic) NSString *messageUrl; // @synthesize messageUrl=_messageUrl;
@property (strong, nonatomic) NSString *navBackgroundColor; // @synthesize navBackgroundColor=_navBackgroundColor;
@property (strong, nonatomic) NSString *navTintColor; // @synthesize navTintColor=_navTintColor;
@property (nonatomic) int responseTime; // @synthesize responseTime=_responseTime;
@property (strong, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)hoursOfOperationType;
+ (id)messageLinkForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsResponseTime:(id)arg1;
- (void)addHoursOfOperation:(id)arg1;
- (void)clearHoursOfOperations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)hoursOfOperationAtIndex:(unsigned long long)arg1;
- (unsigned long long)hoursOfOperationsCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)responseTimeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
