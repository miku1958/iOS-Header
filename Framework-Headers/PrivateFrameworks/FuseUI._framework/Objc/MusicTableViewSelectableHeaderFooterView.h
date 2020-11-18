//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MusicTableView, UIColor, UIView;

@interface MusicTableViewSelectableHeaderFooterView : UITableViewHeaderFooterView
{
    UIView *_bottomHairlineView;
    long long _highlightOrSelectionChangeTransactionsCount;
    UIView *_highlightOverlayView;
    BOOL _lastHighlightOrSelectionChangeWasAnimated;
    UIView *_topHairlineView;
    BOOL _highlighted;
    BOOL _selected;
    BOOL _showsBottomSeparator;
    BOOL _showsTopSeparator;
    UIColor *_separatorColor;
    UIColor *_selectionTintColor;
    struct UIEdgeInsets _musicSeparatorInset;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (readonly, nonatomic) MusicTableView *parentTableView;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (strong, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property (strong, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property (nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_musicSeparatorInset;
@property (nonatomic) BOOL showsBottomSeparator; // @synthesize showsBottomSeparator=_showsBottomSeparator;
@property (nonatomic) BOOL showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;

- (void).cxx_destruct;
- (id)_effectiveHighlightOverlayBackgroundColor;
- (void)_updateBackgroundColorAnimated:(BOOL)arg1;
- (void)beginHighlightOrSelectionChangeTransaction;
- (void)endHighlightOrSelectionChangeTransaction;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setFloating:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
