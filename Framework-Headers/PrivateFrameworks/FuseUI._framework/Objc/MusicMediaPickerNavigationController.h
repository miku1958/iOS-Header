//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/MPUNavigationController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicSearchBarDelegate-Protocol.h>
#import <FuseUI/MusicSearchViewControllerMediaPickerDelegate-Protocol.h>

@class MusicClientContext, NSArray, NSMutableArray, NSString, SKUIClientContext, UIBarButtonItem;
@protocol MusicMediaPickerDelegate;

@interface MusicMediaPickerNavigationController : MPUNavigationController <MusicSearchBarDelegate, MusicSearchViewControllerMediaPickerDelegate, MusicClientContextConsuming>
{
    unsigned long long _pickedEntitiesCount;
    NSMutableArray *_pickedEntities;
    UIBarButtonItem *_rightBarButtonItem;
    NSMutableArray *_storeItemIDs;
    BOOL _allowsMultipleSelection;
    BOOL _includeStoreItemsInSearch;
    BOOL _allowsCollectionsInSelectedEntities;
    BOOL _showsOnlyStoreItems;
    MusicClientContext *_clientContext;
    id<MusicMediaPickerDelegate> _mediaPickerDelegate;
    NSString *_prompt;
    long long _state;
    NSMutableArray *_selectedEntitiesForActiveSession;
}

@property (nonatomic) BOOL allowsCollectionsInSelectedEntities; // @synthesize allowsCollectionsInSelectedEntities=_allowsCollectionsInSelectedEntities;
@property (nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property (strong, nonatomic) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL includeStoreItemsInSearch; // @synthesize includeStoreItemsInSearch=_includeStoreItemsInSearch;
@property (weak, nonatomic) id<MusicMediaPickerDelegate> mediaPickerDelegate; // @synthesize mediaPickerDelegate=_mediaPickerDelegate;
@property (readonly, nonatomic) NSArray *pickedEntities; // @synthesize pickedEntities=_pickedEntities;
@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (readonly, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (strong, nonatomic) NSMutableArray *selectedEntitiesForActiveSession; // @synthesize selectedEntitiesForActiveSession=_selectedEntitiesForActiveSession;
@property (nonatomic) BOOL showsOnlyStoreItems; // @synthesize showsOnlyStoreItems=_showsOnlyStoreItems;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (id)navigationController;
+ (id)selectedItemsForActiveSession;
- (void).cxx_destruct;
- (id)_allPlayableChildrenMetadataObjectsForMetadata:(id)arg1;
- (void)_configureNavigationBar;
- (void)_insertSearchBarIntoTableView:(id)arg1;
- (BOOL)_isMetadataAddable:(id)arg1;
- (void)_reloadDataInViewController:(id)arg1;
- (void)_selectItem:(id)arg1;
- (void)_stylizeSearchBar:(id)arg1;
- (void)_updatePrompt;
- (void)_updateRightBarButtonItem;
- (void)_updateTitle;
- (void)finish;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)musicSearchViewController:(id)arg1 didSelectStoreItemWithID:(id)arg2;
- (void)musicSearchViewControllerDidFinish:(id)arg1 withSearchBar:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)reset;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)selectAllMediaItemsInCollection:(id)arg1 fromViewController:(id)arg2;
- (void)selectMediaItem:(id)arg1 fromViewController:(id)arg2;
- (void)viewDidLoad;

@end

