//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSMutableDictionary, UIImageView, UIView;

@interface GKHeaderWithUnderlineView : UICollectionReusableView
{
    BOOL _underlineHasRightMargin;
    BOOL _isPinned;
    BOOL _didSetupConstraints;
    UIView *_underlineView;
    UIImageView *_shadowView;
    NSMutableDictionary *_metrics;
    NSArray *_gutterConstraints;
    double _leadingMargin;
    double _trailingMargin;
    UIView *_pinnedBackdropView;
}

@property (nonatomic) BOOL didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property (strong, nonatomic) NSArray *gutterConstraints; // @synthesize gutterConstraints=_gutterConstraints;
@property (nonatomic) BOOL isPinned; // @synthesize isPinned=_isPinned;
@property (nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property (strong, nonatomic) NSMutableDictionary *metrics; // @synthesize metrics=_metrics;
@property (strong, nonatomic) UIView *pinnedBackdropView; // @synthesize pinnedBackdropView=_pinnedBackdropView;
@property (strong, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property (nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property (nonatomic) BOOL underlineHasRightMargin; // @synthesize underlineHasRightMargin=_underlineHasRightMargin;
@property (strong, nonatomic) UIView *underlineView; // @synthesize underlineView=_underlineView;

+ (void)initialize;
+ (id)macMetrics;
+ (id)padMetrics;
+ (id)phoneMetrics;
+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)applyLayoutAttributes:(id)arg1;
- (BOOL)drawsUnderline;
- (void)establishConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pinningStateChangedTo:(BOOL)arg1;
- (void)updateConstraints;
- (void)updateGutterConstraints;

@end

