//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKSetupFlowControllerProtocol-Protocol.h>

@class NSString, PKAccount, PKAccountService, PKPaymentPass, PKPhysicalCard;
@protocol PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol;

@interface PKPhysicalCardController : NSObject <PKSetupFlowControllerProtocol>
{
    PKAccountService *_accountService;
    BOOL _updatingOrderController;
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
    id<PKSetupFlowControllerProtocol> _parentFlowController;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPhysicalCard *_unactivatedPhysicalCard;
    PKPhysicalCard *_primaryPhysicalCard;
}

@property (readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) BOOL canActivatePhysicalCard;
@property (readonly, nonatomic) BOOL canReplacePhysicalCard;
@property (readonly, nonatomic) BOOL canRequestPhysicalCard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPrimaryPhysicalCard;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<PKSetupFlowControllerProtocol> parentFlowController; // @synthesize parentFlowController=_parentFlowController;
@property (readonly, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property (readonly, nonatomic) BOOL physicalCardBlocked;
@property (readonly, nonatomic) PKPhysicalCard *primaryPhysicalCard; // @synthesize primaryPhysicalCard=_primaryPhysicalCard;
@property (readonly, nonatomic) BOOL primaryPhysicalCardEnabled;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPhysicalCard *unactivatedPhysicalCard; // @synthesize unactivatedPhysicalCard=_unactivatedPhysicalCard;

+ (BOOL)deviceSupportsContactlessActivation;
- (void).cxx_destruct;
- (void)_updatePhysicalCards;
- (void)dealloc;
- (id)initWithAccountService:(id)arg1 paymentPass:(id)arg2 account:(id)arg3;
- (void)nextViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)orderFlowViewControllerForReason:(unsigned long long)arg1 content:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithAccount:(id)arg1;

@end

