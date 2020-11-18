//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, SFSafariViewController;

@protocol SFSafariViewControllerDelegate <NSObject>

@optional
- (NSArray *)safariViewController:(SFSafariViewController *)arg1 activityItemsForURL:(NSURL *)arg2 title:(NSString *)arg3;
- (void)safariViewController:(SFSafariViewController *)arg1 didCompleteInitialLoad:(BOOL)arg2;
- (void)safariViewControllerDidFinish:(SFSafariViewController *)arg1;
@end

