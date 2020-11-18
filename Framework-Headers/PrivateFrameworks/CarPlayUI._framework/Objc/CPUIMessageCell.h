//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlayUI/_CPUIBaseTableCell.h>

@class NSArray, UIImageView, UILabel;

@interface CPUIMessageCell : _CPUIBaseTableCell
{
    UIImageView *_unreadImageView;
    UIImageView *_leadingGlyphView;
    UIImageView *_primaryImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_trailingLabel;
    UIImageView *_trailingImageView;
    UIImageView *_trailingGlyphView;
    NSArray *_constraints;
}

@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (strong, nonatomic) UIImageView *leadingGlyphView; // @synthesize leadingGlyphView=_leadingGlyphView;
@property (strong, nonatomic) UIImageView *primaryImageView; // @synthesize primaryImageView=_primaryImageView;
@property (strong, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property (strong, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (strong, nonatomic) UIImageView *trailingGlyphView; // @synthesize trailingGlyphView=_trailingGlyphView;
@property (strong, nonatomic) UIImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property (strong, nonatomic) UILabel *trailingLabel; // @synthesize trailingLabel=_trailingLabel;
@property (strong, nonatomic) UIImageView *unreadImageView; // @synthesize unreadImageView=_unreadImageView;

+ (double)minimumHeight;
+ (double)rowHeight;
- (void).cxx_destruct;
- (void)applyConfiguration:(id)arg1;
- (void)configureCell;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUnread:(BOOL)arg1;

@end
