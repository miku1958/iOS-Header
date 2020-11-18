//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, UIPrintInfo, UIViewController, _SFPrintController;

@protocol _SFPrintControllerDelegate <NSObject>
- (UIViewController *)presentingViewControllerForPrintController:(_SFPrintController *)arg1;
- (BOOL)printControllerCanPresentPrintUI:(_SFPrintController *)arg1;
- (BOOL)printControllerPageIsLoading:(_SFPrintController *)arg1;
- (BOOL)printControllerShouldPrintReader:(_SFPrintController *)arg1;

@optional
- (NSString *)URLStringForPrintController:(_SFPrintController *)arg1;
- (NSString *)loadingDialogPageTitleForPrintController:(_SFPrintController *)arg1;
- (NSString *)pageTitleForPrintController:(_SFPrintController *)arg1;
- (void)printController:(_SFPrintController *)arg1 didCreatePrintInfo:(UIPrintInfo *)arg2;
@end

