//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionHeaderView : UICollectionReusableView
{
    VUITextLayout *_titleLayout;
    VUILabel *_titleLabel;
    VUISeparatorView *_separatorView;
}

@property (strong, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property (strong, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;

- (void).cxx_destruct;
- (void)configureHeaderViewWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

