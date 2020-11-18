//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUPersonalRequestsDevicesItemModule, NSString;

@interface HUPersonalRequestsDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate, UITextViewDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUPersonalRequestsDevicesItemModule *module; // @dynamic module;
@property (readonly) Class superclass;

- (BOOL)_isCurrentDeviceCandidateForLocationDevice;
- (id)_preflightEnablingPersonalRequests;
- (void)_presentAlert:(id)arg1;
- (void)_presentConfirmationForEnablingPersonalRequestsForItem:(id)arg1 cell:(id)arg2 didTurnOn:(BOOL)arg3 showLanguageVariant:(BOOL)arg4;
- (id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg1;
- (id)_promptToChangeLocationDeviceIfNecessary;
- (id)_promptToEnableSiriIfNecessary;
- (void)_togglePersonalRequestStateForItem:(id)arg1;
- (void)_turnOnPersonalRequestForItem:(id)arg1 cell:(id)arg2 didTurnOn:(BOOL)arg3;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 host:(id)arg2;
- (id)setPersonalRequestsDevices:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)turnOnPersonalRequestsForAllMultiUserCapableDevices;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;

@end
