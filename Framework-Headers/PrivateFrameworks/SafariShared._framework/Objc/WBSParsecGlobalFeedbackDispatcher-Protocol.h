//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSDictionary;

@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>
- (void)sendCrowdsourcedAutoFillFeedback:(NSDictionary *)arg1;

@optional
- (void)sendAppLaunchFeedback;
- (void)sendAppLostFocusFeedback;
- (void)sendAppQuitFeedback;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1;
- (void)sendNewTabFeedback;
- (void)sendNewWindowFeedback;
- (void)sendSmartSearchFieldClickedFeedback;
- (void)sendWindowCloseByKeyboardFeedback;
- (void)sendWindowCloseByMouseFeedback;
- (void)sendWindowMiniaturizeByKeyboardFeedback;
- (void)sendWindowMiniaturizeByMouseFeedback;
@end
