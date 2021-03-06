//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTextViewPane.h>

#import <InternalPreferences/MFMailComposeViewControllerDelegate-Protocol.h>

@class MFMailComposeViewController, NSString, PSRootController, UIBarButtonItem;

@interface PropertyListPane : PSTextViewPane <MFMailComposeViewControllerDelegate>
{
    UIBarButtonItem *_emailButton;
    MFMailComposeViewController *_mailComposeController;
    PSRootController *_rootController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIBarButtonItem *emailButton; // @synthesize emailButton=_emailButton;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MFMailComposeViewController *mailComposeController; // @synthesize mailComposeController=_mailComposeController;
@property (weak, nonatomic) PSRootController *rootController; // @synthesize rootController=_rootController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)emailFile:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)setPreferenceSpecifier:(id)arg1;

@end

