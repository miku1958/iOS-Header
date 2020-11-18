//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUSlideshowMusicDelegate-Protocol.h>
#import <PhotosUI/PUSlideshowSettingsViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUSlideshowSpeedCellDelegate-Protocol.h>
#import <PhotosUI/PUSlideshowThemeDelegate-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUI/UITableViewDataSource-Protocol.h>
#import <PhotosUI/UITableViewDelegate-Protocol.h>

@class NSString, OKProducerPreset, PUSlideshowMediaItem, PUSlideshowSession, PUSlideshowSettingsViewControllerSpec, PUSlideshowSettingsViewModel, UITableView, _UIBackdropView;
@protocol PUSlideshowSettingsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUSlideshowSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate, PUSlideshowThemeDelegate, PUSlideshowSettingsViewModelChangeObserver, PUViewControllerSpecChangeObserver, PUSlideshowSpeedCellDelegate, PUSlideshowMusicDelegate>
{
    PUSlideshowSession *_session;
    PUSlideshowSettingsViewModel *_settingsViewModel;
    PUSlideshowSettingsViewControllerSpec *_spec;
    UITableView *_tableView;
    _UIBackdropView *_backdropView;
    BOOL _shouldHideTableViewWhenViewWillDisappear;
    BOOL __needsUpdateSpec;
    BOOL __needsUpdateTableView;
    BOOL __needsUpdateNavigationBar;
    BOOL __needsUpdatePreset;
    BOOL __needsUpdateMediaItem;
    BOOL __needsUpdateMusicOn;
    id<PUSlideshowSettingsViewControllerDelegate> _delegate;
    OKProducerPreset *__pendingPreset;
    PUSlideshowMediaItem *__pendingMediaItem;
}

@property (nonatomic, setter=_setNeedsUpdateMediaItem:) BOOL _needsUpdateMediaItem; // @synthesize _needsUpdateMediaItem=__needsUpdateMediaItem;
@property (nonatomic, setter=_setNeedsUpdateMusicOn:) BOOL _needsUpdateMusicOn; // @synthesize _needsUpdateMusicOn=__needsUpdateMusicOn;
@property (nonatomic, setter=_setNeedsUpdateNavigationBar:) BOOL _needsUpdateNavigationBar; // @synthesize _needsUpdateNavigationBar=__needsUpdateNavigationBar;
@property (nonatomic, setter=_setNeedsUpdatePreset:) BOOL _needsUpdatePreset; // @synthesize _needsUpdatePreset=__needsUpdatePreset;
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // @synthesize _needsUpdateSpec=__needsUpdateSpec;
@property (nonatomic, setter=_setNeedsUpdateTableView:) BOOL _needsUpdateTableView; // @synthesize _needsUpdateTableView=__needsUpdateTableView;
@property (strong, nonatomic, setter=_setPendingMediaItem:) PUSlideshowMediaItem *_pendingMediaItem; // @synthesize _pendingMediaItem=__pendingMediaItem;
@property (strong, nonatomic, setter=_setPendingPreset:) OKProducerPreset *_pendingPreset; // @synthesize _pendingPreset=__pendingPreset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUSlideshowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)PUSlideshowSpeedCell:(id)arg1 stepDurationDidChange:(double)arg2;
- (void)_didTapDoneButton:(id)arg1;
- (void)_invalidateMediaItem;
- (void)_invalidateMusicOn;
- (void)_invalidateNavigationBar;
- (void)_invalidatePreset;
- (void)_invalidateSpec;
- (void)_invalidateTableView;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_synchronizedChangedSettings;
- (void)_toggleMusic:(id)arg1;
- (void)_toggleRepeat:(id)arg1;
- (void)_updateIfNeeded;
- (void)_updateMediaItemIfNeeded;
- (void)_updateMusicOnIfNeeded;
- (void)_updateNavigationBarIfNeeded;
- (void)_updatePresetIfNeeded;
- (void)_updateSpecIfNeeded;
- (void)_updateTableViewIfNeeded;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (void)musicPicker:(id)arg1 didPickMediaItem:(id)arg2;
- (void)musicPickerDidFinish:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)themePicker:(id)arg1 didPickPreset:(id)arg2;
- (void)themePickerDidFinish:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

