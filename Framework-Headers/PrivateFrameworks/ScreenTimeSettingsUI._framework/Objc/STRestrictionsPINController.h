//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSRestrictionsPINController.h>

@protocol STRestrictionsPINControllerDelegate;

@interface STRestrictionsPINController : PSRestrictionsPINController
{
}

@property (weak, nonatomic) id<STRestrictionsPINControllerDelegate> pinDelegate; // @dynamic pinDelegate;

- (void)_setOptionsTitle:(id)arg1 optionsHandler:(CDUnknownBlockType)arg2;
- (id)pinInstructionsPrompt;
- (void)recoveryAuthenticationFailed:(id)arg1;
- (void)recoveryAuthenticationSucceededForPasscode:(id)arg1;
- (void)setPIN:(id)arg1;
- (BOOL)validatePIN:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
