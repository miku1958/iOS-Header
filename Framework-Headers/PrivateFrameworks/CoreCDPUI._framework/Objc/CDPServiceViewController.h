//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CoreCDPUI/CDPServiceInterface-Protocol.h>

@interface CDPServiceViewController : UIViewController <CDPServiceInterface>
{
    BOOL _inlineMode;
    UIViewController *_contentViewController;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
- (void)offsetForCurrentKeyboard:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
