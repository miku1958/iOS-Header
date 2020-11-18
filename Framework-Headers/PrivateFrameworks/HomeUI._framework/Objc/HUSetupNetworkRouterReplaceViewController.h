//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUImageOBWelcomeController.h>

#import <HomeUI/HFSetupPairingPopup-Protocol.h>

@class HMSetupAccessoryDescription, NSString;
@protocol HFSetupPairingPopupDelegate;

@interface HUSetupNetworkRouterReplaceViewController : HUImageOBWelcomeController <HFSetupPairingPopup>
{
    id<HFSetupPairingPopupDelegate> _popupDelegate;
    HMSetupAccessoryDescription *_setupAccessoryDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<HFSetupPairingPopupDelegate> popupDelegate; // @synthesize popupDelegate=_popupDelegate;
@property (readonly, nonatomic) unsigned long long popupType;
@property (readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed:(id)arg1;
- (void)_replacePressed:(id)arg1;
- (id)initWithPopupDelegate:(id)arg1 setupAccessoryDescription:(id)arg2;
- (void)viewDidLoad;

@end
