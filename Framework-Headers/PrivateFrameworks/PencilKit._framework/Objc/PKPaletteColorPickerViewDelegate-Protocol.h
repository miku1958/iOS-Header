//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKPaletteColorPickerView;

@protocol PKPaletteColorPickerViewDelegate <NSObject>
- (void)colorPickerDidChangeSelectedColor:(PKPaletteColorPickerView *)arg1;

@optional
- (BOOL)colorPickerShouldDisplayColorSelection:(PKPaletteColorPickerView *)arg1;
@end
