//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/SBGridSwitcherScrollProviding-Protocol.h>

@class NSString, SBAppLayout, SBGridLayoutSwitcherModifier, _SBGridFloorSwitcherModifier;
@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBGridSwitcherModifier : SBSwitcherModifier <SBGridSwitcherScrollProviding>
{
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBGridFloorSwitcherModifier *_floorModifier;
    unsigned long long _ongoingAppLayoutRemovals;
    SBAppLayout *_activeAppLayoutInSwitcher;
    id<SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double effectiveHorizontalSpacing;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (weak, nonatomic) id<SBFluidSwitcherScrollProvidingDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didMoveToParentModifier:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gridLayoutModifier;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
