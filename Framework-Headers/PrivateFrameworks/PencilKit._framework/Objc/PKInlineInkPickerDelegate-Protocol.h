//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSString, PKInlineInkPicker, UIBarButtonItem, UIColor, UIViewController;

@protocol PKInlineInkPickerDelegate <NSObject>

@optional
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didChangeSizeState:(unsigned long long)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didSelectColor:(UIColor *)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 didSelectTool:(NSString *)arg2;
- (void)inlineInkPicker:(PKInlineInkPicker *)arg1 toolIndicatorWillPresent:(BOOL)arg2 animated:(BOOL)arg3;
- (UIBarButtonItem *)inlineInkPickerBarButtonItemForContentsHiddenColorPickerPresentation:(PKInlineInkPicker *)arg1;
- (struct CGRect)inlineInkPickerCenteringRectForToolIndicator:(PKInlineInkPicker *)arg1;
- (void)inlineInkPickerDidToggleRuler:(PKInlineInkPicker *)arg1;
- (struct CGRect)inlineInkPickerRectForContentsHiddenColorPickerPresentation:(PKInlineInkPicker *)arg1;
- (BOOL)inlineInkPickerShouldChangeToolColorForSelectedColor:(PKInlineInkPicker *)arg1;
- (BOOL)inlineInkPickerShouldRespondToPencilGestures:(PKInlineInkPicker *)arg1;
- (UIViewController *)viewControllerForPopoverPresentationFromInlineInkPicker:(PKInlineInkPicker *)arg1;
@end

