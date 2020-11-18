//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKNFCTagReaderSessionDelegate-Protocol.h>

@class NSString, PKAccount, PKAccountService, PKBusinessChatController, PKNFCTagReaderSession, PKPaymentPass, PKPaymentSessionHandle, PKPhysicalCard, PKPhysicalCardActivationAnimationView;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate>
{
    PKAccountService *_accountService;
    PKAccount *_account;
    PKPhysicalCard *_physicalCard;
    PKPaymentPass *_paymentPass;
    unsigned long long _feature;
    PKPhysicalCardActivationAnimationView *_animationView;
    BOOL _invalidated;
    BOOL _deviceSupportsReaderMode;
    PKPaymentSessionHandle *_sessionHandle;
    PKNFCTagReaderSession *_readerSession;
    PKBusinessChatController *_businessChatController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_invalidate;
- (void)_presentActivationWithActivationCode:(id)arg1;
- (void)_startTagReaderSession;
- (void)_stopTagReaderSession;
- (void)dealloc;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4;
- (void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2;
- (void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

