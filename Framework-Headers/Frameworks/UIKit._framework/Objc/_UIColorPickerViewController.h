//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIColorPickerViewController.h>

@class _UIColorPickerViewControllerConfiguration;
@protocol _UIColorPickerViewControllerDelegate;

@interface _UIColorPickerViewController : UIColorPickerViewController
{
}

@property (readonly, copy, nonatomic) _UIColorPickerViewControllerConfiguration *configuration; // @dynamic configuration;
@property (weak, nonatomic) id<_UIColorPickerViewControllerDelegate> delegate; // @dynamic delegate;

- (void)_colorPickerDidFinish;
- (void)_pickerDidSelectColor:(id)arg1;

@end
