//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInputSwitcherTableCell.h>

@class UIInputSwitcherSegmentControl;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell
{
    UIInputSwitcherSegmentControl *_segmentControl;
}

@property (readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl; // @synthesize segmentControl=_segmentControl;

+ (struct CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUsesDarkTheme:(BOOL)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;

@end

