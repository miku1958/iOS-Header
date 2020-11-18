//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFPasscodeInputView.h>

#import <SetupAssistantUI/PSPasscodeFieldDelegate-Protocol.h>

@class NSString, PSPasscodeField;

@interface BFFSimplePasscodeInputView : BFFPasscodeInputView <PSPasscodeFieldDelegate>
{
    BOOL _limitCharactersToNumbers;
    PSPasscodeField *_passcodeField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL limitCharactersToNumbers; // @synthesize limitCharactersToNumbers=_limitCharactersToNumbers;
@property (strong, nonatomic) PSPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 numberOfEntryFields:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)passcode;
- (id)passcodeDisplayView;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeField:(id)arg1 shouldInsertText:(id)arg2;
- (void)setPasscode:(id)arg1;

@end

