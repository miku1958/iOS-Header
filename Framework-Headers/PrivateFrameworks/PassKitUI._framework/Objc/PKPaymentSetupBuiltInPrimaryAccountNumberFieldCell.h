//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell
{
    BOOL _showsCameraCaptureButton;
    UIButton *_cameraCaptureButton;
}

@property (readonly, strong, nonatomic) UIButton *cameraCaptureButton; // @synthesize cameraCaptureButton=_cameraCaptureButton;
@property (nonatomic) BOOL showsCameraCaptureButton; // @synthesize showsCameraCaptureButton=_showsCameraCaptureButton;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setEnabled:(BOOL)arg1;
- (void)setPaymentSetupField:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;

@end

