//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DOCTagColorPicker, UIGestureRecognizer;

@interface DOCTagEditorColorPickerCell : UICollectionViewCell
{
    DOCTagColorPicker *_colorPickerView;
}

@property (readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer;
@property (strong, nonatomic) DOCTagColorPicker *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property (readonly, nonatomic) long long selectedColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

