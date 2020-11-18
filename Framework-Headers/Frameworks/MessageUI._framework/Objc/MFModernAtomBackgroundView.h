//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MFModernAtomView;

@interface MFModernAtomBackgroundView : UIView
{
    UIView *_selectedView;
    unsigned long long _selectionStyle;
    UIView *_separatorView;
    MFModernAtomView *_hostAtomView;
    int _separatorStyle;
    BOOL _selected;
    double _scalingFactor;
}

@property (nonatomic) MFModernAtomView *hostAtomView; // @synthesize hostAtomView=_hostAtomView;
@property (nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property (readonly, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property (nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;

- (struct UIEdgeInsets)_backgroundBleedArea;
- (id)_chevronImage;
- (void)_setSelectionStyle:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (double)separatorWidth;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 style:(unsigned long long)arg3;
- (void)tintColorDidChange;

@end

