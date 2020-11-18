//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUIActivation/NSObject-Protocol.h>

@class AFUISiriSetupViewController, NSURL;

@protocol AFUISiriSetupViewControllerDelegate <NSObject>
- (void)disableSiriActivationRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (void)dismissSiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (void)openSiriRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (BOOL)siriSetupViewController:(AFUISiriSetupViewController *)arg1 openURL:(NSURL *)arg2;
- (void)siriSetupViewControllerDidChangeVisibility:(AFUISiriSetupViewController *)arg1;
@end
