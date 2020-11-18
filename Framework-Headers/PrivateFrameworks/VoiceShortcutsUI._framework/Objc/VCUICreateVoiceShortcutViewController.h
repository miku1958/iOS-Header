//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceShortcutsUI/VCUIManageVoiceShortcutViewControllerDelegate-Protocol.h>

@class NSString, VCUIManageVoiceShortcutViewController, VCVoiceShortcutClient;
@protocol VCActionDonation, VCUICreateVoiceShortcutViewControllerDelegate;

@interface VCUICreateVoiceShortcutViewController : UIViewController <VCUIManageVoiceShortcutViewControllerDelegate>
{
    BOOL _hasAppeared;
    id<VCUICreateVoiceShortcutViewControllerDelegate> _delegate;
    id<VCActionDonation> _actionDonation;
    VCVoiceShortcutClient *_voiceShortcutClient;
    VCUIManageVoiceShortcutViewController *_manageVoiceShortcutViewController;
}

@property (readonly, nonatomic) id<VCActionDonation> actionDonation; // @synthesize actionDonation=_actionDonation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VCUICreateVoiceShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VCUIManageVoiceShortcutViewController *manageVoiceShortcutViewController; // @synthesize manageVoiceShortcutViewController=_manageVoiceShortcutViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) VCVoiceShortcutClient *voiceShortcutClient; // @synthesize voiceShortcutClient=_voiceShortcutClient;

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithActionDonation:(id)arg1 voiceShortcutClient:(id)arg2;
- (void)loadView;
- (void)manageVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)manageVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)manageVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

