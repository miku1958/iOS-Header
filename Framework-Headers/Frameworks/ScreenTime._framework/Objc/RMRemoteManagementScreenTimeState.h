//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface RMRemoteManagementScreenTimeState : PBCodable <NSCopying>
{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _daysSinceCreationDates;
    unsigned long long _alwaysAllowedAppsCount;
    unsigned long long _daysWithScreenTimeEnabled;
    unsigned long long _numberOfLimits;
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    NSMutableArray *_limitedCategories;
    BOOL _contentPrivacyRestrictionsEnabled;
    BOOL _customDowntimeEnabled;
    BOOL _downtimeEnabled;
    BOOL _hasPasscode;
    BOOL _isManaged;
    BOOL _isManaging;
    BOOL _screenTimeEnabled;
    struct {
        unsigned int alwaysAllowedAppsCount:1;
        unsigned int daysWithScreenTimeEnabled:1;
        unsigned int numberOfLimits:1;
        unsigned int timestamp:1;
        unsigned int contentPrivacyRestrictionsEnabled:1;
        unsigned int customDowntimeEnabled:1;
        unsigned int downtimeEnabled:1;
        unsigned int hasPasscode:1;
        unsigned int isManaged:1;
        unsigned int isManaging:1;
        unsigned int screenTimeEnabled:1;
    } _has;
}

@property (nonatomic) unsigned long long alwaysAllowedAppsCount; // @synthesize alwaysAllowedAppsCount=_alwaysAllowedAppsCount;
@property (nonatomic) BOOL contentPrivacyRestrictionsEnabled; // @synthesize contentPrivacyRestrictionsEnabled=_contentPrivacyRestrictionsEnabled;
@property (nonatomic) BOOL customDowntimeEnabled; // @synthesize customDowntimeEnabled=_customDowntimeEnabled;
@property (readonly, nonatomic) unsigned long long *daysSinceCreationDates;
@property (readonly, nonatomic) unsigned long long daysSinceCreationDatesCount;
@property (nonatomic) unsigned long long daysWithScreenTimeEnabled; // @synthesize daysWithScreenTimeEnabled=_daysWithScreenTimeEnabled;
@property (nonatomic) BOOL downtimeEnabled; // @synthesize downtimeEnabled=_downtimeEnabled;
@property (strong, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property (nonatomic) BOOL hasAlwaysAllowedAppsCount;
@property (nonatomic) BOOL hasContentPrivacyRestrictionsEnabled;
@property (nonatomic) BOOL hasCustomDowntimeEnabled;
@property (nonatomic) BOOL hasDaysWithScreenTimeEnabled;
@property (nonatomic) BOOL hasDowntimeEnabled;
@property (readonly, nonatomic) BOOL hasFamilyMemberType;
@property (nonatomic) BOOL hasHasPasscode;
@property (nonatomic) BOOL hasIsManaged;
@property (nonatomic) BOOL hasIsManaging;
@property (nonatomic) BOOL hasNumberOfLimits;
@property (nonatomic) BOOL hasPasscode; // @synthesize hasPasscode=_hasPasscode;
@property (nonatomic) BOOL hasScreenTimeEnabled;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property (nonatomic) BOOL isManaging; // @synthesize isManaging=_isManaging;
@property (strong, nonatomic) NSMutableArray *limitedCategories; // @synthesize limitedCategories=_limitedCategories;
@property (nonatomic) unsigned long long numberOfLimits; // @synthesize numberOfLimits=_numberOfLimits;
@property (nonatomic) BOOL screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)limitedCategoriesType;
- (void).cxx_destruct;
- (void)addDaysSinceCreationDate:(unsigned long long)arg1;
- (void)addLimitedCategories:(id)arg1;
- (void)clearDaysSinceCreationDates;
- (void)clearLimitedCategories;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)daysSinceCreationDateAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)limitedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)limitedCategoriesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDaysSinceCreationDates:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

