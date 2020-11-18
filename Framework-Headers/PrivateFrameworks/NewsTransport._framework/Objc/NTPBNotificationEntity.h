//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable <NSCopying>
{
    int _notificationType;
    int _subscriberType;
    NSMutableArray *_tagIds;
    struct {
        unsigned int notificationType:1;
        unsigned int subscriberType:1;
    } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) BOOL hasSubscriberType;
@property (nonatomic) int notificationType; // @synthesize notificationType=_notificationType;
@property (nonatomic) int subscriberType; // @synthesize subscriberType=_subscriberType;
@property (strong, nonatomic) NSMutableArray *tagIds; // @synthesize tagIds=_tagIds;

+ (Class)tagIdType;
- (void).cxx_destruct;
- (void)addTagId:(id)arg1;
- (void)clearTagIds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)tagIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)tagIdsCount;
- (void)writeTo:(id)arg1;

@end
