//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class UIView, WFContentItem, WFModulesQuickLookView;

@protocol WFModulesQuickLookViewDelegate <NSObject>
- (void)quickLookView:(WFModulesQuickLookView *)arg1 clickedShare:(UIView *)arg2 forContentItem:(WFContentItem *)arg3;
- (void)quickLookViewWantsFullscreen:(WFModulesQuickLookView *)arg1;
@end
