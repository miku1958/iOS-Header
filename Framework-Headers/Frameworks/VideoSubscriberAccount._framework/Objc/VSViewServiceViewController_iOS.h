//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSViewServiceViewController.h>

#import <VideoSubscriberAccount/UINavigationControllerDelegate-Protocol.h>

@class NSString, UINavigationController;

__attribute__((visibility("hidden")))
@interface VSViewServiceViewController_iOS : VSViewServiceViewController <UINavigationControllerDelegate>
{
    UINavigationController *_navController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UINavigationController *navController; // @synthesize navController=_navController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_navControllerWithRootviewController:(id)arg1;
- (void)_perfomShowViewControllerRequest:(id)arg1;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;

@end

