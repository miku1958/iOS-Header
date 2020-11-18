//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class NSDictionary, NSString, UINavigationController, UIViewController;

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext
{
    NSDictionary *_overrideFirstActionSignal;
    UIViewController *_topViewControllerOnLoadStart;
    UINavigationController *_navigationController;
}

@property (weak, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (readonly, nonatomic) NSString *passwordForCreating;
@property (readonly, nonatomic) NSString *usernameForCreating;

- (void).cxx_destruct;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long *)arg3;

@end

