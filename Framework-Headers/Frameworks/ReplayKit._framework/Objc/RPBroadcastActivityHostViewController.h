//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ReplayKit/RPBroadcastActivityCommunicationHostProtocol-Protocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>
{
    RPBroadcastActivityViewController *_broadcastActivityViewController;
}

@property (weak, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController; // @synthesize broadcastActivityViewController=_broadcastActivityViewController;

- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4;
- (long long)modalPresentationStyle;
- (unsigned long long)popoverArrowDirection;
- (struct CGRect)popoverControllerSourceRect;
- (oneway void)presentationInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;

@end

