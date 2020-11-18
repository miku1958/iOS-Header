//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PreferencesUI/PSSpecifierGroupController-Protocol.h>
#import <PreferencesUI/RemoteUIControllerDelegate-Protocol.h>

@class CTCarrierSpaceCapabilities, NSString, PSListController, PSSpecifier, PSUICarrierSpaceOptInSplashScreen, RemoteUIController;

@interface PSUICarrierSpaceGroupController : NSObject <RemoteUIControllerDelegate, PSSpecifierGroupController>
{
    RemoteUIController *_remoteUIController;
    PSListController *_listController;
    PSSpecifier *_groupSpecifier;
    CTCarrierSpaceCapabilities *_capabilities;
    PSUICarrierSpaceOptInSplashScreen *_optInSplashScreen;
}

@property (strong, nonatomic) CTCarrierSpaceCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) PSListController *listController; // @synthesize listController=_listController;
@property (strong, nonatomic) PSUICarrierSpaceOptInSplashScreen *optInSplashScreen; // @synthesize optInSplashScreen=_optInSplashScreen;
@property (strong, nonatomic) RemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)agreePressed;
- (id)carrierServicesSpecifier;
- (void)carrierSpaceChanged;
- (id)descriptionForPlans:(id)arg1;
- (id)descriptionForUsage:(id)arg1;
- (void)disagreeOrCancelPressed;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)newCarrierNotification;
- (void)openURLWithSpecifier:(id)arg1;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)showConsentFlow:(id)arg1;
- (void)showTermsAndConditions:(id)arg1 consentFlowInfo:(id)arg2;
- (id)specifiers;

@end

