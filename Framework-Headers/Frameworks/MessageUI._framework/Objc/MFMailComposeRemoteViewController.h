//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <MessageUI/MFMailComposeRemoteHost-Protocol.h>

@protocol MFMailComposeRemoteViewControllerDelegate;

@interface MFMailComposeRemoteViewController : _UIRemoteViewController <MFMailComposeRemoteHost>
{
    id<MFMailComposeRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<MFMailComposeRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)bodyFinishedDrawing;
- (void)serviceCompositionFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)serviceCompositionRequestsSendWithBody:(id)arg1 recipients:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
