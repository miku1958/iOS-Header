//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class SXAction, SXScrollViewController, UIViewController;

@protocol SXScrollViewControllerDelegate <NSObject>

@optional
- (double)navigationBarHeightForScrollViewController:(SXScrollViewController *)arg1;
- (void)scrollViewController:(SXScrollViewController *)arg1 commitPreviewController:(UIViewController *)arg2 forAction:(SXAction *)arg3;
- (void)scrollViewController:(SXScrollViewController *)arg1 enableNavigation:(BOOL)arg2;
- (UIViewController *)scrollViewController:(SXScrollViewController *)arg1 previewViewControllerForAction:(SXAction *)arg2;
- (void)scrollViewController:(SXScrollViewController *)arg1 triggerAction:(SXAction *)arg2;
- (void)scrollViewControllerDidLayoutContent:(SXScrollViewController *)arg1;
- (void)scrollViewControllerDidScroll:(SXScrollViewController *)arg1;
- (void)scrollViewControllerDidStopScrolling:(SXScrollViewController *)arg1;
- (void)scrollViewControllerDismissFullscreen:(SXScrollViewController *)arg1;
- (void)scrollViewControllerRequestsFullscreen:(SXScrollViewController *)arg1;
- (void)scrollViewControllerWillLayoutContent:(SXScrollViewController *)arg1;
- (double)toolBarHeightForScrollViewController:(SXScrollViewController *)arg1;
@end

