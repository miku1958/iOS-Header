//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconObserver-Protocol.h>

@class NSArray, NSSet, NSString, SBHIconModel, SBHLibraryCategoriesRootFolder, SBHLibraryCategoryMap;
@protocol SBHLibraryCategoriesFolderDataSourceDelegate;

@interface SBHLibraryCategoriesFolderDataSource : NSObject <SBIconObserver>
{
    NSSet *_mappedIcons;
    SBHLibraryCategoryMap *_categoryMap;
    SBHLibraryCategoriesRootFolder *_categoriesFolder;
    SBHIconModel *_iconModel;
    id<SBHLibraryCategoriesFolderDataSourceDelegate> _delegate;
}

@property (readonly, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder; // @synthesize categoriesFolder=_categoriesFolder;
@property (readonly, nonatomic) NSArray *categoryIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBHLibraryCategoriesFolderDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_noteDidAddIcon:(id)arg1;
- (void)_noteDidReloadIcons:(id)arg1;
- (void)_noteDidReplaceIcon:(id)arg1;
- (void)_noteIconVisibilityDidChange:(id)arg1;
- (void)_noteWillLayoutIconState:(id)arg1;
- (void)_noteWillRemoveIcon:(id)arg1;
- (void)_regenerateCategoriesFolder;
- (id)categoryForIdentifier:(id)arg1;
- (BOOL)containsIcon:(id)arg1;
- (void)iconAccessoriesDidUpdate:(id)arg1;
- (id)init;
- (id)initWithCategoriesFolder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDataSource:(id)arg1;
- (id)reloadData;
- (id)reloadDataSourceUsingIcons:(id)arg1 categoryMap:(id)arg2;
- (id)reloadDataWithCategoryMap:(id)arg1;

@end
