//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@class NSArray, NSMutableDictionary;

@interface WBSAutomaticReadingListAppExtensionSource : WBSAutomaticReadingListSocialSource
{
    NSArray *_activeExtensions;
    NSMutableDictionary *_identifierToEntriesMap;
    id _extensionMatchingContext;
    NSArray *_extensions;
}

@property (strong, nonatomic) NSArray *extensions; // @synthesize extensions=_extensions;

+ (id)displayNameForExtension:(id)arg1;
+ (id)hostingAppIconForExtension:(id)arg1;
+ (id)sharedSource;
- (void).cxx_destruct;
- (void)_beginExtensionDiscovery;
- (void)_extensionsDidChange;
- (id)_findAccounts;
- (id)_items;
- (id)accountTypeIdentifier;
- (id)init;
- (BOOL)isActive;
- (id)recordsInfo;
- (void)requestMoreItemsWithAge:(int)arg1;
- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;
- (id)resourceURLString;
- (id)serviceImage;
- (id)serviceName;
- (id)servicePluginName;
- (id)serviceType;
- (void)setShowItems:(BOOL)arg1 forExtension:(id)arg2;
- (BOOL)showItemsForExtension:(id)arg1;

@end
