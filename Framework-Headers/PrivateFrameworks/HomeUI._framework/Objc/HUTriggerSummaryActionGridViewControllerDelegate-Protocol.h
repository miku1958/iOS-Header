//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewControllerDelegate-Protocol.h>
#import <HomeUI/NSObject-Protocol.h>

@class HFServiceActionItem, HFTriggerBuilder, HUTriggerSummaryActionGridViewController;

@protocol HUTriggerSummaryActionGridViewControllerDelegate <NSObject, HUServiceGridViewControllerDelegate>
- (void)triggerSummaryActionGridViewController:(HUTriggerSummaryActionGridViewController *)arg1 didUpdateTriggerBuilder:(HFTriggerBuilder *)arg2;

@optional
- (BOOL)triggerSummaryActionGridViewController:(HUTriggerSummaryActionGridViewController *)arg1 shouldShowAction:(HFServiceActionItem *)arg2;
@end

