//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class TLKLabel, TLKStackView;

__attribute__((visibility("hidden")))
@interface TLKSelectableGridButton : UIButton
{
    BOOL _customHighlight;
    TLKLabel *_topLabel;
    TLKLabel *_bottomLabel;
    TLKStackView *_stackView;
}

@property (strong, nonatomic) TLKLabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property (nonatomic) BOOL customHighlight;
@property (strong, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property (strong, nonatomic) TLKLabel *topLabel; // @synthesize topLabel=_topLabel;

+ (id)selectableGridButton;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)tlk_updateForAppearance:(id)arg1;

@end

