//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientComposeReviewViewController-Protocol.h>

@class NSString, SKComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController>
{
    SKComposeReviewViewController *_composeReviewViewController;
}

@property (weak, nonatomic) SKComposeReviewViewController *composeReviewViewController; // @synthesize composeReviewViewController=_composeReviewViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)promptForStarRating;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

