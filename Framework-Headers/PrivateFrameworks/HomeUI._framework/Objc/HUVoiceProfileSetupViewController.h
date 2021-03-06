//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HMHome, HUPersonalRequestsEditorItemManager, NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUVoiceProfileSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>
{
    id<HUConfigurationViewControllerDelegate> _delegate;
    HMHome *_home;
    OBTrayButton *_setupButton;
    OBLinkTrayButton *_notNowButton;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    NSString *_buttonOneText;
}

@property (strong, nonatomic) NSString *buttonOneText; // @synthesize buttonOneText=_buttonOneText;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) BOOL isFinalStep;
@property (strong, nonatomic) OBLinkTrayButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property (strong, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // @synthesize prEditorItemManager=_prEditorItemManager;
@property (strong, nonatomic) OBTrayButton *setupButton; // @synthesize setupButton=_setupButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dontSetupVoiceProfile;
- (void)_dontSetupVoiceProfileWithWarning:(id)arg1;
- (void)_resetVoiceProfileSetup;
- (void)_setupPersonalRequestsItemInfrastructure;
- (void)_setupVoiceProfile:(id)arg1;
- (void)_turnOffPersonalRequests;
- (void)_turnOffVoiceRecognition;
- (void)continueSetup;
- (void)dismissSetup;
- (id)hu_preloadContent;
- (id)initWithHome:(id)arg1;
- (void)showLearnMore;
- (void)skipSetup;
- (void)userTappedCancelFromWarning;
- (void)userTappedContinueFromWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

