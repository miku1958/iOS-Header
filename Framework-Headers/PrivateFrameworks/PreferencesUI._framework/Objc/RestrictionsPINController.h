//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/DevicePINController.h>

@interface RestrictionsPINController : DevicePINController
{
}

+ (void)initialize;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)blockedStateKey;
- (struct __CFString *)defaultsID;
- (void)delegateUpdateToggleState;
- (struct __CFString *)failedAttemptsKey;
- (BOOL)isNumericPIN;
- (void)performActionAfterPINRemove;
- (void)performActionAfterPINSet;
- (id)pinInstructionsPromptFont;
- (BOOL)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (int)pinLength;
- (void)setPIN:(id)arg1;
- (BOOL)simplePIN;
- (id)stringsTable;
- (BOOL)validatePIN:(id)arg1;

@end

