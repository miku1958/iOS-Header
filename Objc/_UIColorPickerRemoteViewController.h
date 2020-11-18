//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/_UIColorPickerRemoteViewControllerHost-Protocol.h>

@class NSString;
@protocol _UIColorPickerRemoteViewControllerHost;

@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerRemoteViewControllerHost>
{
    id<_UIColorPickerRemoteViewControllerHost> _delegate;
}

@property (weak, nonatomic) id<_UIColorPickerRemoteViewControllerHost> _delegate; // @synthesize _delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_colorPickerDidFinish;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)arg1;
- (void)_pickerDidSelectColor:(id)arg1 colorspace:(id)arg2 isVolatile:(BOOL)arg3;
- (void)_pickerDidShowEyedropper;

@end

