//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString, SBUIPasscodeEntryField;

@protocol SBUIPasscodeEntryFieldDelegate <NSObject>

@optional
- (BOOL)passcodeEntryField:(SBUIPasscodeEntryField *)arg1 shouldInsertText:(NSString *)arg2;
- (void)passcodeEntryFieldDidAcceptEntry:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(SBUIPasscodeEntryField *)arg1;
- (void)passcodeEntryFieldTextDidChange:(SBUIPasscodeEntryField *)arg1;
@end

