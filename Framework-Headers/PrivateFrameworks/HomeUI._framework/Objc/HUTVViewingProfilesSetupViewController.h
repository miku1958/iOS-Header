//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUItemTableModuleControllerHosting-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HMHome, HUTVViewingProfilesEditorItemManager, NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController>
{
    id<HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_useTVVPButton;
    OBLinkTrayButton *_customizeButton;
    HUTVViewingProfilesEditorItemManager *_tvVPEditorItemManager;
}

@property (strong, nonatomic) OBLinkTrayButton *customizeButton; // @synthesize customizeButton=_customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;
@property (strong, nonatomic) HUTVViewingProfilesEditorItemManager *tvVPEditorItemManager; // @synthesize tvVPEditorItemManager=_tvVPEditorItemManager;
@property (strong, nonatomic) OBTrayButton *useTVVPButton; // @synthesize useTVVPButton=_useTVVPButton;

- (void).cxx_destruct;
- (void)_customizeOrOffButton:(id)arg1;
- (void)_setupTVViewingProfilesItemInfrastructure;
- (void)_turnOnAllTVViewingProfiles:(id)arg1;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

