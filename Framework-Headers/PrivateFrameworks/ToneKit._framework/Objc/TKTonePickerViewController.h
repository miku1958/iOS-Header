//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <ToneKit/MPMediaPickerControllerDelegate-Protocol.h>
#import <ToneKit/TKTonePickerControllerDelegate-Protocol.h>
#import <ToneKit/TKTonePickerControllerDelegateInternal-Protocol.h>
#import <ToneKit/TKTonePickerTableViewControllerHelper-Protocol.h>
#import <ToneKit/TKTonePickerTableViewLayoutMarginsObserver-Protocol.h>
#import <ToneKit/TKTonePickerTableViewSeparatorObserver-Protocol.h>
#import <ToneKit/TKVibrationPickerViewControllerDelegate-Protocol.h>
#import <ToneKit/TKVibrationPickerViewControllerDismissalDelegate-Protocol.h>

@class MPMediaPickerController, MPMusicPlayerController, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TKToneClassicsTableViewController, TKTonePickerController, TKTonePickerTableViewCellLayoutManager, TKVibrationPickerViewController, UIBarButtonItem, UIImage;
@protocol TKTonePickerStyleProvider, TKTonePickerViewControllerDelegate;

@interface TKTonePickerViewController : UITableViewController <TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKTonePickerTableViewControllerHelper, TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, MPMediaPickerControllerDelegate>
{
    TKTonePickerController *_tonePickerController;
    UIImage *_checkmarkImage;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManagerForIndentedRows;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManagerForUnindentedRows;
    BOOL _showsToneStoreWasSetExplicitly;
    BOOL _needsScrollPositionReset;
    UIBarButtonItem *_storeBarButtonItem;
    NSMutableDictionary *_toneSectionHeaderViews;
    MPMediaPickerController *_mediaPickerController;
    NSMutableArray *_mediaItems;
    MPMusicPlayerController *_musicPlayer;
    TKToneClassicsTableViewController *_toneClassicsTableViewController;
    TKVibrationPickerViewController *_vibrationPickerViewController;
    BOOL _isHandlingSwitchControlValueChanged;
    NSMutableArray *_switchControlsBeingObserved;
    BOOL _showsToneStore;
    BOOL _showsIgnoreMute;
    BOOL _showsMedia;
    id<TKTonePickerViewControllerDelegate> _delegate;
    id<TKTonePickerStyleProvider> _styleProvider;
}

@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) long long alertType;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultToneIdentifier;
@property (weak, nonatomic) id<TKTonePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreMute;
@property (nonatomic, getter=isMediaAtTop) BOOL mediaAtTop;
@property (nonatomic, getter=isNoneAtTop) BOOL noneAtTop;
@property (copy, nonatomic) NSString *noneString;
@property (copy, nonatomic) NSNumber *selectedMediaIdentifier;
@property (copy, nonatomic) NSString *selectedToneIdentifier;
@property (copy, nonatomic) NSString *selectedVibrationIdentifier;
@property (nonatomic) BOOL showsDefault;
@property (nonatomic) BOOL showsIgnoreMute; // @synthesize showsIgnoreMute=_showsIgnoreMute;
@property (nonatomic) BOOL showsMedia; // @synthesize showsMedia=_showsMedia;
@property (nonatomic) BOOL showsNone;
@property (nonatomic) BOOL showsNothingSelected;
@property (nonatomic) BOOL showsStoreButtonInNavigationBar;
@property (nonatomic) BOOL showsToneStore; // @synthesize showsToneStore=_showsToneStore;
@property (nonatomic) BOOL showsVibrations;
@property (strong, nonatomic) id<TKTonePickerStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topic;

- (void).cxx_destruct;
- (unsigned long long)_addMediaIdentifierToList:(id)arg1;
- (void)_configureTextColorOfLabelInCell:(id)arg1 shouldTintText:(BOOL)arg2 checked:(BOOL)arg3;
- (id)_customHeaderViewForHeaderInSection:(long long)arg1;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)_handleMediaLibraryDidChangeNotification;
- (void)_handleSwitchControlValueChanged:(id)arg1;
- (id)_mediaItemForIdentifier:(id)arg1;
- (double)_minimumTextIndentationForTableView:(id)arg1 withCheckmarkImage:(id)arg2;
- (id)_musicPlayer;
- (id)_pickerRowItemForIndexPath:(id)arg1;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (void)_reloadData;
- (void)_resetScrollingPosition;
- (BOOL)_shouldShowCheckmarkOnTrailingEdge;
- (void)_stopMediaItemPlaybackWithFadeOutDuration:(double)arg1;
- (void)_togglePlayMediaItemWithIdentifier:(id)arg1;
- (void)_updateCell:(id)arg1 withDownloadProgress:(float)arg2 animated:(BOOL)arg3;
- (void)_updateMinimumTextIndentation;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
- (void)addMediaItems:(id)arg1;
- (void)applicationWillSuspend;
- (void)dealloc;
- (id)initWithAlertType:(long long)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)loadView;
- (void)loadViewForTonePickerTableViewController:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeMediaItems:(id)arg1;
- (id)selectedIdentifier:(BOOL *)arg1;
- (id)selectedTonePickerItem;
- (void)separatorColorDidChangeInTonePickerTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForPickerRowItem:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 forPickerRowItem:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 updateCell:(id)arg2 withSeparatorForPickerRowItem:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forPickerRowItem:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tonePickerController:(id)arg1 didDeletePickerRowItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tonePickerController:(id)arg1 didInsertPickerRowItems:(id)arg2 andTonePickerSectionItems:(id)arg3;
- (void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(BOOL)arg3;
- (void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(BOOL)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateDownloadProgressOfTonePickerItem:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateFooterText:(id)arg2 ofTonePickerSectionItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateIgnoreMute:(BOOL)arg2 forTonePickerItem:(id)arg3 atIndexPath:(id)arg4;
- (void)tonePickerController:(id)arg1 didUpdateTonePickerItem:(id)arg2;
- (id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
- (void)tonePickerController:(id)arg1 requestsPresentingAlertWithTitle:(id)arg2 message:(id)arg3;
- (void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
- (void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
- (void)tonePickerController:(id)arg1 willBeginPlaybackOfToneWithIdentifier:(id)arg2;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
- (BOOL)tonePickerControllerShouldShowMedia:(id)arg1;
- (void)tonePickerTableViewControllerWillBeDeallocated:(id)arg1;
- (void)tonePickerTableViewWillDisappear:(BOOL)arg1;
- (void)updateCell:(id)arg1 withCheckedStatus:(BOOL)arg2 forTonePickerItem:(id)arg3;
- (void)updateCell:(id)arg1 withDetailText:(id)arg2;
- (void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)arg1;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)vibrationPickerViewControllerWasDismissed:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

