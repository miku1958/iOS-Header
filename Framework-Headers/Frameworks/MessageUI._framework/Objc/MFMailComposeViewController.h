//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol MFMailComposeViewControllerDelegate;

@interface MFMailComposeViewController : UINavigationController
{
    id _internal;
    CDUnknownBlockType _setupAnimationBlock;
    BOOL _didChangeStatusBarStyle;
    long long _savedStatusBarStyle;
}

@property (nonatomic) id<MFMailComposeViewControllerDelegate> mailComposeDelegate;

+ (BOOL)canSendMail;
+ (BOOL)canSendMailSourceAccountManagement:(int)arg1;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (unsigned long long)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2;
- (id)_internalViewController;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addSetupAnimationBlock:(CDUnknownBlockType)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)currentAttachmentLimitWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)finalizeCompositionValues;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
