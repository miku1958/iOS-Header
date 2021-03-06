//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/_PKColorPickerViewDelegate-Protocol.h>

@class UIColor, _PKColorPickerView;
@protocol PKColorPickerDelegate;

@interface PKColorPicker : UIViewController <_PKColorPickerViewDelegate>
{
    id<PKColorPickerDelegate> _delegate;
    _PKColorPickerView *_colorPickerView;
}

@property (strong, nonatomic) _PKColorPickerView *colorPickerView; // @synthesize colorPickerView=_colorPickerView;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (weak, nonatomic) id<PKColorPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIColor *selectedColor;

+ (id)_representableColorForColor:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_colorPickerView;
- (void)_colorPickerViewDidChangeSelectedColor:(id)arg1;
- (void)_colorPickerViewUserDidTouchUpInside:(id)arg1;
- (void)_setInitialColorForSpringLoading:(id)arg1;
- (void)_setSelectedColorForPoint:(struct CGPoint)arg1;
- (id)init;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

