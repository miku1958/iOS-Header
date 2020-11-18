//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/UITableViewDelegate-Protocol.h>
#import <VideosUI/VUIDownloadDataSourceDelegate-Protocol.h>
#import <VideosUI/VUIDownloadEntityTableViewCellDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, UIAlertController, UIBarButtonItem, UITableView, UITableViewDiffableDataSource, VUIDownloadDataSource, VUIDownloadEntityTableViewCell, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUIDownloadTableViewController : UIViewController <UITableViewDelegate, VUIDownloadDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate>
{
    UITableView *_downloadEntitiesTableView;
    VUIDownloadDataSource *_downloadDataSource;
    UITableViewDiffableDataSource *_diffableDataSource;
    NSMutableArray *_downloadEntities;
    VUIDownloadEntityTableViewCell *_sizingCell;
    UIBarButtonItem *_rightBarButtonItem;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_backBarButtonItem;
    UIAlertController *_alertController;
    NSDictionary *_identifierToDownloadEntityDictionary;
    NSMutableArray *_assetControllersToRemove;
    VUIViewControllerContentPresenter *_contentPresenter;
}

@property (strong, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (strong, nonatomic) NSMutableArray *assetControllersToRemove; // @synthesize assetControllersToRemove=_assetControllersToRemove;
@property (strong, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property (strong, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITableViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property (strong, nonatomic) VUIDownloadDataSource *downloadDataSource; // @synthesize downloadDataSource=_downloadDataSource;
@property (strong, nonatomic) NSMutableArray *downloadEntities; // @synthesize downloadEntities=_downloadEntities;
@property (strong, nonatomic) UITableView *downloadEntitiesTableView; // @synthesize downloadEntitiesTableView=_downloadEntitiesTableView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *identifierToDownloadEntityDictionary; // @synthesize identifierToDownloadEntityDictionary=_identifierToDownloadEntityDictionary;
@property (strong, nonatomic) UIBarButtonItem *leftBarButtonItem; // @synthesize leftBarButtonItem=_leftBarButtonItem;
@property (strong, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property (strong, nonatomic) VUIDownloadEntityTableViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (id)_configureAlertControllerForIndexPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_configureRenewAlertControllerForIndexPath:(id)arg1 forPreferredStyle:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (id)_createIdentifierToDownloadEntityDictionary;
- (void)_deleteDownloadEntities:(id)arg1;
- (void)_deleteMediaEntitiesInDownloadEntities:(id)arg1;
- (BOOL)_downloadEntityShouldShowRenewOption:(id)arg1;
- (void)_editToggled;
- (void)_exitEditingMode;
- (id)_identifiersForDownloadEntities;
- (void)downloadCellDidRequestCancelDownload:(id)arg1;
- (void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)loadView;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
