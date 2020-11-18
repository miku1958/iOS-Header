//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BulletinBoard/NSCopying-Protocol.h>
#import <BulletinBoard/NSSecureCoding-Protocol.h>

@class BBSectionIcon, BBSectionInfoSettings, NSArray, NSData, NSString;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sectionID;
    NSString *_subsectionID;
    long long _sectionType;
    long long _sectionCategory;
    BBSectionInfoSettings *_sectionInfoSettings;
    BBSectionInfoSettings *_managedSectionInfoSettings;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    NSArray *_filters;
    BOOL _suppressFromSettings;
    BOOL _displaysCriticalBulletins;
    BOOL _hideWeeApp;
    long long _subsectionPriority;
    unsigned long long _suppressedSettings;
    unsigned long long _version;
}

@property (nonatomic) unsigned long long alertType;
@property (nonatomic) BOOL allowsNotifications;
@property (nonatomic) unsigned long long bulletinCount;
@property (copy, nonatomic) NSArray *dataProviderIDs; // @synthesize dataProviderIDs=_dataProviderIDs;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) BOOL displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property (copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property (nonatomic) BOOL hideWeeApp; // @synthesize hideWeeApp=_hideWeeApp;
@property (copy, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (copy, nonatomic) BBSectionInfoSettings *managedSectionInfoSettings;
@property (nonatomic) unsigned long long notificationCenterLimit;
@property (nonatomic) BBSectionInfo *parentSection; // @synthesize parentSection=_parentSection;
@property (copy, nonatomic) NSString *pathToWeeAppPluginBundle; // @synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle;
@property (nonatomic) unsigned long long pushSettings;
@property (readonly, nonatomic) BBSectionInfoSettings *readableSettings;
@property (nonatomic) long long sectionCategory; // @synthesize sectionCategory=_sectionCategory;
@property (copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property (copy, nonatomic) BBSectionInfoSettings *sectionInfoSettings; // @synthesize sectionInfoSettings=_sectionInfoSettings;
@property (nonatomic) long long sectionType; // @synthesize sectionType=_sectionType;
@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (copy, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property (nonatomic) long long subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
@property (copy, nonatomic) NSArray *subsections; // @synthesize subsections=_subsections;
@property (nonatomic) BOOL suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property (nonatomic) unsigned long long suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property (readonly, nonatomic) BOOL usesManagedSettings;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;
@property (readonly, nonatomic) BBSectionInfoSettings *writableSettings;

+ (id)defaultSectionInfoForSection:(id)arg1;
+ (id)defaultSectionInfoForType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_addSubsection:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(long long)arg1;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_replaceSubsection:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)effectiveSectionInfo;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultsForSectionType:(long long)arg1;
- (BOOL)queryAndUseManagedSettings;
- (BOOL)queryAndUseManagedSettingsForSectionID:(id)arg1;
- (void)updateWithDefaultFilters:(id)arg1;
- (void)updateWithDefaultSectionInfo:(id)arg1;

@end

