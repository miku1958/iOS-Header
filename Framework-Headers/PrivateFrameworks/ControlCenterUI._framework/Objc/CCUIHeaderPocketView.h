//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCUIStatusBar, MTMaterialView, SBUIChevronView;
@protocol CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView
{
    MTMaterialView *_headerBackgroundView;
    UIView *_headerLineView;
    SBUIChevronView *_headerChevronView;
    CCUIStatusBar *_statusBar;
    id<CCUIStatusBarDelegate> _statusBarDelegate;
    unsigned long long _mode;
    double _backgroundAlpha;
    double _contentAlpha;
    double _contentAlphaMultiplier;
    struct UIEdgeInsets _edgeInsets;
    struct CGAffineTransform _contentTransform;
}

@property (nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property (nonatomic) unsigned long long chevronState; // @dynamic chevronState;
@property (nonatomic) struct CGAffineTransform compactScaleTransform; // @dynamic compactScaleTransform;
@property (nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property (nonatomic) double contentAlphaMultiplier; // @synthesize contentAlphaMultiplier=_contentAlphaMultiplier;
@property (readonly, nonatomic) struct CGRect contentBounds; // @dynamic contentBounds;
@property (nonatomic) struct CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (readonly, nonatomic) CCUIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property (weak, nonatomic) id<CCUIStatusBarDelegate> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;

- (void).cxx_destruct;
- (void)_updateAlpha;
- (void)_updateContentTransform;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
