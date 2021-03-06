//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/UIDropInteractionDelegate_Private-Protocol.h>

@class SBIcon, SBIconListView, SBIconView;
@protocol UIDropSession;

@protocol SBIconListViewDraggingPolicyHandling <UIDropInteractionDelegate_Private>
- (BOOL)allowsSpringLoadForSession:(id<UIDropSession>)arg1 onIconView:(SBIconView *)arg2;
- (long long)dragPlacementForDropSession:(id<UIDropSession>)arg1 iconListView:(SBIconListView *)arg2 point:(struct CGPoint)arg3 icon:(SBIcon *)arg4 options:(unsigned long long)arg5;
- (void)handleSpringLoadOnIconView:(SBIconView *)arg1;
@end

