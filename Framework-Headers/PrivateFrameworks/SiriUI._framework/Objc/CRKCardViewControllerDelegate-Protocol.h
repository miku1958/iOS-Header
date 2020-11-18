//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/CRFeedbackListener-Protocol.h>

@class CRKCardSectionViewController, CRKCardViewController, CRNextCardCommand, CRPunchoutCommand, INIntent, UIViewController;
@protocol CRCard, CRReferentialCommand;

@protocol CRKCardViewControllerDelegate <CRFeedbackListener>

@optional
- (id<CRCard>)baseCardForCardViewController:(CRKCardViewController *)arg1;
- (BOOL)canPerformReferentialCommand:(id<CRReferentialCommand>)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (struct CGSize)cardViewController:(CRKCardViewController *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(CRKCardViewController *)arg1 didFailToLoadCard:(id<CRCard>)arg2;
- (void)cardViewController:(CRKCardViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardViewControllerBoundsDidChange:(CRKCardViewController *)arg1;
- (void)cardViewControllerDidLoad:(CRKCardViewController *)arg1;
- (unsigned long long)navigationIndexOfCardViewController:(CRKCardViewController *)arg1;
- (BOOL)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (BOOL)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (BOOL)performReferentialCommand:(id<CRReferentialCommand>)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(CRKCardViewController *)arg2;
@end
