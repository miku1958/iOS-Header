//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UIImage, UIImageView;

@interface EKCalendarChooserCell : EKUIConstrainedFontsTableViewCell
{
    BOOL _showCheckmarksOnLeft;
    BOOL _checked;
    BOOL _shouldAnimate;
    BOOL _showsColorDot;
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UIImageView *_checkmarkView;
}

@property (nonatomic) BOOL checked; // @synthesize checked=_checked;
@property (nonatomic) BOOL shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property (nonatomic) BOOL showCheckmarksOnLeft; // @synthesize showCheckmarksOnLeft=_showCheckmarksOnLeft;
@property (nonatomic) BOOL showsColorDot; // @synthesize showsColorDot=_showsColorDot;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setColorDotHighlightedImage:(id)arg1;
- (void)setColorDotImage:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowCheckmarksOnLeft:(BOOL)arg1 animated:(BOOL)arg2;
- (double)textLeftIndent;

@end
