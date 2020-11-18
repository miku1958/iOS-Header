//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/CCUIControlCenterSectionViewController.h>

#import <ControlCenterUI/MPAVRoutingControllerDelegate-Protocol.h>
#import <ControlCenterUI/SFAirDropDiscoveryAlertControllerDelegate-Protocol.h>
#import <ControlCenterUI/SFAirDropDiscoveryControllerDelegate-Protocol.h>
#import <ControlCenterUI/UIPopoverControllerDelegate-Protocol.h>

@class BSTimer, CCUIControlCenterPushButton, MPAVRoutingController, MPAVRoutingSheet, MPAudioVideoRoutingPopoverController, NSString, SFAirDropDiscoveryController, UIAlertController;

@interface CCUIAirStuffSectionController : CCUIControlCenterSectionViewController <MPAVRoutingControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate>
{
    CCUIControlCenterPushButton *_airPlaySection;
    CCUIControlCenterPushButton *_airDropSection;
    MPAVRoutingController *_airPlayController;
    MPAVRoutingSheet *_airPlayModalSheet;
    MPAudioVideoRoutingPopoverController *_airPlayPopoverController;
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    UIAlertController *_airDropAlertController;
    BOOL _isVisible;
    BSTimer *_airPlayTimer;
    unsigned long long _mode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (readonly) Class superclass;

+ (id)defaultFontTight;
+ (Class)viewClass;
- (void).cxx_destruct;
- (void)_airDropTapped:(id)arg1;
- (void)_airPlayDoneButtonTapped:(id)arg1;
- (void)_airPlayTapped:(id)arg1;
- (void)_dismissAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissAirplayControllerAnimated:(BOOL)arg1;
- (void)_noteSectionEnabledStateDidChange;
- (void)_presentAirDropWithCompletion:(CDUnknownBlockType)arg1;
- (id)_selectedStateColor;
- (void)_showAirPlayView:(id)arg1;
- (void)_updateAirDropControlAsEnabled:(BOOL)arg1;
- (void)_updateForAirDropStateChange;
- (void)_updateForAirPlayStateChange;
- (void)_updateLayoutForSizeCategoryChange;
- (void)_updateSubsectionVisibility;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)dealloc;
- (void)discoveryController:(id)arg1 alertControllerDidDismiss:(id)arg2;
- (void)discoveryControllerSettingsDidChange:(id)arg1;
- (void)discoveryControllerVisibilityDidChange:(id)arg1;
- (BOOL)dismissModalFullScreenIfNeeded;
- (BOOL)enabled;
- (id)init;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)sectionIdentifier;
- (id)view;
- (void)viewDidLoad;

@end
