//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/CRKCardPresentationDelegate-Protocol.h>

@class CRKCardPresentation, INInteraction, NSString, UIActivityIndicatorView, WFCompactUnlockService;
@protocol CRKCardViewControllerDelegate, WFInteractionCardViewControllerDelegate;

@interface WFInteractionCardViewController : UIViewController <CRKCardPresentationDelegate>
{
    INInteraction *_interaction;
    id<WFInteractionCardViewControllerDelegate> _delegate;
    CRKCardPresentation *_cardPresentation;
    UIActivityIndicatorView *_activityIndicatorView;
    WFCompactUnlockService *_unlockService;
}

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property (strong, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFInteractionCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFCompactUnlockService *unlockService; // @synthesize unlockService=_unlockService;

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)buttonOverlayTouchWasCancelled:(id)arg1;
- (void)buttonOverlayWasTouchedDown:(id)arg1;
- (void)buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)buttonOverlayWasTouchedUpOutside:(id)arg1;
- (id)cardRequestForInteraction:(id)arg1;
- (id)cardViewController;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (id)initWithInteraction:(id)arg1;
- (void)loadView;
- (void)updateCardViewSize;
- (void)updateWithInteraction:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

