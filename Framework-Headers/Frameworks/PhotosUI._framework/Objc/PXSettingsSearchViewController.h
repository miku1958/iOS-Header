//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <PhotosUICore/PXInfoProvider-Protocol.h>
#import <PhotosUICore/PXInfoUpdaterObserver-Protocol.h>
#import <PhotosUICore/UISearchBarDelegate-Protocol.h>

@class NSArray, NSProgress, NSString, PTUISettingsController, PXInfoUpdater, PXSettingsIndex, PXSettingsIndexer, UISearchBar;

@interface PXSettingsSearchViewController : UITableViewController <UISearchBarDelegate, PXInfoProvider, PXInfoUpdaterObserver>
{
    PTUISettingsController *_settingsController;
    UISearchBar *_searchBar;
    PXSettingsIndexer *_indexer;
    NSProgress *_indexingProgress;
    PXSettingsIndex *_index;
    PXInfoUpdater *_resultsInfoUpdater;
    NSArray *_searchResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXSettingsIndex *index; // @synthesize index=_index;
@property (strong, nonatomic) PXSettingsIndexer *indexer; // @synthesize indexer=_indexer;
@property (strong, nonatomic) NSProgress *indexingProgress; // @synthesize indexingProgress=_indexingProgress;
@property (readonly, nonatomic) PXInfoUpdater *resultsInfoUpdater; // @synthesize resultsInfoUpdater=_resultsInfoUpdater;
@property (readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property (readonly, nonatomic) PTUISettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancelItem:(id)arg1;
- (void)_indexerDidComplete;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSettingsController:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (long long)priorityForInfoRequestOfKind:(id)arg1;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

