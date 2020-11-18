//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SafariServices/SFWebAppRemoteViewControllerProtocol-Protocol.h>

@class NSString;
@protocol _SFWebAppViewControllerDelegate;

@interface _SFWebAppViewController : _UIRemoteViewController <SFWebAppRemoteViewControllerProtocol>
{
    id<_SFWebAppViewControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFWebAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)didChangeLoadingState:(BOOL)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2;
- (void)didFinishInitialLoad:(BOOL)arg1;
- (void)didLoadWebView;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)loadWebAppWithIdentifier:(id)arg1;
- (void)setRemoteSwipeGestureEnabled:(BOOL)arg1;
- (void)willDismissServiceViewController;
- (void)willOpenURLInHostApplication:(id)arg1;

@end

