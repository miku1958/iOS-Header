//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/CRCommandHandling-Protocol.h>
#import <SiriUI/CRFeedbackListener-Protocol.h>

@class CRKCardSectionViewController, CRNextCardCommand, CRPunchoutCommand, CRRequestUserConfirmationCommand, INIntent, UIViewController;
@protocol CRCard, CRKCardViewControlling, CRReferentialCommand;

@protocol CRKCardViewControllerDelegate <CRFeedbackListener, CRCommandHandling>

@optional
- (id<CRCard>)baseCardForCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (BOOL)canPerformReferentialCommand:(id<CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (struct CGSize)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 didFailToLoadCard:(id<CRCard>)arg2;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestCardSectionViewSourceForCard:(id<CRCard>)arg2 reply:(void (^)(id<CRKCardSectionViewSourcing>, NSError *))arg3;
- (void)cardViewController:(UIViewController<CRKCardViewControlling> *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardViewControllerBoundsDidChange:(UIViewController<CRKCardViewControlling> *)arg1;
- (void)cardViewControllerDidLoad:(UIViewController<CRKCardViewControlling> *)arg1;
- (unsigned long long)navigationIndexOfCardViewController:(UIViewController<CRKCardViewControlling> *)arg1;
- (BOOL)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (BOOL)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (BOOL)performReferentialCommand:(id<CRReferentialCommand>)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (BOOL)performRequestUserConfirmationCommand:(CRRequestUserConfirmationCommand *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(UIViewController<CRKCardViewControlling> *)arg2;
@end

