//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <UIKit/_UIShareInvitationViewControllerHost-Protocol.h>

@class NSString, _UISharingViewController;

__attribute__((visibility("hidden")))
@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost>
{
    _UISharingViewController *_publicController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UISharingViewController *publicController; // @synthesize publicController=_publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)_dismissViewController;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_shareDidChange;
- (void)_shareWasMadePrivate;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
