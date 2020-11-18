//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariContactAutoFillDidFillCustomContactSetEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    BOOL _isShowingMeCardSets;
    struct {
        unsigned int timestamp:1;
        unsigned int isShowingMeCardSets:1;
    } _has;
}

@property (nonatomic) BOOL hasIsShowingMeCardSets;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isShowingMeCardSets; // @synthesize isShowingMeCardSets=_isShowingMeCardSets;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

