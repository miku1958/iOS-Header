//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSArray, NSLocale, NSString, UIColor, UISUISecurityContext, UITraitCollection;

@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding>
{
    BOOL _allowsEmbedding;
    BOOL _isContentManaged;
    BOOL _shouldMatchOnlyUserElectedExtensions;
    BOOL _shouldExcludeiCloudAddToDriveActivity;
    BOOL _shouldExcludeiCloudSharingActivity;
    BOOL _shouldSkipPeopleSuggestions;
    BOOL _canExcludeExtensionActivities;
    BOOL _canShowShareSheetPlugIns;
    BOOL _whitelistActionActivitiesOnly;
    BOOL _linkedBeforeYukon;
    BOOL _canSaveImages;
    BOOL __unitTest_disableExcludingSourceApplicationFromOpenActivities;
    double _preferredWidth;
    NSArray *_hostActivityConfigurations;
    NSArray *_activityItemValueClassNames;
    NSArray *_activityTypesToCreateInShareService;
    UISUISecurityContext *_securityScopedURLsForMatching;
    NSArray *_activityItemValueExtensionMatchingDictionaries;
    NSArray *_urlsBeingShared;
    NSArray *_linkPresentationDataForActivityItems;
    NSArray *_typeIdentifiersForShortcutsMatching;
    UIColor *_hostTintColor;
    NSArray *_initialPhotosAssetDetails;
    NSString *_sessionID;
    UITraitCollection *_hostTraitCollection;
    NSLocale *_hostLocale;
    NSArray *_preferredLocalizations;
    NSArray *_includedActivityTypes;
    NSArray *_excludedActivityTypes;
    NSArray *_activityTypeOrder;
    long long _excludedActivityCategories;
    long long _sharingStyle;
    struct NSDirectionalEdgeInsets _hostLayoutMargins;
}

@property (readonly, nonatomic) BOOL _unitTest_disableExcludingSourceApplicationFromOpenActivities; // @synthesize _unitTest_disableExcludingSourceApplicationFromOpenActivities=__unitTest_disableExcludingSourceApplicationFromOpenActivities;
@property (strong, nonatomic) NSArray *activityItemValueClassNames; // @synthesize activityItemValueClassNames=_activityItemValueClassNames;
@property (strong, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries; // @synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries;
@property (strong, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property (strong, nonatomic) NSArray *activityTypesToCreateInShareService; // @synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService;
@property (nonatomic) BOOL allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property (nonatomic) BOOL canExcludeExtensionActivities; // @synthesize canExcludeExtensionActivities=_canExcludeExtensionActivities;
@property (nonatomic) BOOL canSaveImages; // @synthesize canSaveImages=_canSaveImages;
@property (nonatomic) BOOL canShowShareSheetPlugIns; // @synthesize canShowShareSheetPlugIns=_canShowShareSheetPlugIns;
@property (nonatomic) long long excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property (strong, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property (strong, nonatomic) NSArray *hostActivityConfigurations; // @synthesize hostActivityConfigurations=_hostActivityConfigurations;
@property (nonatomic) struct NSDirectionalEdgeInsets hostLayoutMargins; // @synthesize hostLayoutMargins=_hostLayoutMargins;
@property (strong, nonatomic) NSLocale *hostLocale; // @synthesize hostLocale=_hostLocale;
@property (strong, nonatomic) UIColor *hostTintColor; // @synthesize hostTintColor=_hostTintColor;
@property (strong, nonatomic) UITraitCollection *hostTraitCollection; // @synthesize hostTraitCollection=_hostTraitCollection;
@property (strong, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property (strong, nonatomic) NSArray *initialPhotosAssetDetails; // @synthesize initialPhotosAssetDetails=_initialPhotosAssetDetails;
@property (nonatomic) BOOL isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property (strong, nonatomic) NSArray *linkPresentationDataForActivityItems; // @synthesize linkPresentationDataForActivityItems=_linkPresentationDataForActivityItems;
@property (nonatomic) BOOL linkedBeforeYukon; // @synthesize linkedBeforeYukon=_linkedBeforeYukon;
@property (strong, nonatomic) NSArray *preferredLocalizations; // @synthesize preferredLocalizations=_preferredLocalizations;
@property (nonatomic) double preferredWidth; // @synthesize preferredWidth=_preferredWidth;
@property (strong, nonatomic) UISUISecurityContext *securityScopedURLsForMatching; // @synthesize securityScopedURLsForMatching=_securityScopedURLsForMatching;
@property (strong, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) long long sharingStyle; // @synthesize sharingStyle=_sharingStyle;
@property (nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity; // @synthesize shouldExcludeiCloudAddToDriveActivity=_shouldExcludeiCloudAddToDriveActivity;
@property (nonatomic) BOOL shouldExcludeiCloudSharingActivity; // @synthesize shouldExcludeiCloudSharingActivity=_shouldExcludeiCloudSharingActivity;
@property (nonatomic) BOOL shouldMatchOnlyUserElectedExtensions; // @synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions;
@property (nonatomic) BOOL shouldSkipPeopleSuggestions; // @synthesize shouldSkipPeopleSuggestions=_shouldSkipPeopleSuggestions;
@property (strong, nonatomic) NSArray *typeIdentifiersForShortcutsMatching; // @synthesize typeIdentifiersForShortcutsMatching=_typeIdentifiersForShortcutsMatching;
@property (strong, nonatomic) NSArray *urlsBeingShared; // @synthesize urlsBeingShared=_urlsBeingShared;
@property (nonatomic) BOOL whitelistActionActivitiesOnly; // @synthesize whitelistActionActivitiesOnly=_whitelistActionActivitiesOnly;

+ (void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_contextForMatchingActivityItems:(id)arg1 activityItemValues:(id)arg2 activityItemValueClasses:(id)arg3;
- (id)availableActivityItemValueClasses;
- (id)contextForMatchingByActivityItemValueClasses;
- (id)contextForMatchingByActivityItems:(id)arg1 itemValues:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

