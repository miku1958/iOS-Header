//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/MPMediaPickerControllerDelegate-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PUSlideshowMediaItem, PUSlideshowSettingsViewControllerSpec, UITableView;
@protocol PUSlideshowMusicDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowMusicViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PUViewControllerSpecChangeObserver, MPMediaPickerControllerDelegate>
{
    NSArray *_mediaItems;
    UITableView *_tableView;
    PUSlideshowSettingsViewControllerSpec *_spec;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
    BOOL __needsUpdateSpec;
    BOOL __needsUpdateBackgroundView;
    BOOL __needsUpdateTableView;
    PUSlideshowMediaItem *_currentMediaItem;
    id<PUSlideshowMusicDelegate> _delegate;
}

@property (nonatomic, setter=_setNeedsUpdateBackgroundView:) BOOL _needsUpdateBackgroundView; // @synthesize _needsUpdateBackgroundView=__needsUpdateBackgroundView;
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property (strong, nonatomic) PUSlideshowMediaItem *currentMediaItem; // @synthesize currentMediaItem=_currentMediaItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUSlideshowMusicDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFinish;
- (void)_didPickMediaItem:(id)arg1;
- (void)_invalidateBackgroundView;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateBackgroundViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)dealloc;
- (id)init;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)pu_wantsNavigationBarVisible;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

