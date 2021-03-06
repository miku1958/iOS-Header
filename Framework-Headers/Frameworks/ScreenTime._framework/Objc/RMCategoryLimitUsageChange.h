//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSString;

@interface RMCategoryLimitUsageChange : PBCodable <NSCopying>
{
    long long _changeInUsage;
    unsigned long long _daysSinceCreationDate;
    NSString *_limitType;
    NSString *_limitedCategory;
    BOOL _noCreationDate;
    struct {
        unsigned int changeInUsage:1;
        unsigned int daysSinceCreationDate:1;
        unsigned int noCreationDate:1;
    } _has;
}

@property (nonatomic) long long changeInUsage; // @synthesize changeInUsage=_changeInUsage;
@property (nonatomic) unsigned long long daysSinceCreationDate; // @synthesize daysSinceCreationDate=_daysSinceCreationDate;
@property (nonatomic) BOOL hasChangeInUsage;
@property (nonatomic) BOOL hasDaysSinceCreationDate;
@property (readonly, nonatomic) BOOL hasLimitType;
@property (readonly, nonatomic) BOOL hasLimitedCategory;
@property (nonatomic) BOOL hasNoCreationDate;
@property (strong, nonatomic) NSString *limitType; // @synthesize limitType=_limitType;
@property (strong, nonatomic) NSString *limitedCategory; // @synthesize limitedCategory=_limitedCategory;
@property (nonatomic) BOOL noCreationDate; // @synthesize noCreationDate=_noCreationDate;

- (void).cxx_destruct;
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

