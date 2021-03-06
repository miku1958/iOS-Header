//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBPaidSubscriptionConfig : PBCodable <NSCopying>
{
    long long _maxGroupSizeIPad;
    long long _maxGroupSizeIPhone;
    long long _maxTimesHeadlineInGroup;
    struct {
        unsigned int maxGroupSizeIPad:1;
        unsigned int maxGroupSizeIPhone:1;
        unsigned int maxTimesHeadlineInGroup:1;
    } _has;
}

@property (nonatomic) BOOL hasMaxGroupSizeIPad;
@property (nonatomic) BOOL hasMaxGroupSizeIPhone;
@property (nonatomic) BOOL hasMaxTimesHeadlineInGroup;
@property (nonatomic) long long maxGroupSizeIPad; // @synthesize maxGroupSizeIPad=_maxGroupSizeIPad;
@property (nonatomic) long long maxGroupSizeIPhone; // @synthesize maxGroupSizeIPhone=_maxGroupSizeIPhone;
@property (nonatomic) long long maxTimesHeadlineInGroup; // @synthesize maxTimesHeadlineInGroup=_maxTimesHeadlineInGroup;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

