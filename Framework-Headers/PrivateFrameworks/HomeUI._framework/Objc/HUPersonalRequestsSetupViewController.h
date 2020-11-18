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

@class HMHome, HULocationDevice, HUPersonalRequestsDevicesModuleController, HUPersonalRequestsEditorItemManager, NSArray, NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUPersonalRequestsSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController>
{
    id<HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_usePRButton;
    OBLinkTrayButton *_customizeButton;
    HULocationDevice *_locationDevice;
    NSArray *_supportedMultiUserLanguages;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    HUPersonalRequestsDevicesModuleController *_prDevicesModuleController;
}

@property (strong, nonatomic) OBLinkTrayButton *customizeButton; // @synthesize customizeButton=_customizeButton;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) BOOL isFinalStep;
@property (strong, nonatomic) HULocationDevice *locationDevice; // @synthesize locationDevice=_locationDevice;
@property (strong, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController; // @synthesize prDevicesModuleController=_prDevicesModuleController;
@property (strong, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // @synthesize prEditorItemManager=_prEditorItemManager;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *supportedMultiUserLanguages; // @synthesize supportedMultiUserLanguages=_supportedMultiUserLanguages;
@property (strong, nonatomic) OBTrayButton *usePRButton; // @synthesize usePRButton=_usePRButton;

- (void).cxx_destruct;
- (BOOL)_allPersonalRequestsDevicesSupportVoiceRecognition;
- (void)_customizePersonalRequests:(id)arg1;
- (void)_dontUsePersonalRequests:(id)arg1;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_turnOnAllPersonalRequests:(id)arg1;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
