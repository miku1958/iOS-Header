//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/NSObject-Protocol.h>

@class SKUIPassbookLoader, UIViewController;

@protocol SKUIPassbookLoaderDelegate <NSObject>
- (UIViewController *)presentationViewControllerForPassbookLoader:(SKUIPassbookLoader *)arg1;

@optional
- (void)passbookLoaderDidFinish:(SKUIPassbookLoader *)arg1;
@end
