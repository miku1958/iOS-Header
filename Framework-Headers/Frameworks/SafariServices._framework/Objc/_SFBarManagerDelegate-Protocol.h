//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFBarManager;

@protocol _SFBarManagerDelegate <NSObject>

@optional
- (BOOL)barManager:(_SFBarManager *)arg1 canHandleLongPressForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveLongPressForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveTapForBarItem:(long long)arg2;
- (void)barManager:(_SFBarManager *)arg1 didReceiveTouchDownForBarItem:(long long)arg2;
@end

