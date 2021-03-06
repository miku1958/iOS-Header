//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SearchUIFeedbackDelegate;

@interface SUICKPFeedbackDelegateDemultiplexer : NSObject <SearchUIFeedbackDelegate>
{
    NSMutableDictionary *_feedbackDelegatesByCardSectionIdentifiers;
    NSMutableDictionary *_feedbackDelegatesByCardSectionViewIds;
    id<SearchUIFeedbackDelegate> _defaultDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<SearchUIFeedbackDelegate> defaultDelegate; // @synthesize defaultDelegate=_defaultDelegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionIdentifiers; // @synthesize feedbackDelegatesByCardSectionIdentifiers=_feedbackDelegatesByCardSectionIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionViewIds; // @synthesize feedbackDelegatesByCardSectionViewIds=_feedbackDelegatesByCardSectionViewIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_delegateForFeedback:(id)arg1;
- (id)_delegateForView:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardViewDidAppear:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didErrorOccur:(id)arg1;
- (void)didReportUserResponseFeedback:(id)arg1;
- (id)init;
- (void)presentViewController:(id)arg1;
- (void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)sendCustomFeedback:(id)arg1;
- (BOOL)shouldHandleCardSectionEngagement:(id)arg1;
- (void)willDismissViewController:(id)arg1;

@end

