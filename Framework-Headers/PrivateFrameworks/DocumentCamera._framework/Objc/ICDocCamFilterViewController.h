//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentCamera/UIGestureRecognizerDelegate-Protocol.h>
#import <DocumentCamera/UIScrollViewDelegate-Protocol.h>

@class DCSinglePixelHorizontalLineView, DCSinglePixelVerticalLineView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UILongPressGestureRecognizer, UIScrollView, UIView;
@protocol ICDocCamFilterViewDelegate;

@interface ICDocCamFilterViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _transitioning;
    short _currentFilterType;
    double _horizontalOffset;
    double _bottomOffset;
    double _bottomContentInset;
    id<ICDocCamFilterViewDelegate> _filterViewDelegate;
    UIScrollView *_scrollView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    NSLayoutConstraint *_scrollViewTrailingConstraint;
    UIView *_backgroundView;
    DCSinglePixelVerticalLineView *_verticalLineView;
    DCSinglePixelHorizontalLineView *_horizontalLineView;
    NSArray *_layoutConstraints;
    NSMutableArray *_filterButtons;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (weak, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property (nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (nonatomic) short currentFilterType; // @synthesize currentFilterType=_currentFilterType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableArray *filterButtons; // @synthesize filterButtons=_filterButtons;
@property (weak, nonatomic) id<ICDocCamFilterViewDelegate> filterViewDelegate; // @synthesize filterViewDelegate=_filterViewDelegate;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) DCSinglePixelHorizontalLineView *horizontalLineView; // @synthesize horizontalLineView=_horizontalLineView;
@property (nonatomic) double horizontalOffset; // @synthesize horizontalOffset=_horizontalOffset;
@property (copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *scrollViewTrailingConstraint; // @synthesize scrollViewTrailingConstraint=_scrollViewTrailingConstraint;
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property (weak, nonatomic) DCSinglePixelVerticalLineView *verticalLineView; // @synthesize verticalLineView=_verticalLineView;

- (void).cxx_destruct;
- (void)applyToAll:(short)arg1;
- (void)centerContent:(BOOL)arg1 isPortrait:(BOOL)arg2;
- (void)dealloc;
- (id)filterButtonFromLocation:(struct CGPoint)arg1;
- (void)filterSelected:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)initializeFilters;
- (void)longPressGesture:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)prepareToAnimateIn:(BOOL)arg1;
- (void)setUpScrollView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateConstraints;
- (void)updateConstraintsPad;
- (void)updateConstraintsPhone;
- (void)updateScrollViewContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

