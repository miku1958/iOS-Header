//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SKUIScrollingTabBarBackgroundView;
@protocol SKUIScrollingTabBarPaletteDelegate;

@interface SKUIScrollingTabBarPalette : UIView
{
    BOOL _attached;
    BOOL _tabBarBackgroundExtendsBehindPalette;
    UIView *_contentView;
    double _paletteHeight;
    id<SKUIScrollingTabBarPaletteDelegate> _delegate;
    SKUIScrollingTabBarBackgroundView *_backgroundView;
}

@property (nonatomic, getter=isAttached) BOOL attached; // @synthesize attached=_attached;
@property (readonly, nonatomic, getter=_backgroundView) SKUIScrollingTabBarBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<SKUIScrollingTabBarPaletteDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double paletteHeight; // @synthesize paletteHeight=_paletteHeight;
@property (nonatomic) BOOL tabBarBackgroundExtendsBehindPalette; // @synthesize tabBarBackgroundExtendsBehindPalette=_tabBarBackgroundExtendsBehindPalette;

- (void).cxx_destruct;
- (void)_setAttached:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;

@end

