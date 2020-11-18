//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UITraitCollection, UIView, UIViewController;
@protocol _UISheetLayoutInfoDelegate;

__attribute__((visibility("hidden")))
@interface _UISheetLayoutInfo : NSObject
{
    struct {
        unsigned int minimumTopInset:1;
        unsigned int maximumWidth:1;
        unsigned int preferredSize:1;
        unsigned int depthLevel:1;
        unsigned int bottomAttached:1;
        unsigned int percentFullScreen:1;
        unsigned int floatingUntransformedFrame:1;
        unsigned int bottomAttachedUntransformedFrame:1;
        unsigned int fullHeightUntransformedFrame:1;
        unsigned int stackAlignmentFrame:1;
        unsigned int dismissOffset:1;
        unsigned int activeDetents:1;
        unsigned int rubberBandExtentBeyondMinimumOffset:1;
        unsigned int rubberBandExtentBeyondMaximumOffset:1;
        unsigned int currentOffset:1;
        unsigned int percentPresented:1;
        unsigned int anyDescendantDragging:1;
        unsigned int untransformedFrame:1;
        unsigned int cornerRadii:1;
        unsigned int transform:1;
        unsigned int percentDimmedFromOffset:1;
        unsigned int percentDimmed:1;
        unsigned int shadowOpacity:1;
        unsigned int alpha:1;
        unsigned int interactionEnabled:1;
        unsigned int shouldPresentedViewControllerControlStatusBarAppearance:1;
        unsigned int shouldDimmingIgnoreTouches:1;
        unsigned int dimmedPassthroughViews:1;
        unsigned int grabberAlpha:1;
    } _clean;
    BOOL __bottomAttached;
    BOOL __anyDescendantDragging;
    BOOL __interactionEnabled;
    BOOL __shouldPresentedViewControllerControlStatusBarAppearance;
    BOOL __shouldDimmingIgnoreTouches;
    BOOL __wantsFullScreen;
    BOOL __wantsBottomAttached;
    BOOL __wantsBottomAttachedInCompactHeight;
    BOOL __widthFollowsPreferredContentSizeWhenBottomAttached;
    BOOL __presented;
    BOOL __shouldScaleDownBehindDescendants;
    BOOL __reduceMotionEnabled;
    BOOL __hosting;
    BOOL __shouldDismissWhenTappedOutside;
    BOOL __dragging;
    BOOL __wantsGrabber;
    BOOL __draggingAndDismissing;
    double __minimumTopInset;
    double __maximumWidth;
    double __depthLevel;
    double __percentFullScreen;
    double __dismissOffset;
    long long __indexOfCurrentActiveDetent;
    long long __indexOfActiveDimmingDetent;
    double __maximumNonDismissDetentOffset;
    double __rubberBandExtentBeyondMinimumOffset;
    double __rubberBandExtentBeyondMaximumOffset;
    double __currentOffset;
    double __percentPresented;
    double __percentDimmedFromOffset;
    double __percentDimmed;
    double __confinedPercentDimmed;
    double __shadowOpacity;
    double __alpha;
    double __grabberAlpha;
    double __magicShadowOpacity;
    NSArray *__dimmedPassthroughViews;
    UIViewController *__presentingViewController;
    UIViewController *__presentedViewController;
    UIView *__containerView;
    UITraitCollection *__containerTraitCollection;
    long long __mode;
    long long __indexOfCurrentDetent;
    long long __indexOfLastUndimmedDetent;
    NSArray *__passthroughViews;
    double __latestUserChosenOffset;
    double __tearOffset;
    double __dismissCornerRadius;
    _UISheetLayoutInfo *__parentLayoutInfo;
    _UISheetLayoutInfo *__childLayoutInfo;
    double __confinedPercentLightened;
    id<_UISheetLayoutInfoDelegate> __delegate;
    NSArray *__reversedDetents;
    NSMutableArray *__mutableActiveDetentValues;
    NSMutableArray *__mutableActiveReversedDetentIndexes;
    struct CGSize __preferredSize;
    struct CGRect __floatingUntransformedFrame;
    struct CGRect __bottomAttachedUntransformedFrame;
    struct CGRect __fullHeightUntransformedFrame;
    struct CGRect __stackAlignmentFrame;
    struct CGRect __untransformedFrame;
    struct UIRectCornerRadii __cornerRadii;
    struct CGRect __containerBounds;
    struct UIEdgeInsets __containerSafeAreaInsets;
    struct CGRect __sourceFrame;
    struct CGRect __keyboardFrame;
    struct CGRect __dismissSourceFrame;
    struct CGAffineTransform __transform;
}

@property (readonly, nonatomic) NSArray *_activeDetentValues;
@property (readonly, nonatomic) NSArray *_activeReversedDetentIndexes;
@property (readonly, nonatomic) double _alpha; // @synthesize _alpha=__alpha;
@property (readonly, nonatomic, getter=_isAnyDescendantDragging) BOOL _anyDescendantDragging; // @synthesize _anyDescendantDragging=__anyDescendantDragging;
@property (readonly, nonatomic, getter=_isBottomAttached) BOOL _bottomAttached; // @synthesize _bottomAttached=__bottomAttached;
@property (readonly, nonatomic) struct CGRect _bottomAttachedUntransformedFrame; // @synthesize _bottomAttachedUntransformedFrame=__bottomAttachedUntransformedFrame;
@property (strong, nonatomic, setter=_setChildSheetLayoutInfo:) _UISheetLayoutInfo *_childLayoutInfo; // @synthesize _childLayoutInfo=__childLayoutInfo;
@property (readonly, nonatomic) double _confinedPercentDimmed; // @synthesize _confinedPercentDimmed=__confinedPercentDimmed;
@property (readonly, nonatomic) double _confinedPercentLightened; // @synthesize _confinedPercentLightened=__confinedPercentLightened;
@property (nonatomic, setter=_setContainerBounds:) struct CGRect _containerBounds; // @synthesize _containerBounds=__containerBounds;
@property (nonatomic, setter=_setContainerSafeAreaInsets:) struct UIEdgeInsets _containerSafeAreaInsets; // @synthesize _containerSafeAreaInsets=__containerSafeAreaInsets;
@property (strong, nonatomic, setter=_setContainerTraitCollection:) UITraitCollection *_containerTraitCollection; // @synthesize _containerTraitCollection=__containerTraitCollection;
@property (strong, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property (readonly, nonatomic) struct UIRectCornerRadii _cornerRadii; // @synthesize _cornerRadii=__cornerRadii;
@property (readonly, nonatomic) double _currentOffset; // @synthesize _currentOffset=__currentOffset;
@property (weak, nonatomic) id<_UISheetLayoutInfoDelegate> _delegate; // @synthesize _delegate=__delegate;
@property (readonly, nonatomic) double _depthLevel; // @synthesize _depthLevel=__depthLevel;
@property (strong, nonatomic, setter=_setDetents:) NSArray *_detents;
@property (readonly, nonatomic) NSArray *_dimmedPassthroughViews; // @synthesize _dimmedPassthroughViews=__dimmedPassthroughViews;
@property (nonatomic, setter=_setDismissCornerRadius:) double _dismissCornerRadius; // @synthesize _dismissCornerRadius=__dismissCornerRadius;
@property (readonly, nonatomic) double _dismissOffset; // @synthesize _dismissOffset=__dismissOffset;
@property (nonatomic, setter=_setDismissSourceFrame:) struct CGRect _dismissSourceFrame; // @synthesize _dismissSourceFrame=__dismissSourceFrame;
@property (nonatomic, getter=_isDragging, setter=_setDragging:) BOOL _dragging; // @synthesize _dragging=__dragging;
@property (nonatomic, getter=_isDraggingAndDismissing, setter=_setDraggingAndDismissing:) BOOL _draggingAndDismissing; // @synthesize _draggingAndDismissing=__draggingAndDismissing;
@property (readonly, nonatomic) struct CGRect _floatingUntransformedFrame; // @synthesize _floatingUntransformedFrame=__floatingUntransformedFrame;
@property (readonly, nonatomic) struct CGRect _fullHeightUntransformedFrame; // @synthesize _fullHeightUntransformedFrame=__fullHeightUntransformedFrame;
@property (readonly, nonatomic) double _grabberAlpha; // @synthesize _grabberAlpha=__grabberAlpha;
@property (nonatomic, getter=_isHosting, setter=_setHosting:) BOOL _hosting; // @synthesize _hosting=__hosting;
@property (readonly, nonatomic) long long _indexOfActiveDimmingDetent; // @synthesize _indexOfActiveDimmingDetent=__indexOfActiveDimmingDetent;
@property (readonly, nonatomic) long long _indexOfCurrentActiveDetent; // @synthesize _indexOfCurrentActiveDetent=__indexOfCurrentActiveDetent;
@property (nonatomic, setter=_setIndexOfCurrentDetent:) long long _indexOfCurrentDetent; // @synthesize _indexOfCurrentDetent=__indexOfCurrentDetent;
@property (nonatomic, setter=_setIndexOfLastUndimmedDetent:) long long _indexOfLastUndimmedDetent; // @synthesize _indexOfLastUndimmedDetent=__indexOfLastUndimmedDetent;
@property (readonly, nonatomic, getter=_isInteractionEnabled) BOOL _interactionEnabled; // @synthesize _interactionEnabled=__interactionEnabled;
@property (nonatomic, setter=_setKeyboardFrame:) struct CGRect _keyboardFrame; // @synthesize _keyboardFrame=__keyboardFrame;
@property (nonatomic, setter=_setLatestUserChosenOffset:) double _latestUserChosenOffset; // @synthesize _latestUserChosenOffset=__latestUserChosenOffset;
@property (readonly, nonatomic) double _magicShadowOpacity; // @synthesize _magicShadowOpacity=__magicShadowOpacity;
@property (readonly, nonatomic) double _maximumNonDismissDetentOffset; // @synthesize _maximumNonDismissDetentOffset=__maximumNonDismissDetentOffset;
@property (readonly, nonatomic) double _maximumWidth; // @synthesize _maximumWidth=__maximumWidth;
@property (readonly, nonatomic) double _minimumTopInset; // @synthesize _minimumTopInset=__minimumTopInset;
@property (nonatomic, setter=_setMode:) long long _mode; // @synthesize _mode=__mode;
@property (readonly, nonatomic) NSMutableArray *_mutableActiveDetentValues; // @synthesize _mutableActiveDetentValues=__mutableActiveDetentValues;
@property (readonly, nonatomic) NSMutableArray *_mutableActiveReversedDetentIndexes; // @synthesize _mutableActiveReversedDetentIndexes=__mutableActiveReversedDetentIndexes;
@property (weak, nonatomic, setter=_setParentSheetLayoutInfo:) _UISheetLayoutInfo *_parentLayoutInfo; // @synthesize _parentLayoutInfo=__parentLayoutInfo;
@property (strong, nonatomic, setter=_setPassthroughViews:) NSArray *_passthroughViews; // @synthesize _passthroughViews=__passthroughViews;
@property (readonly, nonatomic) double _percentDimmed; // @synthesize _percentDimmed=__percentDimmed;
@property (readonly, nonatomic) double _percentDimmedFromOffset; // @synthesize _percentDimmedFromOffset=__percentDimmedFromOffset;
@property (readonly, nonatomic) double _percentFullScreen; // @synthesize _percentFullScreen=__percentFullScreen;
@property (readonly, nonatomic) double _percentPresented; // @synthesize _percentPresented=__percentPresented;
@property (readonly, nonatomic) struct CGSize _preferredSize; // @synthesize _preferredSize=__preferredSize;
@property (nonatomic, getter=_isPresented, setter=_setPresented:) BOOL _presented; // @synthesize _presented=__presented;
@property (strong, nonatomic) UIViewController *_presentedViewController; // @synthesize _presentedViewController=__presentedViewController;
@property (weak, nonatomic) UIViewController *_presentingViewController; // @synthesize _presentingViewController=__presentingViewController;
@property (nonatomic, getter=_isReduceMotionEnabled, setter=_setReduceMotionEnabled:) BOOL _reduceMotionEnabled; // @synthesize _reduceMotionEnabled=__reduceMotionEnabled;
@property (strong, nonatomic, setter=_setReversedDetents:) NSArray *_reversedDetents; // @synthesize _reversedDetents=__reversedDetents;
@property (nonatomic, setter=_setReversedIndexOfCurrentDetent:) long long _reversedIndexOfCurrentDetent;
@property (readonly, nonatomic) long long _reversedIndexOfLastUndimmedDetent;
@property (readonly, nonatomic) double _rubberBandExtentBeyondMaximumOffset; // @synthesize _rubberBandExtentBeyondMaximumOffset=__rubberBandExtentBeyondMaximumOffset;
@property (readonly, nonatomic) double _rubberBandExtentBeyondMinimumOffset; // @synthesize _rubberBandExtentBeyondMinimumOffset=__rubberBandExtentBeyondMinimumOffset;
@property (readonly, nonatomic) BOOL _scalesDownBehindDescendants;
@property (readonly, nonatomic) double _shadowOpacity; // @synthesize _shadowOpacity=__shadowOpacity;
@property (readonly, nonatomic) BOOL _shouldDimmingIgnoreTouches; // @synthesize _shouldDimmingIgnoreTouches=__shouldDimmingIgnoreTouches;
@property (nonatomic, setter=_setShouldDismissWhenTappedOutside:) BOOL _shouldDismissWhenTappedOutside; // @synthesize _shouldDismissWhenTappedOutside=__shouldDismissWhenTappedOutside;
@property (readonly, nonatomic) BOOL _shouldPresentedViewControllerControlStatusBarAppearance; // @synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance;
@property (nonatomic, setter=_setShouldScaleDownBehindDescendants:) BOOL _shouldScaleDownBehindDescendants; // @synthesize _shouldScaleDownBehindDescendants=__shouldScaleDownBehindDescendants;
@property (nonatomic, setter=_setSourceFrame:) struct CGRect _sourceFrame; // @synthesize _sourceFrame=__sourceFrame;
@property (readonly, nonatomic) struct CGRect _stackAlignmentFrame; // @synthesize _stackAlignmentFrame=__stackAlignmentFrame;
@property (nonatomic, setter=_setTearOffset:) double _tearOffset; // @synthesize _tearOffset=__tearOffset;
@property (readonly, nonatomic) struct CGAffineTransform _transform; // @synthesize _transform=__transform;
@property (readonly, nonatomic) struct CGRect _untransformedFrame; // @synthesize _untransformedFrame=__untransformedFrame;
@property (nonatomic, setter=_setWantsBottomAttached:) BOOL _wantsBottomAttached; // @synthesize _wantsBottomAttached=__wantsBottomAttached;
@property (nonatomic, setter=_setWantsBottomAttachedInCompactHeight:) BOOL _wantsBottomAttachedInCompactHeight; // @synthesize _wantsBottomAttachedInCompactHeight=__wantsBottomAttachedInCompactHeight;
@property (nonatomic, setter=_setWantsFullScreen:) BOOL _wantsFullScreen; // @synthesize _wantsFullScreen=__wantsFullScreen;
@property (nonatomic, setter=_setWantsGrabber:) BOOL _wantsGrabber; // @synthesize _wantsGrabber=__wantsGrabber;
@property (nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached; // @synthesize _widthFollowsPreferredContentSizeWhenBottomAttached=__widthFollowsPreferredContentSizeWhenBottomAttached;

- (void).cxx_destruct;
- (void)_invalidatePreferredSize;
- (void)_layout;
- (id)init;

@end

