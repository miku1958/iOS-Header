//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <MusicCarDisplayUI/UITabBarControllerDelegate-Protocol.h>

@class AVExternalDevice, MCDRadioViewController, MPAVController, NSMapTable, NSString, RadioRecentStationsController, UIButton, UITabBarController;
@protocol MCDCarDisplayServiceProvider;

@interface MCDBrowserViewController : UINavigationController <UITabBarControllerDelegate>
{
    BOOL _viewHasAppeared;
    BOOL _libraryHasSongs;
    UITabBarController *_tabBarController;
    UIButton *_nowPlayingButton;
    NSMapTable *_noContentViews;
    AVExternalDevice *_externalDevice;
    MCDRadioViewController *_radioViewController;
    MPAVController *_player;
    id<MCDCarDisplayServiceProvider> _serviceProvider;
    UITabBarController *_hostTabBarController;
    RadioRecentStationsController *_recentStationsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UITabBarController *hostTabBarController; // @synthesize hostTabBarController=_hostTabBarController;
@property (strong, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (weak, nonatomic) RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
@property (weak, nonatomic) id<MCDCarDisplayServiceProvider> serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)MCD_pushNowPlayingViewControllerAnimated:(BOOL)arg1;
- (void)_accountsDidChangeNotification:(id)arg1;
- (id)_createViewControllerForIdentifier:(id)arg1;
- (BOOL)_isNowPlayingAvailable;
- (void)_itemChanged:(id)arg1;
- (void)_limitedUIChanged:(id)arg1;
- (BOOL)_limitedUIEnabled;
- (void)_mediaLibraryDidChange:(id)arg1;
- (void)_nowPlayingButtonTouchUpInside:(id)arg1;
- (void)_reloadHostTabs;
- (void)_removeDetailViews;
- (void)_tabBarDidChangeViewControllers:(id)arg1;
- (void)_updateNowPlayingVisibility;
- (void)dealloc;
- (id)initWithHostTabBarController:(id)arg1;
- (id)nowPlayingButton;
- (void)pushNowPlaying:(BOOL)arg1;
- (void)refreshNavigationPath;
- (void)reloadWithTabs:(id)arg1 forceReload:(BOOL)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end
