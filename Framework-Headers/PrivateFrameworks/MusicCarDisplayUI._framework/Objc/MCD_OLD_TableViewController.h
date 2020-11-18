//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class AVExternalDevice, MCDNowPlayingButton, MPAVController, MPMediaQuery, UIColor;
@protocol MCDCarDisplayServiceProvider;

@interface MCD_OLD_TableViewController : UITableViewController
{
    id<MCDCarDisplayServiceProvider> _serviceProvider;
    MPAVController *_player;
    MPMediaQuery *_query;
    BOOL _viewHasAppeared;
    MCDNowPlayingButton *_nowPlayingButton;
    AVExternalDevice *_externalDevice;
    BOOL _alwaysShowNavBar;
    BOOL _limitedUI;
    BOOL _topLevel;
    UIColor *_tintColor;
}

@property (nonatomic) BOOL alwaysShowNavBar; // @synthesize alwaysShowNavBar=_alwaysShowNavBar;
@property (readonly) BOOL currentAppIsPlaying;
@property (nonatomic) BOOL limitedUI; // @synthesize limitedUI=_limitedUI;
@property (readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
@property (readonly, nonatomic) id<MCDCarDisplayServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (nonatomic) BOOL topLevel; // @synthesize topLevel=_topLevel;
@property (nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;

+ (void)_addTemplateImage:(id)arg1 toCell:(id)arg2 tintColor:(id)arg3;
+ (void)_adjustTintColor:(id)arg1 forSubviewsInCell:(id)arg2;
+ (id)addAlbumArtViewWithImage:(id)arg1 toCell:(id)arg2 rowHeight:(double)arg3;
+ (void)addGenericTemplateImage:(id)arg1 toCell:(id)arg2;
+ (void)addTemplateImage:(id)arg1 toCell:(id)arg2;
+ (void)matchingNowPlayingApplicationWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)removeImageFromCell:(id)arg1;
- (void).cxx_destruct;
- (void)_itemChanged:(id)arg1;
- (void)_itemDidChange;
- (void)_limitedUIDidChange;
- (void)_nowPlayingButtonTapped:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_updateNowPlayingPlayingVisibilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateNowPlayingVisibility;
- (id)dequeueReusableCarDisplayCellForTableView:(id)arg1 indexPath:(id)arg2;
- (BOOL)hasRowsToDisplay;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (id)preferredFocusedItem;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

