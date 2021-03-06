//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSLoadingViewController-Protocol.h>

@class NSString, UIActivityIndicatorView;
@protocol VSLoadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSLoadingViewController_iOS : UIViewController <VSLoadingViewController>
{
    BOOL _cancellationAllowed;
    id<VSLoadingViewControllerDelegate> _delegate;
    UIActivityIndicatorView *_loadingIndicator;
}

@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

