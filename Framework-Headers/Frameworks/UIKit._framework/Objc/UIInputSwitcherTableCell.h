//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIInputSwitcherTableCellBackgroundView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableCell : UITableViewCell
{
    BOOL _usesDarkTheme;
    BOOL _usesStraightLeftEdge;
    BOOL _first;
    BOOL _last;
    struct UIEdgeInsets _interactiveInsets;
}

@property (strong, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView; // @dynamic backgroundView;
@property (nonatomic, getter=isFirst) BOOL first; // @synthesize first=_first;
@property (nonatomic) struct UIEdgeInsets interactiveInsets; // @synthesize interactiveInsets=_interactiveInsets;
@property (nonatomic, getter=isLast) BOOL last; // @synthesize last=_last;
@property (nonatomic) BOOL usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property (nonatomic) BOOL usesStraightLeftEdge; // @synthesize usesStraightLeftEdge=_usesStraightLeftEdge;

+ (id)reuseIdentifier;
- (void)_updateRoundedCorners;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;

@end

