//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFSafariViewControllerDelegateInternal-Protocol.h>

@class NSString, NSURL, SFAuthenticationViewController;

@interface SFAuthenticationSession : NSObject <SFSafariViewControllerDelegateInternal>
{
    NSURL *_initialURL;
    CDUnknownBlockType _completionHandler;
    SFAuthenticationViewController *_authViewController;
    NSString *_callbackURLScheme;
    BOOL _isSessionStarted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)safariViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(BOOL)arg3;
- (void)safariViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (BOOL)start;

@end

