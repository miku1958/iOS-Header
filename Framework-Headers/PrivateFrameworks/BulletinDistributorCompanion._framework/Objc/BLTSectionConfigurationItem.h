//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSNumber;

@interface BLTSectionConfigurationItem : NSObject
{
    BOOL _optOutOfAttachmentTransmission;
    BOOL _alwaysSyncSettings;
    BOOL _alwaysAlert;
    BOOL _optOutOfWaitForUserIdle;
    BOOL _applyWhitelistToChildSections;
    BOOL _optOutOfNotificationTuning;
    BOOL _hasLegacyMapInUserInfo;
    BOOL _hasLegacyMapInContext;
    BOOL _optOutOfSubtitleRemovalForOlderWatches;
    BOOL _shouldUsePhoneExpirationDate;
    BOOL _optOutOfSettingsCoordination;
    BOOL _overrideAppliesToCoordinationOptOut;
    unsigned long long _coordinationType;
    NSArray *_whitelistedSubtypes;
    NSArray *_blacklistedCategories;
    NSArray *_whitelistedCategories;
    NSNumber *_watchVersionThatUsesUserInfoForContext;
    NSArray *_additionalBridgeSectionIDs;
    NSNumber *_watchVersionThatUsesAttachmentURL;
    NSMutableDictionary *_blacklistedCategoriesWithVersion;
}

@property (strong, nonatomic) NSArray *additionalBridgeSectionIDs; // @synthesize additionalBridgeSectionIDs=_additionalBridgeSectionIDs;
@property (nonatomic) BOOL alwaysAlert; // @synthesize alwaysAlert=_alwaysAlert;
@property (nonatomic) BOOL alwaysSyncSettings; // @synthesize alwaysSyncSettings=_alwaysSyncSettings;
@property (nonatomic) BOOL applyWhitelistToChildSections; // @synthesize applyWhitelistToChildSections=_applyWhitelistToChildSections;
@property (strong, nonatomic) NSArray *blacklistedCategories; // @synthesize blacklistedCategories=_blacklistedCategories;
@property (strong, nonatomic) NSMutableDictionary *blacklistedCategoriesWithVersion; // @synthesize blacklistedCategoriesWithVersion=_blacklistedCategoriesWithVersion;
@property unsigned long long coordinationType; // @synthesize coordinationType=_coordinationType;
@property (nonatomic) BOOL hasLegacyMapInContext; // @synthesize hasLegacyMapInContext=_hasLegacyMapInContext;
@property (nonatomic) BOOL hasLegacyMapInUserInfo; // @synthesize hasLegacyMapInUserInfo=_hasLegacyMapInUserInfo;
@property (nonatomic) BOOL optOutOfAttachmentTransmission; // @synthesize optOutOfAttachmentTransmission=_optOutOfAttachmentTransmission;
@property (nonatomic) BOOL optOutOfNotificationTuning; // @synthesize optOutOfNotificationTuning=_optOutOfNotificationTuning;
@property (nonatomic) BOOL optOutOfSettingsCoordination; // @synthesize optOutOfSettingsCoordination=_optOutOfSettingsCoordination;
@property (nonatomic) BOOL optOutOfSubtitleRemovalForOlderWatches; // @synthesize optOutOfSubtitleRemovalForOlderWatches=_optOutOfSubtitleRemovalForOlderWatches;
@property (nonatomic) BOOL optOutOfWaitForUserIdle; // @synthesize optOutOfWaitForUserIdle=_optOutOfWaitForUserIdle;
@property (nonatomic) BOOL overrideAppliesToCoordinationOptOut; // @synthesize overrideAppliesToCoordinationOptOut=_overrideAppliesToCoordinationOptOut;
@property (nonatomic) BOOL shouldUsePhoneExpirationDate; // @synthesize shouldUsePhoneExpirationDate=_shouldUsePhoneExpirationDate;
@property (strong, nonatomic) NSNumber *watchVersionThatUsesAttachmentURL; // @synthesize watchVersionThatUsesAttachmentURL=_watchVersionThatUsesAttachmentURL;
@property (strong, nonatomic) NSNumber *watchVersionThatUsesUserInfoForContext; // @synthesize watchVersionThatUsesUserInfoForContext=_watchVersionThatUsesUserInfoForContext;
@property (strong, nonatomic) NSArray *whitelistedCategories; // @synthesize whitelistedCategories=_whitelistedCategories;
@property (strong, nonatomic) NSArray *whitelistedSubtypes; // @synthesize whitelistedSubtypes=_whitelistedSubtypes;

- (void).cxx_destruct;
- (unsigned long long)coordinationTypeWithSubtype:(long long)arg1;
- (id)description;
- (BOOL)hasDisplayedCriticalBulletins;
- (id)initWithDictionary:(id)arg1;
- (BOOL)updateCoordinationType:(unsigned long long)arg1;

@end
