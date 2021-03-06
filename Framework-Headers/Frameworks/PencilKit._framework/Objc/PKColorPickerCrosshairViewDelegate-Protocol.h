//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class PKColorPickerCrosshairView, UIColor;

@protocol PKColorPickerCrosshairViewDelegate
- (UIColor *)colorForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1 frame:(struct CGRect)arg2;
- (void)colorPickerCrosshairViewShouldUpdateColor:(PKColorPickerCrosshairView *)arg1 point:(struct CGPoint)arg2;
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(UIColor *)arg1;
- (unsigned long long)cornerPositionForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1;
- (struct CGRect)frameForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1;
@end

