//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL;
@protocol TKApplicationViewControllerDelegate;

@interface TKApplicationViewController : UIViewController
{
    NSURL *_bundleURL;
    NSString *_viewName;
    UIViewController *_childViewController;
    UIViewController *_loadingViewController;
    id<TKApplicationViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property (strong, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (weak, nonatomic) id<TKApplicationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property (readonly, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;

+ (id)applicationViewController:(id)arg1;
- (void).cxx_destruct;
- (void)didLoadViewController:(id)arg1;
- (void)dismissApplicationControllerAnimated:(BOOL)arg1;
- (BOOL)handleApplicationControllerError;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withData:(id)arg3;
- (id)initWithBundleURL:(id)arg1 loadPage:(id)arg2 withDataRequest:(id)arg3;
- (id)initWithBundleURL:(id)arg1 viewName:(id)arg2 delegate:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;

@end

