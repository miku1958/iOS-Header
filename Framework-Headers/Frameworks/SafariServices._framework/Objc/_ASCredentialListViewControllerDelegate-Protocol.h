//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class ASPasswordCredential, _ASCredentialListViewController;

@protocol _ASCredentialListViewControllerDelegate <NSObject>

@optional
- (void)credentialListViewController:(_ASCredentialListViewController *)arg1 didFinishWithCredential:(ASPasswordCredential *)arg2 completion:(void (^)(void))arg3;
@end

