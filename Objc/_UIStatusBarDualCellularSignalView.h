//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSLayoutConstraint, NSString, UIAccessibilityHUDItem, _UIStatusBarCellularSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDualCellularSignalView : UIView <_UIStatusBarDisplayable>
{
    _UIStatusBarCellularSignalView *_topSignalView;
    _UIStatusBarCellularSignalView *_bottomSignalView;
    long long _iconSize;
    NSLayoutConstraint *_verticalInterspaceConstraint;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property (readonly) _UIStatusBarCellularSignalView *bottomSignalView; // @synthesize bottomSignalView=_bottomSignalView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly) Class superclass;
@property (readonly) _UIStatusBarCellularSignalView *topSignalView; // @synthesize topSignalView=_topSignalView;
@property (strong, nonatomic) NSLayoutConstraint *verticalInterspaceConstraint; // @synthesize verticalInterspaceConstraint=_verticalInterspaceConstraint;
@property (readonly, nonatomic) BOOL wantsCrossfade;

+ (double)_interspaceForIconSize:(long long)arg1;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)_iconSizeDidChange;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForLastBaselineLayout;

@end

