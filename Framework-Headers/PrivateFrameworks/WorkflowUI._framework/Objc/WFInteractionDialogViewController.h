//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFCompactDialogViewController.h>

#import <WorkflowUI/WFInteractionCardViewControllerDelegate-Protocol.h>

@class NSString, UIInterfaceAction, WFDialogRequest, WFInteractionCardProgressViewController, WFInteractionCardViewController;

@interface WFInteractionDialogViewController : WFCompactDialogViewController <WFInteractionCardViewControllerDelegate>
{
    WFInteractionCardViewController *_cardViewController;
    WFInteractionCardProgressViewController *_progressViewController;
    UIInterfaceAction *_confirmAction;
    WFDialogRequest *_followUpRequest;
}

@property (strong, nonatomic) WFInteractionCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property (strong, nonatomic) UIInterfaceAction *confirmAction; // @synthesize confirmAction=_confirmAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) WFDialogRequest *followUpRequest; // @synthesize followUpRequest=_followUpRequest;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFInteractionCardProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canHandleFollowUpRequest:(id)arg1;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (void)handleFollowUpRequest:(id)arg1;
- (void)interactionCardViewControllerDidInvalidateSize:(id)arg1;
- (void)interactionCardViewControllerDidLoad:(id)arg1;
- (void)interactionCardViewControllerDidRequestCancel:(id)arg1;
- (void)interactionCardViewControllerDidRequestPunchout:(id)arg1;
- (void)loadView;
- (BOOL)showCheckmarkOnAppear;
- (void)showProgressWithEvent:(unsigned long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

