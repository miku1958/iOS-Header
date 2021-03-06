//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBFluidSwitcherItemContainer;

@protocol SBFluidSwitcherItemContainerDelegate <NSObject>
- (BOOL)canSelectContainer:(SBFluidSwitcherItemContainer *)arg1 numberOfTaps:(long long)arg2;
- (void)didSelectContainer:(SBFluidSwitcherItemContainer *)arg1;
- (struct CGRect)frameForPageViewOfContainer:(SBFluidSwitcherItemContainer *)arg1 fullyPresented:(BOOL)arg2;
- (long long)homeScreenInterfaceOrientation;
- (void)killContainer:(SBFluidSwitcherItemContainer *)arg1 forReason:(long long)arg2;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(SBFluidSwitcherItemContainer *)arg2;
- (long long)switcherInterfaceOrientation;
@end

