//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSFastEnumeration-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>
#import <SpringBoardHome/SBLeafIconDataSource-Protocol.h>

@class NSArray, NSHashTable, NSString, SBHLibraryAdditionalItemsIndicatorIcon, SBHLibraryCategoryFolder, SBHLibraryCategoryIdentifier;
@protocol SBIconDelegate;

@interface SBHLibraryCategory : NSObject <SBLeafIconDataSource, SBIconObserver, NSFastEnumeration>
{
    NSHashTable *_observers;
    long long _aggregrateIconLabelAccessoryType;
    SBHLibraryCategoryFolder *_compactPodFolder;
    SBHLibraryCategoryFolder *_compactPodAdditionalItemsFolder;
    SBHLibraryCategoryFolder *_expandedPodFolder;
    SBHLibraryAdditionalItemsIndicatorIcon *_additionalItemsIndicatorIcon;
    SBHLibraryCategoryIdentifier *_categoryIdentifier;
    long long _overflowBehavior;
    id<SBIconDelegate> _iconDelegate;
    NSArray *_icons;
}

@property (readonly, nonatomic) SBHLibraryAdditionalItemsIndicatorIcon *additionalItemsIndicatorIcon; // @synthesize additionalItemsIndicatorIcon=_additionalItemsIndicatorIcon;
@property (copy, nonatomic) SBHLibraryCategoryIdentifier *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodAdditionalItemsFolder; // @synthesize compactPodAdditionalItemsFolder=_compactPodAdditionalItemsFolder;
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodFolder; // @synthesize compactPodFolder=_compactPodFolder;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *expandedPodFolder; // @synthesize expandedPodFolder=_expandedPodFolder;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<SBIconDelegate> iconDelegate; // @synthesize iconDelegate=_iconDelegate;
@property (readonly, copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property (readonly, copy, nonatomic) NSString *leafIdentifier;
@property (nonatomic) long long overflowBehavior; // @synthesize overflowBehavior=_overflowBehavior;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_buildDisplayedIconsForFolder:(id)arg1 icons:(id)arg2;
- (void)_localizedDisplayNameChangedTo:(id)arg1;
- (void)_noteCategoryDidUpdate;
- (void)_noteCategoryWillUpdate;
- (void)_noteFolderDidUpdateIcons:(id)arg1;
- (void)_noteFolderWillUpdateIcons:(id)arg1;
- (void)_refreshAggregateIconLabelAccessoryType;
- (void)addObserver:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (BOOL)iconSupportsUninstall:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCategory:(id)arg1;
- (long long)labelAccessoryTypeForIcon:(id)arg1;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)removeObserver:(id)arg1;
- (BOOL)updateCategoryWithIcons:(id)arg1;

@end

