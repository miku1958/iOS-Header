//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/PKToolPickerObserver-Protocol.h>

@class PKToolPicker, UIColor;

@protocol PKToolPickerObserverPrivate <PKToolPickerObserver>

@optional
- (void)_toolPicker:(PKToolPicker *)arg1 didChangeColor:(UIColor *)arg2;
- (void)_toolPickerDidChangePosition:(PKToolPicker *)arg1;
@end
