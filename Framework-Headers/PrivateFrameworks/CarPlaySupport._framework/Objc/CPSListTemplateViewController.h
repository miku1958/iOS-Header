//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

#import <CarPlaySupport/CPListTemplateProviding-Protocol.h>
#import <CarPlaySupport/CPUINowPlayingObserving-Protocol.h>
#import <CarPlaySupport/UITableViewDelegate-Protocol.h>

@class CPListTemplate, CPSEmptyView, CPSSectionedDataSource, CPSTableView, CPUINowPlayingManager, NSString, NSTimer, NSUUID;

@interface CPSListTemplateViewController : CPSBaseTemplateViewController <UITableViewDelegate, CPUINowPlayingObserving, CPListTemplateProviding>
{
    CPSSectionedDataSource *_dataSource;
    NSUUID *_currentSpinningIdentifier;
    NSUUID *_nextSpinningIdentifier;
    unsigned long long _spinnerState;
    NSTimer *_spinnerStartTimer;
    NSTimer *_spinnerTimeoutTimer;
    CPSTableView *_tableView;
    CPUINowPlayingManager *_nowPlayingManager;
    CPSEmptyView *_emptyView;
    NSUUID *_lastFocusedItem;
}

@property (copy, nonatomic) NSUUID *currentSpinningIdentifier; // @synthesize currentSpinningIdentifier=_currentSpinningIdentifier;
@property (strong, nonatomic) CPSSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CPSEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSUUID *lastFocusedItem; // @synthesize lastFocusedItem=_lastFocusedItem;
@property (readonly, nonatomic) CPListTemplate *listTemplate;
@property (copy, nonatomic) NSUUID *nextSpinningIdentifier; // @synthesize nextSpinningIdentifier=_nextSpinningIdentifier;
@property (strong, nonatomic) CPUINowPlayingManager *nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property (strong, nonatomic) NSTimer *spinnerStartTimer; // @synthesize spinnerStartTimer=_spinnerStartTimer;
@property (nonatomic) unsigned long long spinnerState; // @synthesize spinnerState=_spinnerState;
@property (strong, nonatomic) NSTimer *spinnerTimeoutTimer; // @synthesize spinnerTimeoutTimer=_spinnerTimeoutTimer;
@property (readonly) Class superclass;
@property (strong, nonatomic) CPSTableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)_activateSiriForMessageItem:(id)arg1;
- (void)_addSpinnerToIdentifier:(id)arg1;
- (void)_cancelScheduledLoadingSpinner;
- (void)_cellSelectionCompleted:(id)arg1;
- (long long)_playingIndicatorStateForSnapshot:(id)arg1;
- (void)_scheduleLoadingSpinnerForIdentifier:(id)arg1;
- (void)_scrollViewAccessoryInsetsDidChange:(id)arg1;
- (BOOL)_shouldRetainFocusOnWillAppear;
- (void)_startSpinnerTimerFired:(id)arg1 identifier:(id)arg2;
- (void)_timeoutSpinnerFired:(id)arg1 identifier:(id)arg2;
- (void)_updateEmptyView;
- (void)_updateFocusForReload;
- (void)_viewDidLoad;
- (BOOL)_wantsNowPlayingButton;
- (id)initWithListTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;
- (void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)reloadItems:(id)arg1;
- (BOOL)restoresFocusAfterTransition;
- (void)setButton:(id)arg1 enabled:(BOOL)arg2;
- (void)setButton:(id)arg1 hidden:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateSections:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
