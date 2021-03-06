//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKDynamicProvisioningPageContent, UIImage;

@interface PKDynamicProvisioningPageViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable>
{
    UIImage *_heroImage;
    PKDynamicProvisioningPageContent *_page;
    CDUnknownBlockType _primaryButtonAction;
    CDUnknownBlockType _secondaryButtonAction;
    CDUnknownBlockType _bodyButtonAction;
    CDUnknownBlockType _cancelButtonAction;
    CDUnknownBlockType _doneButtonAction;
}

@property (copy, nonatomic) CDUnknownBlockType bodyButtonAction; // @synthesize bodyButtonAction=_bodyButtonAction;
@property (copy, nonatomic) CDUnknownBlockType cancelButtonAction; // @synthesize cancelButtonAction=_cancelButtonAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType doneButtonAction; // @synthesize doneButtonAction=_doneButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKDynamicProvisioningPageContent *page; // @synthesize page=_page;
@property (copy, nonatomic) CDUnknownBlockType primaryButtonAction; // @synthesize primaryButtonAction=_primaryButtonAction;
@property (copy, nonatomic) CDUnknownBlockType secondaryButtonAction; // @synthesize secondaryButtonAction=_secondaryButtonAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewControllerDidSelectDone:(id)arg1;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithPage:(id)arg1 context:(long long)arg2;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

@end

