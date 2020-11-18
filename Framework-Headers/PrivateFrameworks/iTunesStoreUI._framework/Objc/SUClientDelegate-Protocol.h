//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class NSArray, NSSet, NSURL, SSDownloadManager, SSDownloadQueue, SUClient, UIViewController;

@protocol SUClientDelegate <NSObject>
- (BOOL)client:(SUClient *)arg1 presentModalViewController:(UIViewController *)arg2 animated:(BOOL)arg3;

@optional
- (BOOL)client:(SUClient *)arg1 openInternalURL:(NSURL *)arg2;
- (BOOL)client:(SUClient *)arg1 presentAccountViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (BOOL)client:(SUClient *)arg1 presentComposeReviewViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (SSDownloadManager *)downloadManagerForClient:(SUClient *)arg1 downloadKinds:(NSArray *)arg2;
- (SSDownloadQueue *)downloadQueueForClient:(SUClient *)arg1 downloadKinds:(NSSet *)arg2;
- (UIViewController *)topViewControllerForClient:(SUClient *)arg1;
@end
