//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, WBSPerSitePreference, WBSPerSitePreferenceTimeout;
@protocol WBSPerSitePreferenceManagerDelegate;

@protocol WBSPerSitePreferenceManager <NSObject>

@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;

- (void)getAllDomainsConfiguredForPreference:(WBSPerSitePreference *)arg1 usingBlock:(void (^)(NSSet *))arg2;
- (void)getDefaultPreferenceValueForPreference:(WBSPerSitePreference *)arg1 completionHandler:(void (^)(id))arg2;
- (void)getValueOfPreference:(WBSPerSitePreference *)arg1 forDomain:(NSString *)arg2 withTimeout:(WBSPerSitePreferenceTimeout *)arg3 usingBlock:(void (^)(id, BOOL))arg4;
- (NSString *)localizedStringForValue:(id)arg1 inPreference:(WBSPerSitePreference *)arg2;
- (NSArray *)preferences;
- (void)removePreferenceValuesForDomains:(NSSet *)arg1 fromPreference:(WBSPerSitePreference *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)setDefaultValue:(id)arg1 ofPreference:(WBSPerSitePreference *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)setValue:(id)arg1 ofPreference:(WBSPerSitePreference *)arg2 forDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (NSArray *)valuesForPreference:(WBSPerSitePreference *)arg1;

@optional
- (void)getDomainsAllowedToRemoveForPreference:(WBSPerSitePreference *)arg1 usingBlock:(void (^)(NSSet *))arg2;
- (NSString *)localizedWarningTextForPreference:(WBSPerSitePreference *)arg1;
- (BOOL)preferenceAppliesToHighLevelDomains:(WBSPerSitePreference *)arg1;
- (BOOL)preferenceOnlyShowsConfiguredSites:(WBSPerSitePreference *)arg1;
@end

