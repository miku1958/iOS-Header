//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarStyleDelegate-Protocol.h>

@class UIStatusBar_Base;

@protocol UIStatusBarStyleDelegate_SpringBoardOnly <UIStatusBarStyleDelegate>

@optional
- (long long)overriddenRequestedStyleFromStyle:(long long)arg1;
- (int)statusBar:(UIStatusBar_Base *)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (BOOL)statusBarShouldDisableRegionActions:(UIStatusBar_Base *)arg1;
@end
