//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/NSObject-Protocol.h>

@class DDAction, UIAlertController;

@protocol DDDetectionControllerInteractionDelegate <NSObject>

@optional
- (void)action:(DDAction *)arg1 didDismissAlertController:(UIAlertController *)arg2;
- (void)actionDidFinish:(DDAction *)arg1;
- (void)actionWillStart:(DDAction *)arg1;
@end

