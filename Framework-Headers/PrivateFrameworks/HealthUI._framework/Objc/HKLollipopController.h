//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKInteractiveChartAnnotationView, NSArray, NSDate, NSMutableArray, UIView;
@protocol HKLollipopDelegate;

@interface HKLollipopController : NSObject
{
    BOOL _centerLollipopVertically;
    BOOL _noAnimationVisibility;
    HKInteractiveChartAnnotationView *_annotationView;
    id<HKLollipopDelegate> _delegate;
    UIView *_parentView;
    UIView *_fieldView;
    NSMutableArray *_extensionViews;
    NSArray *_lastSelectionLocation;
    NSDate *_lastFirstLollipopDate;
}

@property (readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property (nonatomic) BOOL centerLollipopVertically; // @synthesize centerLollipopVertically=_centerLollipopVertically;
@property (readonly, weak, nonatomic) id<HKLollipopDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableArray *extensionViews; // @synthesize extensionViews=_extensionViews;
@property (strong, nonatomic) UIView *fieldView; // @synthesize fieldView=_fieldView;
@property (strong, nonatomic) NSDate *lastFirstLollipopDate; // @synthesize lastFirstLollipopDate=_lastFirstLollipopDate;
@property (copy, nonatomic) NSArray *lastSelectionLocation; // @synthesize lastSelectionLocation=_lastSelectionLocation;
@property (nonatomic) BOOL noAnimationVisibility; // @synthesize noAnimationVisibility=_noAnimationVisibility;
@property (strong, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;

+ (BOOL)pointSelectionContextsHaveUserInfo:(id)arg1;
- (void).cxx_destruct;
- (void)_bringViewsToFront;
- (id)_lollipopAnnotationColor;
- (id)_lollipopExtensionColor;
- (double)_lollipopExtensionLength;
- (double)_lollipopExtensionWidth;
- (id)_lollipopFieldColor;
- (void)_positionAnnotationViewWithStickLocations:(id)arg1;
- (void)_rebuildExtensionsWithStickLocations:(id)arg1;
- (BOOL)_selectionHasMoved:(id)arg1;
- (void)_setAlpha:(double)arg1;
- (void)_setExtensionViewBackgrounds;
- (void)_setHidden:(BOOL)arg1;
- (id)_stickLocationsFromPointContexts:(id)arg1;
- (id)firstLollipopDate;
- (id)initWithAnnotationDataSource:(id)arg1 parentView:(id)arg2 delegate:(id)arg3;
- (BOOL)isVisible;
- (void)setInvisibleAnimated:(BOOL)arg1;
- (void)setVisibleWithRect:(struct CGRect)arg1 pointContexts:(id)arg2 animated:(BOOL)arg3;
- (void)updateWithPointContexts:(id)arg1;

@end

