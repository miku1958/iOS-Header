//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString, REElementAction, UIViewController;

@protocol REElementActionDelegate <NSObject>

@optional
- (void)elementAction:(REElementAction *)arg1 didFinishTask:(BOOL)arg2;
- (void)elementAction:(REElementAction *)arg1 wantsToPerformTapActionForComplicationSlot:(NSString *)arg2;
- (void)elementAction:(REElementAction *)arg1 wantsViewControllerDisplayed:(UIViewController *)arg2;
@end

