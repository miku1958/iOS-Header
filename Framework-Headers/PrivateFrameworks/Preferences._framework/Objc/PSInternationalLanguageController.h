//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSViewController.h>

#import <Preferences/UISearchBarDelegate-Protocol.h>
#import <Preferences/UITableViewDataSource-Protocol.h>
#import <Preferences/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PSLanguage, PSLanguageSelector, PSLocaleSelector, UISearchBar, UITableView, UIView;

@interface PSInternationalLanguageController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>
{
    UISearchBar *_searchBar;
    UITableView *_tableView;
    UIView *_contentView;
    BOOL _searchIsActive;
    PSLanguageSelector *_languageSelector;
    PSLocaleSelector *_localeSelector;
    PSLanguage *_checkedLanguage;
    NSArray *_deviceLanguages;
    NSArray *_filteredDeviceLanguages;
    NSString *_savedSearchTerm;
}

@property (strong, nonatomic) PSLanguage *checkedLanguage; // @synthesize checkedLanguage=_checkedLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *deviceLanguages; // @synthesize deviceLanguages=_deviceLanguages;
@property (strong, nonatomic) NSArray *filteredDeviceLanguages; // @synthesize filteredDeviceLanguages=_filteredDeviceLanguages;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PSLanguageSelector *languageSelector; // @synthesize languageSelector=_languageSelector;
@property (strong, nonatomic) PSLocaleSelector *localeSelector; // @synthesize localeSelector=_localeSelector;
@property (strong, nonatomic) NSString *savedSearchTerm; // @synthesize savedSearchTerm=_savedSearchTerm;
@property (nonatomic) BOOL searchIsActive; // @synthesize searchIsActive=_searchIsActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mainContentView;
- (void)cancelButtonTapped;
- (void)dealloc;
- (void)doneButtonTapped;
- (id)filteredLanguagesForLanguageList:(id)arg1 searchString:(id)arg2;
- (void)generateLanguageCells;
- (void)loadData;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDataAndScrollToCheckedLanguageWithAnimation:(BOOL)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateNavigationItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

