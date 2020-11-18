//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShareSheet/NSObject-Protocol.h>

@class NSArray, NSError, NSString, _UIDICActivityViewController;

@protocol _UIDICActivityViewControllerDelegate <NSObject>
- (void)activityViewController:(_UIDICActivityViewController *)arg1 didFinishPerformingActivityType:(NSString *)arg2 completed:(BOOL)arg3 items:(NSArray *)arg4 error:(NSError *)arg5;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 didFinishPresentingActivityType:(NSString *)arg2;
- (NSString *)activityViewController:(_UIDICActivityViewController *)arg1 mailSubjectForActivityType:(NSString *)arg2;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 openActivityDidEndSendingToApplication:(NSString *)arg2;
- (void)activityViewController:(_UIDICActivityViewController *)arg1 openActivityWillBeginSendingToApplication:(NSString *)arg2;
@end
