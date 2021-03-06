//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

@class NSString, STBlockingViewController;

__attribute__((visibility("hidden")))
@interface QLScreenTimeItemViewController : QLItemViewController
{
    long long _policy;
    NSString *_bundleIdentifier;
    NSString *_categoryIdentifier;
    STBlockingViewController *_blockingViewController;
}

@property (strong, nonatomic) STBlockingViewController *blockingViewController; // @synthesize blockingViewController=_blockingViewController;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property (nonatomic) long long policy; // @synthesize policy=_policy;

- (void).cxx_destruct;
- (void)_updateBlockingViewControllerWithCurrentPolicy;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (BOOL)canSwipeToDismiss;
- (void)hideBlockingViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCategoryIdentifier:(id)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showBlockingViewControllerWithPolicy:(long long)arg1;

@end

