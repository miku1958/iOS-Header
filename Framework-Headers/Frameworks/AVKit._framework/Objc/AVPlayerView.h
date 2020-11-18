//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerViewControllerContentView, UIScreen;

@interface AVPlayerView : UIView
{
    BOOL _needsInitialLayout;
    AVPlayerViewControllerContentView *_contentView;
    UIScreen *_primaryScreen;
}

@property (readonly, nonatomic) AVPlayerViewControllerContentView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) BOOL needsInitialLayout; // @synthesize needsInitialLayout=_needsInitialLayout;
@property (weak, nonatomic) UIScreen *primaryScreen; // @synthesize primaryScreen=_primaryScreen;

- (void).cxx_destruct;
- (void)beginManagingContentView;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;
- (void)layoutSubviews;
- (void)setClipsToBounds:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

