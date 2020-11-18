//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MusicCarDisplayUI/MCDErrorViewDelegate-Protocol.h>
#import <MusicCarDisplayUI/MCDPCContainerDelegate-Protocol.h>
#import <MusicCarDisplayUI/UIGestureRecognizerDelegate-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDataSource-Protocol.h>
#import <MusicCarDisplayUI/UITableViewDelegate-Protocol.h>

@class AVExternalDevice, MCDNowPlayingButton, MCDPCContainer, MPWeakTimer, NSIndexPath, NSObject, NSString, UIActivityIndicatorView, UITableView, UIView, _MCDBrowsableContentTableViewPreloader, _UIFilteredDataSource;
@protocol OS_dispatch_queue;

@interface MCDBrowsableContentTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate, MCDErrorViewDelegate>
{
    UITableView *_tableView;
    MCDNowPlayingButton *_nowPlayingButton;
    MCDPCContainer *_container;
    long long _count;
    NSIndexPath *_selectedNextIndexPath;
    UIActivityIndicatorView *_activityIndicator;
    _UIFilteredDataSource *_dataSource;
    NSIndexPath *_reselectIndexPath;
    MPWeakTimer *_loadingTimer;
    MPWeakTimer *_delayTimer;
    UIView *_MCD_tableView;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MCDBrowsableContentTableViewPreloader *_selectionPreloader;
    AVExternalDevice *_externalDevice;
    BOOL _limited;
    BOOL _hasCarScreen;
    BOOL _hasNoBrowsableContent;
    BOOL _didPushToNowPlayingAtLaunch;
    BOOL _hasTabbedBrowsing;
    BOOL _visible;
    NSIndexPath *_selectedIndexPath;
    UIView *_placeholderView;
}

@property (readonly, nonatomic) MCDPCContainer *container; // @synthesize container=_container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property (strong, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

- (void).cxx_destruct;
- (void)_clearLoadingActivity;
- (void)_clearTableViewSelectionAnimated:(BOOL)arg1;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_displayLoadingActivity;
- (void)_limitedUIChanged:(id)arg1;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_nowPlayingDidChange:(id)arg1;
- (void)_replacePlaceholderViewWithView:(id)arg1;
- (void)_showLoadingScreen;
- (void)_showTimeoutScreen;
- (void)_updateNowPlayingButtonVisibility;
- (void)container:(id)arg1 didInvalidateIndicies:(id)arg2;
- (void)containerDidChangeCount:(id)arg1;
- (void)containerDidInvalidateRootItem:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (void)errorViewDidTapButton:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (id)initWithContainer:(id)arg1 tabbedBrowsing:(BOOL)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)reloadTable;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)showActivity:(BOOL)arg1 inCell:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

