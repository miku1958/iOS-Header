//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class LAUIPearlGlyphView, NSSet, SBUICAPackageView, _UILegibilitySettings;

@interface SBUIProudLockIconView : UIView
{
    long long _state;
    _UILegibilitySettings *_legibilitySettings;
    SBUICAPackageView *_lockView;
    NSSet *_imageLayers;
    LAUIPearlGlyphView *_lazy_pearlGlyphView;
}

@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)_activeViewForState:(long long)arg1;
- (void)_forEachLayerInHierarchy:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (id)_pearlGlyphView;
- (void)_transitionToState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

