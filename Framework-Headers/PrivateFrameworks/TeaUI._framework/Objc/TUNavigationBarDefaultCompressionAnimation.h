//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TUBarCompressionAnimating-Protocol.h>

@class TUAnimationFloatFunction, UINavigationBar, UIView;

@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>
{
    BOOL shouldCompressAtTop;
    BOOL _hideTitleOnTop;
    BOOL _compressTitleView;
    double topOffset;
    UIView *_titleView;
    UINavigationBar *_navigationBar;
    TUAnimationFloatFunction *_opacityFunction;
    TUAnimationFloatFunction *_scaleFunction;
    TUAnimationFloatFunction *_translateFunction;
}

@property (nonatomic) BOOL compressTitleView; // @synthesize compressTitleView=_compressTitleView;
@property (nonatomic) BOOL hideTitleOnTop; // @synthesize hideTitleOnTop=_hideTitleOnTop;
@property (readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (strong, nonatomic) TUAnimationFloatFunction *opacityFunction; // @synthesize opacityFunction=_opacityFunction;
@property (strong, nonatomic) TUAnimationFloatFunction *scaleFunction; // @synthesize scaleFunction=_scaleFunction;
@property (readonly, nonatomic) BOOL shouldCompressAtTop; // @synthesize shouldCompressAtTop;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property (nonatomic) double topOffset; // @synthesize topOffset;
@property (strong, nonatomic) TUAnimationFloatFunction *translateFunction; // @synthesize translateFunction=_translateFunction;

- (void).cxx_destruct;
- (BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2;
- (id)fetchCustomTitleView;
- (id)fetchRegularTitleView;
- (id)initWithNavigationBar:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (void)reloadWithTraitCollection:(id)arg1;
- (void)scrollViewIsAtTop:(BOOL)arg1;
- (void)updateWithPercentage:(double)arg1;

@end
