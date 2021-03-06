//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView
{
    UIView<NTKColoringView> *_label;
    double _labelRotationInDegree;
    double _labelScale;
}

- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_editingDidEnd;
- (id)_labelFont;
- (void)_layoutLabel;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (id)init;
- (id)label;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;

@end

