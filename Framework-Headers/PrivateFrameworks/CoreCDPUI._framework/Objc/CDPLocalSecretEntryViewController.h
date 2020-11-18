//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>

#import <CoreCDPUI/DevicePINControllerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface CDPLocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate>
{
    UIViewController *_presentingViewController;
    BOOL _inlineMode;
    CDUnknownBlockType _validSecretHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inlineMode; // @synthesize inlineMode=_inlineMode;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType validSecretHandler; // @synthesize validSecretHandler=_validSecretHandler;

- (void).cxx_destruct;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)init;
- (id)pinInstructionsPrompt;
- (id)title;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

