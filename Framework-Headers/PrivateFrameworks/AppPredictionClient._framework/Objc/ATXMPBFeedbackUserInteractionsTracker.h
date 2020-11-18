//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSString;

@interface ATXMPBFeedbackUserInteractionsTracker : PBCodable <NSCopying>
{
    NSString *_consumerSubType;
    int _engagementType;
    CDStruct_c054b854 _has;
}

@property (strong, nonatomic) NSString *consumerSubType; // @synthesize consumerSubType=_consumerSubType;
@property (nonatomic) int engagementType; // @synthesize engagementType=_engagementType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (nonatomic) BOOL hasEngagementType;

- (void).cxx_destruct;
- (int)StringAsEngagementType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engagementTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
