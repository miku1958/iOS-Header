//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class CDPUIController, UIViewController;

@protocol CDPUIDelegate <NSObject>
- (void)uiController:(CDPUIController *)arg1 didPresentRootViewController:(UIViewController *)arg2;

@optional
- (void)uiController:(CDPUIController *)arg1 prepareAlertContext:(void (^)(void))arg2;
- (void)uiController:(CDPUIController *)arg1 preparePresentationContext:(void (^)(void))arg2;
@end

