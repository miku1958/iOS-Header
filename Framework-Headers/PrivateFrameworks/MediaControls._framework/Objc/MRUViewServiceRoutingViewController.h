//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/MRUEndpointMetadataControllerObserver-Protocol.h>
#import <MediaControls/MRURoutingViewControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsEndpointsManagerDelegate-Protocol.h>
#import <MediaControls/UITableViewDelegate-Protocol.h>
#import <MediaControls/UITableViewDelegatePrivate-Protocol.h>

@class MPAVOutputDeviceRoutingDataSource, MPMediaControlsConfiguration, MRUEndpointMetadataController, MRURoutingViewController, MRUViewServiceRoutingView, MRUVisualStylingProvider, MediaControlsEndpointsManager, NSMutableDictionary, NSString, UITableViewDiffableDataSource;
@protocol MRUViewServiceRoutingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MRUViewServiceRoutingViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate>
{
    BOOL _onScreen;
    BOOL _canShowRemoteDevices;
    MPMediaControlsConfiguration *_configuration;
    MRUVisualStylingProvider *_stylingProvider;
    id<MRUViewServiceRoutingViewControllerDelegate> _delegate;
    MediaControlsEndpointsManager *_endpointsManager;
    MRURoutingViewController *_routingViewController;
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;
    UITableViewDiffableDataSource *_dataSource;
    NSMutableDictionary *_controllers;
    MRUEndpointMetadataController *_selectedController;
    CDUnknownBlockType _replaceRoutes;
    UIViewController *_alertViewController;
}

@property (strong, nonatomic) UIViewController *alertViewController; // @synthesize alertViewController=_alertViewController;
@property (nonatomic) BOOL canShowRemoteDevices; // @synthesize canShowRemoteDevices=_canShowRemoteDevices;
@property (strong, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) NSMutableDictionary *controllers; // @synthesize controllers=_controllers;
@property (strong, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MRUViewServiceRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MediaControlsEndpointsManager *endpointsManager; // @synthesize endpointsManager=_endpointsManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // @synthesize onScreen=_onScreen;
@property (strong, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource; // @synthesize outputDeviceRoutingDataSource=_outputDeviceRoutingDataSource;
@property (copy, nonatomic) CDUnknownBlockType replaceRoutes; // @synthesize replaceRoutes=_replaceRoutes;
@property (strong, nonatomic) MRURoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property (strong, nonatomic) MRUEndpointMetadataController *selectedController; // @synthesize selectedController=_selectedController;
@property (strong, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property (readonly) Class superclass;
@property (strong, nonatomic) MRUViewServiceRoutingView *view; // @dynamic view;
@property (strong, nonatomic) MRUViewServiceRoutingView *viewIfLoaded; // @dynamic viewIfLoaded;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)canShowMoreButton;
- (void)didSelectListState:(id)arg1;
- (void)didSelectQuickActionButton:(id)arg1;
- (void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2;
- (void)endpointsManager:(id)arg1 defersRoutesReplacement:(CDUnknownBlockType)arg2;
- (id)init;
- (void)loadView;
- (void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2;
- (void)metadataController:(id)arg1 didUpdateApplicationIcon:(id)arg2;
- (void)metadataControllerDidChangeState:(id)arg1;
- (void)metadataControllerDidUpdateRoutingAvailability:(id)arg1;
- (void)metadataControllerRouteDidUpdate:(id)arg1;
- (BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1;
- (void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2;
- (void)routingViewControllerDidUpdateItems:(id)arg1;
- (id)selectedIdentifier;
- (void)setState:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (void)updateCell:(id)arg1 forIdentifier:(id)arg2;
- (void)updateCellForIdentifier:(id)arg1;
- (void)updateControllers;
- (void)updateDiscoveryMode;
- (void)updateHeader;
- (void)updateMoreButtonVisibility;
- (void)updateRoutingViewController;
- (void)updateRoutingViewControllerContentEdgeInsets;
- (void)updateSelectedViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

