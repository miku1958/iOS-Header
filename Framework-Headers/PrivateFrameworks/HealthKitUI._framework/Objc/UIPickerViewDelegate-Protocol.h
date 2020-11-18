//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKitUI/NSObject-Protocol.h>

@class NSAttributedString, NSString, UIPickerView, UIView;

@protocol UIPickerViewDelegate <NSObject>

@optional
- (NSAttributedString *)pickerView:(UIPickerView *)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(UIPickerView *)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(UIPickerView *)arg1 rowHeightForComponent:(long long)arg2;
- (NSString *)pickerView:(UIPickerView *)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (UIView *)pickerView:(UIPickerView *)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(UIView *)arg4;
- (double)pickerView:(UIPickerView *)arg1 widthForComponent:(long long)arg2;
@end

