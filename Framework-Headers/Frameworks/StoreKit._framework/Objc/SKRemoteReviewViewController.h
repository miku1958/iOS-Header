//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientReviewViewController-Protocol.h>

@class NSString, SKStoreReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController>
{
    SKStoreReviewViewController *_reviewViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SKStoreReviewViewController *reviewViewController; // @synthesize reviewViewController=_reviewViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

@end

