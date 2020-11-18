//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUStorePageViewController.h>

@class ACAccount, NSDictionary, NSString, NSURL, SUMescalSession;

@interface SUAccountViewController : SUStorePageViewController
{
    BOOL _failed;
    long long _style;
    NSURL *_accountURL;
    SUMescalSession *_mescalSession;
    long long _mescalState;
    NSString *_primingSignature;
    NSDictionary *_tidHeaders;
    ACAccount *_account;
}

@property (readonly, nonatomic, getter=_mescalSession) SUMescalSession *_mescalSession; // @synthesize _mescalSession;
@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (id)_latestAccountViewController;
- (void).cxx_destruct;
- (id)_URLByRemovingBlacklistedParametersWithURL:(id)arg1;
- (id)_authenticationQueryParametersForStyle:(long long)arg1;
- (id)_bagKeyForStyle:(long long)arg1;
- (void)_closeMescalSession;
- (void)_didEnterBackground:(id)arg1;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2;
- (BOOL)_shouldUseWebViewFastPath;
- (id)copyArchivableContext;
- (void)enqueueFetchOperation;
- (void)handleFailureWithError:(id)arg1;
- (id)init;
- (id)initWithExternalAccountURL:(id)arg1;
- (id)newFetchOperation;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id *)arg3;
- (BOOL)shouldSignRequests;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
