//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class EKICSPreviewController, NSArray;

@protocol EKICSPreviewControllerDelegate <NSObject>

@optional
- (void)icsPreviewController:(EKICSPreviewController *)arg1 importDidImportEvents:(NSArray *)arg2;
- (void)icsPreviewControllerImportDidFail:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerImportDidStart:(EKICSPreviewController *)arg1;
- (void)icsPreviewControllerWantsDismissal:(EKICSPreviewController *)arg1;
@end

