//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

@class PSListController;

@interface PSUICarrierSpaceOptInSplashScreen : BFFSplashController
{
    CDUnknownBlockType _continueButtonAction;
    PSListController *_listController;
}

@property (copy, nonatomic) CDUnknownBlockType continueButtonAction; // @synthesize continueButtonAction=_continueButtonAction;
@property (weak, nonatomic) PSListController *listController; // @synthesize listController=_listController;

- (void).cxx_destruct;
- (void)continueButtonPressed;
- (id)initWithParent:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
