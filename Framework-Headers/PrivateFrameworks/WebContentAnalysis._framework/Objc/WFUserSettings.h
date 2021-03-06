//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WFWhitelistSiteBuffer;

@interface WFUserSettings : NSObject
{
    NSDictionary *_userSettings;
    NSString *_userName;
    WFWhitelistSiteBuffer *_contentFilterOverriddenWhiteListedSitesBuffer;
    WFWhitelistSiteBuffer *_contentFilterOverriddenBlackListedSitesBuffer;
    WFWhitelistSiteBuffer *_whiteListedSitesBuffer;
}

@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenBlackListedSites;
@property (readonly, nonatomic) BOOL canEditContentFilterOverriddenWhiteListedSites;
@property (readonly, nonatomic) BOOL canEditOverridesAllowed;
@property (readonly, nonatomic) BOOL canEditRestrictionType;
@property (readonly, nonatomic) BOOL canEditWhiteListAllowedSites;
@property (strong, nonatomic) NSArray *contentFilterOverriddenBlackListedSites;
@property (strong, nonatomic) NSArray *contentFilterOverriddenWhiteListedSites;
@property (nonatomic) BOOL overridesAllowed;
@property (nonatomic) long long restrictionType;
@property (copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property (strong, nonatomic) NSArray *whiteListAllowedSites;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)metasitesExceptionPath;
+ (id)metasitesPath;
- (BOOL)_addManagedDefaults:(id)arg1;
- (id)_managedDefaultsPath;
- (BOOL)_setManagedDefaults:(id)arg1;
- (id)_userSettingsForUser:(id)arg1;
- (BOOL)alwaysAllowHTTPS;
- (BOOL)autoWhitelistContainsURL:(id)arg1;
- (BOOL)canEditAlwaysAllowHTTPS;
- (BOOL)contentFilterEnabled;
- (BOOL)contentFilterListsAllowURL:(id)arg1;
- (BOOL)contentFilterOverriddenBlackListContainsURL:(id)arg1;
- (id)contentFilterOverriddenBlackListedSitesBuffer;
- (BOOL)contentFilterOverriddenList:(id)arg1 containsURL:(id)arg2;
- (id)contentFilterOverriddenSites;
- (BOOL)contentFilterOverriddenWhiteListContainsURL:(id)arg1;
- (id)contentFilterOverriddenWhiteListedSitesBuffer;
- (BOOL)contentFilterOverridesEnabled;
- (void)dealloc;
- (id)initWithUserName:(id)arg1;
- (BOOL)restrictWebEnabled;
- (void)setAlwaysAllowHTTPS:(BOOL)arg1;
- (void)setContentFilterEnabled:(BOOL)arg1;
- (void)setContentFilterOverridesEnabled:(BOOL)arg1;
- (void)setRestrictWebEnabled:(BOOL)arg1;
- (void)setWhiteListEnabled:(BOOL)arg1;
- (BOOL)whiteListContainsURL:(id)arg1;
- (BOOL)whiteListEnabled;
- (id)whiteListedSitesBuffer;

@end

