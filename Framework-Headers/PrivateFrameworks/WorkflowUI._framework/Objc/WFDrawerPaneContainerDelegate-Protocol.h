//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class UIScrollView, WFDrawerPaneContainer;

@protocol WFDrawerPaneContainerDelegate <NSObject>
- (double)bottomInsetForPaneContainer:(WFDrawerPaneContainer *)arg1;
- (void)drawerPaneContainer:(WFDrawerPaneContainer *)arg1 didTransitionToVisibility:(unsigned long long)arg2;
- (void)drawerPaneContainer:(WFDrawerPaneContainer *)arg1 willTransitionToVisibility:(unsigned long long)arg2;
- (UIScrollView *)scrollViewOccludingDrawerPaneInsideContainer:(WFDrawerPaneContainer *)arg1;
@end

