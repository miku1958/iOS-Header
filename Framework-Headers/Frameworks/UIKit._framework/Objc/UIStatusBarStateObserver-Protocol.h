//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@protocol UIStatusBarStateProvider;

@protocol UIStatusBarStateObserver <NSObject>
- (void)statusBarStateProvider:(id<UIStatusBarStateProvider>)arg1 didPostStatusBarData:(const CDStruct_996e841e *)arg2 withActions:(int)arg3;

@optional
- (void)statusBarStateProvider:(id<UIStatusBarStateProvider>)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
@end

