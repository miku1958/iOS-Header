//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppPredictionUI/NSObject-Protocol.h>

@protocol CRAsyncCardReceiptFeedback, CRAsyncCardRequestFeedback, CRCard, CRCardSection, CRCardSectionEngagementFeedback, CRCardSectionViewAppearanceFeedback, CRCardSectionViewDisappearanceFeedback, CRCardViewAppearanceFeedback, CRCardViewDisappearanceFeedback;

@protocol CRFeedbackListener <NSObject>

@optional
- (void)cardSectionViewDidAppearForCardSection:(id<CRCardSection>)arg1 withAppearanceFeedback:(id<CRCardSectionViewAppearanceFeedback>)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id<CRCardSection>)arg1 withDisappearanceFeedback:(id<CRCardSectionViewDisappearanceFeedback>)arg2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id<CRCardSection>)arg1;
- (void)cardSectionViewWillAppearForCardSection:(id<CRCardSection>)arg1 withAppearanceFeedback:(id<CRCardSectionViewAppearanceFeedback>)arg2;
- (void)cardViewDidAppearForCard:(id<CRCard>)arg1 withAppearanceFeedback:(id<CRCardViewAppearanceFeedback>)arg2;
- (void)cardViewDidDisappearForCard:(id<CRCard>)arg1 withDisappearanceFeedback:(id<CRCardViewDisappearanceFeedback>)arg2;
- (void)cardViewWillAppearForCard:(id<CRCard>)arg1 withAppearanceFeedback:(id<CRCardViewAppearanceFeedback>)arg2;
- (void)controllerForCard:(id<CRCard>)arg1 didReceiveAsyncCard:(id<CRCard>)arg2 withAsyncCardReceiptFeedback:(id<CRAsyncCardReceiptFeedback>)arg3;
- (void)controllerForCard:(id<CRCard>)arg1 didRequestAsyncCard:(id<CRCard>)arg2 withAsyncCardRequestFeedback:(id<CRAsyncCardRequestFeedback>)arg3;
- (BOOL)shouldHandleEngagement:(id<CRCardSectionEngagementFeedback>)arg1 forCardSection:(id<CRCardSection>)arg2;
- (void)userDidEngageCardSection:(id<CRCardSection>)arg1 withEngagementFeedback:(id<CRCardSectionEngagementFeedback>)arg2;
@end

