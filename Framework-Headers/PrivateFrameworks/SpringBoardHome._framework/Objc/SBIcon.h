//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>
#import <SpringBoardHome/SBHIconCollationSupport-Protocol.h>
#import <SpringBoardHome/SBHUniquelyIdentifiable-Protocol.h>
#import <SpringBoardHome/SBIconIndexNode-Protocol.h>

@class NSArray, NSHashTable, NSString, NSUserActivity;
@protocol SBIconDelegate;

@interface SBIcon : NSObject <SBHIconCollationSupport, SBHUniquelyIdentifiable, SBIconIndexNode, BSDescriptionProviding, NSCopying>
{
    id _badgeNumberOrString;
    NSHashTable *_observers;
    BOOL _uninstalled;
    id _overrideBadgeNumberOrString;
    id<SBIconDelegate> _delegate;
    unsigned long long _gridSizeClass;
}

@property (readonly, copy, nonatomic) NSString *automationID;
@property (readonly, nonatomic) id badgeNumberOrString;
@property (readonly, nonatomic) long long badgeValue;
@property (readonly, nonatomic) BOOL canBeAddedToMultiItemDrag;
@property (readonly, nonatomic) BOOL canBeAddedToSubfolder;
@property (readonly, nonatomic) BOOL canBeReceivedByIcon;
@property (readonly, nonatomic) BOOL canReceiveGrabbedIcon;
@property (readonly, nonatomic) BOOL canTightenLabel;
@property (readonly, nonatomic) BOOL canTruncateLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBIconDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSUserActivity *draggingUserActivity;
@property (readonly, copy, nonatomic) NSString *folderFallbackTitle;
@property (readonly, copy, nonatomic) NSArray *folderTitleOptions;
@property (nonatomic) unsigned long long gridSizeClass; // @synthesize gridSizeClass=_gridSizeClass;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *iTunesCategoriesOrderedByRelevancy;
@property (readonly, nonatomic) long long labelAccessoryType;
@property (readonly, nonatomic, getter=isLaunchDisabledForObscuredReason) BOOL launchDisabledForObscuredReason;
@property (readonly, nonatomic, getter=isLaunchEnabled) BOOL launchEnabled;
@property (copy, nonatomic) id overrideBadgeNumberOrString; // @synthesize overrideBadgeNumberOrString=_overrideBadgeNumberOrString;
@property (readonly, nonatomic, getter=isProgressPaused) BOOL progressPaused;
@property (readonly, nonatomic) double progressPercent;
@property (readonly, nonatomic) long long progressState;
@property (readonly, nonatomic) BOOL shouldAnimateProgress;
@property (readonly, nonatomic) BOOL shouldWarmUp;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long supportedGridSizeClasses;
@property (readonly, nonatomic) BOOL supportsRasterization;
@property (readonly, nonatomic) BOOL supportsStackConfiguration;
@property (readonly, copy, nonatomic) NSArray *tags;
@property (readonly, nonatomic, getter=isTimedOut) BOOL timedOut;
@property (readonly, copy, nonatomic) NSString *uninstallAlertBody;
@property (readonly, copy, nonatomic) NSString *uninstallAlertCancelTitle;
@property (readonly, copy, nonatomic) NSString *uninstallAlertConfirmTitle;
@property (readonly, copy, nonatomic) NSString *uninstallAlertTitle;
@property (readonly, nonatomic, getter=isUninstallSupported) BOOL uninstallSupported;
@property (readonly, nonatomic, getter=isUninstalled) BOOL uninstalled; // @synthesize uninstalled=_uninstalled;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;

+ (BOOL)canGenerateIconsInBackground;
+ (Class)downloadingIconClass;
+ (BOOL)forcesBackgroundIconGeneration;
+ (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
+ (BOOL)hasIconImage;
+ (id)iconImageFromUnmaskedImage:(id)arg1 info:(struct SBIconImageInfo)arg2;
- (void).cxx_destruct;
- (void)_notifyAccessoriesDidUpdate;
- (void)_notifyImageDidUpdate;
- (void)_notifyLaunchEnabledDidChange;
- (id)_sbhIconLibraryCollationString;
- (id)_sbhIconLibraryOverrideCollationSectionTitle;
- (id)accessoryTextForLocation:(id)arg1;
- (long long)accessoryTypeForLocation:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)applicationBundleID;
- (void)archivableStateDidChange;
- (BOOL)assumesAppInstallFinishedForFolderProgress;
- (void)completeUninstall;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionForLocation:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayNameForLocation:(id)arg1;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1;
- (id)downloadingIconDataSource;
- (void)enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (id)folder;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (BOOL)hasObserver:(id)arg1;
- (Class)iconImageViewClassForLocation:(id)arg1;
- (id)iconImageWithInfo:(struct SBIconImageInfo)arg1;
- (id)iconLibraryQueryingAlphaSortString;
- (id)iconLibraryQueryingFilterStrings;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (BOOL)isAdditionalItemsIndicatorIcon;
- (BOOL)isCategoryIcon;
- (BOOL)isDownloadingIcon;
- (BOOL)isFolderIcon;
- (BOOL)isGrabbedIconPlaceholder;
- (BOOL)isGridSizeClassAllowed:(unsigned long long)arg1;
- (BOOL)isLeafIcon;
- (BOOL)isPlaceholder;
- (BOOL)isWidgetIcon;
- (BOOL)isWidgetStackIcon;
- (void)launchFromLocation:(id)arg1 context:(id)arg2;
- (id)leafIdentifier;
- (void)localeChanged;
- (long long)localizedCompareDisplayNames:(id)arg1;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (void)noteBadgeDidChange;
- (id)parentFolderIcon;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2;
- (void)possibleUserTapDidCancel;
- (void)reloadIconImage;
- (void)removeNodeObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)representedSceneIdentifier;
- (void)setBadge:(id)arg1;
- (void)setUninstalled;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;

@end
