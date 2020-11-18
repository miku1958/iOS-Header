//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class VUIContextMenuCardViewLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIContextMenuCardView : UIView
{
    VUIContextMenuCardViewLayout *_layout;
    VUILabel *_titleTextView;
    VUILabel *_subtitleTextView;
    _TVImageView *_badgeView;
    _TVImageView *_coverImageView;
}

@property (strong, nonatomic) _TVImageView *badgeView; // @synthesize badgeView=_badgeView;
@property (strong, nonatomic) _TVImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property (strong, nonatomic) VUIContextMenuCardViewLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) VUILabel *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property (strong, nonatomic) VUILabel *titleTextView; // @synthesize titleTextView=_titleTextView;

+ (id)configureViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
- (struct CGSize)_iOS_layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
