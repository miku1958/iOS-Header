//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeToolsUI/PTUIRowTableViewCell.h>

#import <PrototypeToolsUI/PTUINumericKeypadDelegate-Protocol.h>
#import <PrototypeToolsUI/UITextFieldDelegate-Protocol.h>

@class NSString;

@interface PTUIEditRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate, UITextFieldDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)cellStyleForRow:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)numericKeypadDidUpdateValue:(id)arg1;
- (void)numericKeypadWillDismiss:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textForValue:(id)arg1;
- (void)updateDisplayedValue;
- (id)valueForText:(id)arg1;

@end

