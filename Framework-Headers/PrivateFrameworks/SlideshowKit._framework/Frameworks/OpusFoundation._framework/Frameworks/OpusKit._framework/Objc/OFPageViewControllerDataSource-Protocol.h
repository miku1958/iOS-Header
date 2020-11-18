//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class OFPageViewController, OFUIViewController;

@protocol OFPageViewControllerDataSource <NSObject>
- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerAfterViewController:(OFUIViewController *)arg2;
- (OFUIViewController *)pageViewController:(OFPageViewController *)arg1 viewControllerBeforeViewController:(OFUIViewController *)arg2;

@optional
- (long long)presentationCountForPageViewController:(OFPageViewController *)arg1;
- (long long)presentationIndexForPageViewController:(OFPageViewController *)arg1;
@end

