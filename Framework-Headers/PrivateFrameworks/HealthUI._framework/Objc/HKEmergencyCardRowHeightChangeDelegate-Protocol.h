//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKEmergencyCardTableItem, UIView;

@protocol HKEmergencyCardRowHeightChangeDelegate
- (void)tableItem:(HKEmergencyCardTableItem *)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect)arg3 inView:(UIView *)arg4;
- (void)tableItemDidBeginEditing:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect)arg2 inView:(UIView *)arg3;
- (void)tableItemDidChangeSelection:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect)arg2 inView:(UIView *)arg3;
@end

