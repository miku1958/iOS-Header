//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class NSString;

@interface NTKPeopleComplication : NTKComplication
{
    NSString *_storeBackedContactID;
    NSString *_contactID;
    NSString *_shortName;
    NSString *_fullName;
    NSString *_abbreviation;
}

@property (readonly, nonatomic) NSString *abbreviation; // @synthesize abbreviation=_abbreviation;
@property (readonly, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property (readonly, nonatomic, getter=isFavoritedPerson) BOOL favoritedPerson;
@property (readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property (readonly, nonatomic) NSString *storeBackedContactID; // @synthesize storeBackedContactID=_storeBackedContactID;

+ (id)_allComplicationConfigurationsWithType:(unsigned long long)arg1;
+ (BOOL)_complicationPickerShouldShowMoreButtonForList:(id)arg1;
+ (id)allValidFavoriteContacts;
+ (id)complicationForContact:(id)arg1 forFavoriteList:(BOOL)arg2;
+ (id)localizedNameForContact:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (id)_complicationTypeString;
- (void)_contactsCacheDidChange;
- (id)_generateUniqueIdentifier;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_refreshContactInfoNotifyOfChange;
- (void)_registerWithSwitch:(BOOL)arg1;
- (void)_updateStateWithContact:(id)arg1 foundAsPrimaryId:(BOOL)arg2;
- (BOOL)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDetailText;
- (id)localizedKeylineLabelText;
- (id)localizedRichDetailText;
- (id)localizedRichKeylineLabelText;
- (id)ntk_contactIdentifier;
- (unsigned long long)ntk_itemType;
- (id)ntk_sectionIdentifier;
- (BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;

@end
