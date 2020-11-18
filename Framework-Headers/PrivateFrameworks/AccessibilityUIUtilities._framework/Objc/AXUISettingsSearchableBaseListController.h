//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

#import <AccessibilityUIUtilities/UISearchBarDelegate-Protocol.h>
#import <AccessibilityUIUtilities/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString, UISearchController;

@interface AXUISettingsSearchableBaseListController : AXUISettingsBaseListController <UISearchResultsUpdating, UISearchBarDelegate>
{
    BOOL _needsSpecifierRefresh;
    NSString *_cachedSearchTextWhileDeactivating;
    UISearchController *_searchController;
    NSString *_searchText;
    NSArray *_allSpecifiers;
}

@property (strong, nonatomic) NSArray *allSpecifiers; // @synthesize allSpecifiers=_allSpecifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property (strong, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadAllSpecifiersIfNeeded;
- (BOOL)_specifierIsGroupSpecifier:(id)arg1;
- (void)deactivateAndPersistSearchText;
- (id)makeSpecifiers;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)setNeedsSpecifierRefresh;
- (BOOL)shouldShowSpecifier:(id)arg1 withSearchText:(id)arg2;
- (id)specifiers;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;

@end
