//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class SFCardSectionEngagementFeedback, SFResultEngagementFeedback;

@protocol SearchUIFeedbackDelegate <NSObject>

@optional
- (void)didEngageActionItem:(SFResultEngagementFeedback *)arg1 actionPerformed:(BOOL)arg2;
- (void)didEngageCardSection:(SFCardSectionEngagementFeedback *)arg1;
- (BOOL)didHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
@end
