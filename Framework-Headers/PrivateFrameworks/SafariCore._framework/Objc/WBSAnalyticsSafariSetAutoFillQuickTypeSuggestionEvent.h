//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariSetAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _category;
    int _formProperty;
    CDStruct_18b2ecd0 _has;
}

@property (nonatomic) int category; // @synthesize category=_category;
@property (nonatomic) int formProperty; // @synthesize formProperty=_formProperty;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasFormProperty;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsCategory:(id)arg1;
- (int)StringAsFormProperty:(id)arg1;
- (id)categoryAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formPropertyAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

