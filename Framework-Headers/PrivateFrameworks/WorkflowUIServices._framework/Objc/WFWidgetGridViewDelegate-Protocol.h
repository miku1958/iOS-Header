//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUIServices/NSObject-Protocol.h>

@class WFWidgetCell, WFWidgetGridView;

@protocol WFWidgetGridViewDelegate <NSObject>
- (void)gridView:(WFWidgetGridView *)arg1 cellDidTransitionToRunningState:(long long)arg2;
- (void)gridView:(WFWidgetGridView *)arg1 didTapCell:(WFWidgetCell *)arg2;
- (void)gridViewDidFinishLayout:(WFWidgetGridView *)arg1;
@end

