//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SUCellConfiguration, SUItemOfferButton, SUTableCellContentView, UIBezierPath, UIColor;

@interface SUTableCell : UITableViewCell
{
    UIColor *_bottomBorderColor;
    SUTableCellContentView *_configurationView;
    unsigned int _hideHighlight:1;
    SUItemOfferButton *_itemOfferButton;
    CDStruct_3e55db63 _position;
    UIColor *_topBorderColor;
    long long _editState;
}

@property (strong, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property (nonatomic) int clipCorners;
@property (readonly, nonatomic) UIBezierPath *clippingPath;
@property (strong, nonatomic) SUCellConfiguration *configuration;
@property (nonatomic) BOOL drawAsDisabled;
@property (nonatomic) long long editState; // @synthesize editState=_editState;
@property (nonatomic) BOOL highlightsOnlyContentView;
@property (readonly, strong, nonatomic) SUItemOfferButton *itemOfferButton;
@property (nonatomic) CDStruct_3e55db63 position; // @synthesize position=_position;
@property (nonatomic) BOOL showHighlight;
@property (strong, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
@property (nonatomic) BOOL usesSubviews;

- (BOOL)_canDrawContent;
- (id)copyPurchaseAnimationView;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;

@end
