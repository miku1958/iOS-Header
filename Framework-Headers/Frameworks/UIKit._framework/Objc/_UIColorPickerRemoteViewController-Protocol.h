//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIColor, _UIColorPickerViewControllerConfiguration;

@protocol _UIColorPickerRemoteViewController <NSObject>
- (void)_colorPickerDidFinish;
- (void)_prepareForDisplayWithCompletion:(void (^)(void))arg1;
- (void)_setConfiguration:(_UIColorPickerViewControllerConfiguration *)arg1;
- (void)_setSelectedColor:(UIColor *)arg1 colorspace:(NSString *)arg2;
@end
