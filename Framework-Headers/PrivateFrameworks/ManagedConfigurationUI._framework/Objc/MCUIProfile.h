//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCProfile, NSArray;

@interface MCUIProfile : NSObject
{
    BOOL _showManagedPayloads;
    long long _finalInstallationWarningStyle;
    MCProfile *_profile;
    NSArray *_availableElevatedPayloadInfoTypes;
    NSArray *_accountSections;
    NSArray *_managedAppSections;
    NSArray *_managedBookSections;
    NSArray *_moreDetailsSections;
    NSArray *_restrictionSections;
    NSArray *_payloadInfoSectionSummaries;
}

@property (readonly, nonatomic) NSArray *accountSections; // @synthesize accountSections=_accountSections;
@property (readonly, nonatomic) NSArray *availableElevatedPayloadInfoTypes; // @synthesize availableElevatedPayloadInfoTypes=_availableElevatedPayloadInfoTypes;
@property (nonatomic) long long finalInstallationWarningStyle; // @synthesize finalInstallationWarningStyle=_finalInstallationWarningStyle;
@property (readonly, nonatomic) NSArray *managedAppSections; // @synthesize managedAppSections=_managedAppSections;
@property (readonly, nonatomic) NSArray *managedBookSections; // @synthesize managedBookSections=_managedBookSections;
@property (readonly, nonatomic) NSArray *moreDetailsSections; // @synthesize moreDetailsSections=_moreDetailsSections;
@property (readonly, nonatomic) NSArray *payloadInfoSectionSummaries; // @synthesize payloadInfoSectionSummaries=_payloadInfoSectionSummaries;
@property (readonly, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) NSArray *restrictionSections; // @synthesize restrictionSections=_restrictionSections;
@property (nonatomic) BOOL showManagedPayloads; // @synthesize showManagedPayloads=_showManagedPayloads;

- (void).cxx_destruct;
- (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
- (void)_determineAvailableElevatedPayloadInfoTypes;
- (id)_localizedPayloadSummaryByType:(id)arg1;
- (void)_managedAppsChanged:(id)arg1;
- (void)_managedBooksChanged:(id)arg1;
- (long long)_numberOfItemsInSectionsArray:(id)arg1;
- (void)_profileListChanged:(id)arg1;
- (id)_sortedPayloads:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 managedPayloads:(BOOL)arg2;
- (BOOL)isInstalledMDMProfile;
- (BOOL)isMDMProfile;
- (BOOL)managesAppID:(id)arg1;
- (BOOL)managesBook:(id)arg1;
- (long long)numberOfAccounts;
- (long long)numberOfManagedApps;
- (long long)numberOfManagedBooks;
- (long long)numberOfRestrictions;
- (void)reloadProfile:(id)arg1;
- (void)setProfile:(id)arg1 managedPayloads:(BOOL)arg2;

@end

