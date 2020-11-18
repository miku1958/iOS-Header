//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VoiceShortcutsUI/VCUICreateVoiceShortcutViewControllerDelegate-Protocol.h>

@class NSString, UITextView;
@protocol VCActionDonation;

@interface VCUIActionDonationDetailsViewController : UIViewController <VCUICreateVoiceShortcutViewControllerDelegate>
{
    id<VCActionDonation> _donation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<VCActionDonation> donation; // @synthesize donation=_donation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextView *view; // @dynamic view;

+ (void)initialize;
- (void).cxx_destruct;
- (void)createVoiceShortcut;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (id)initWithDonation:(id)arg1;
- (void)loadView;

@end

