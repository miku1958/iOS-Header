//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKAccountServicePerformActionViewController;

@protocol PKAccountServicePerformActionViewControllerDelegate <NSObject>
- (void)accountServicePerformActionViewControllerDidCancel:(PKAccountServicePerformActionViewController *)arg1;
- (void)accountServicePerformActionViewControllerDidPerformAction:(PKAccountServicePerformActionViewController *)arg1;

@optional
- (void)accountServicePerformActionViewController:(PKAccountServicePerformActionViewController *)arg1 didSchedulePayments:(NSArray *)arg2;
@end

