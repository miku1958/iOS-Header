//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>

@class NSDictionary, NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSPhysicalTransferViewController : OBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem>
{
    NSDictionary *_plan;
    NSString *_deviceName;
    NSString *_phoneNumber;
    id<TSSIMSetupFlowDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_continueButtonTapped;
- (void)_scanButtonTapped;
- (void)_startPlanTransfer:(id)arg1;
- (id)initWithPlan:(id)arg1;
- (void)viewDidLoad;

@end

