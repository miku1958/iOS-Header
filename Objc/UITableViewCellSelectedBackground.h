//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView
{
    long long _selectionStyle;
    UIColor *_multiselectBackgroundColor;
    UIColor *_selectionTintColor;
    UIColor *_noneStyleBackgroundColor;
    UIVisualEffectView *_selectionEffectsView;
    BOOL _multiselect;
}

@property (nonatomic, getter=isMultiselect) BOOL multiselect;
@property (strong, nonatomic) UIColor *multiselectBackgroundColor; // @synthesize multiselectBackgroundColor=_multiselectBackgroundColor;
@property (strong, nonatomic) UIColor *noneStyleBackgroundColor; // @synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor;
@property (copy, nonatomic) NSArray *selectionEffects;
@property (nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property (strong, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;

- (void).cxx_destruct;
- (BOOL)_canDrawContent;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

