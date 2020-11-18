//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView;

@interface SKUICollectionViewCell : UICollectionViewCell
{
    UIView *_bottomBorderView;
    long long _position;
    UIView *_leftBorderView;
    UIView *_rightBorderView;
    UIView *_topBorderView;
    long long _separatorStyle;
    UIColor *_separatorColor;
    struct UIEdgeInsets _separatorWidths;
    struct UIEdgeInsets _separatorInsets;
}

@property (strong, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property (nonatomic) struct UIEdgeInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
@property (nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (nonatomic) struct UIEdgeInsets separatorWidths; // @synthesize separatorWidths=_separatorWidths;
@property (nonatomic) BOOL showsCellSeparators;

- (void).cxx_destruct;
- (void)_setPosition:(long long)arg1;
- (BOOL)_showsBottomBorder;
- (BOOL)_showsLeftBorder;
- (BOOL)_showsRightBorder;
- (BOOL)_showsTopBorder;
- (void)_updateBorderVisibility;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end
