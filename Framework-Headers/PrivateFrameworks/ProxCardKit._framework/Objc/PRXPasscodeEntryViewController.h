//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class PRXPasscodeEntryView;

@interface PRXPasscodeEntryViewController : PRXCardContentViewController
{
    PRXPasscodeEntryView *_passcodeEntryView;
    long long _numberOfDigits;
    CDUnknownBlockType _textChangeHandler;
    CDUnknownBlockType _textEntryCompletionHandler;
}

@property (nonatomic) long long numberOfDigits; // @synthesize numberOfDigits=_numberOfDigits;
@property (readonly, nonatomic) PRXPasscodeEntryView *passcodeEntryView; // @synthesize passcodeEntryView=_passcodeEntryView;
@property (copy, nonatomic) CDUnknownBlockType textChangeHandler; // @synthesize textChangeHandler=_textChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType textEntryCompletionHandler; // @synthesize textEntryCompletionHandler=_textEntryCompletionHandler;

- (void).cxx_destruct;
- (void)_textDidChange:(id)arg1;
- (void)_updatePasscodeEntryView;
- (void)didCompleteTextEntry:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
