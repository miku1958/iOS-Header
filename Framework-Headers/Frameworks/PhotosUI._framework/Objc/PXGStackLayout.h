//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

#import <PhotosUICore/PXGDataSourceDrivenLayout-Protocol.h>

@class NSString;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout>
{
    CDStruct_d97c9657 _updateFlags;
    BOOL _isUpdatingSublayouts;
    struct CGPoint *_sublayoutOriginsBeforeUpdate;
    BOOL _alignsLastSublayoutToVisibleBottomEdge;
    long long _axis;
    double _interlayoutSpacing;
    id<PXGSublayoutFaultingDelegate> _sublayoutFaultingDelegate;
    struct UIEdgeInsets _flexibleRegionInsets;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _faultInOutsets;
    struct UIEdgeInsets _faultOutOutsets;
}

@property (nonatomic) BOOL alignsLastSublayoutToVisibleBottomEdge; // @synthesize alignsLastSublayoutToVisibleBottomEdge=_alignsLastSublayoutToVisibleBottomEdge;
@property (nonatomic) long long axis; // @synthesize axis=_axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets faultInOutsets; // @synthesize faultInOutsets=_faultInOutsets;
@property (nonatomic) struct UIEdgeInsets faultOutOutsets; // @synthesize faultOutOutsets=_faultOutOutsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interlayoutSpacing; // @synthesize interlayoutSpacing=_interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate; // @synthesize sublayoutFaultingDelegate=_sublayoutFaultingDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)_updateInterlayoutSpacing;
- (void)_updateSublayouts;
- (struct UIEdgeInsets)additionalSafeAreaInsetsForSublayout:(id)arg1;
- (void)dealloc;
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;
- (struct UIEdgeInsets)flexibleRegionInsets;
- (id)init;
- (void)insertSublayoutProvider:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)invalidateAdditionalSafeAreaInsets;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)scrollSpeedRegimeDidChange;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)update;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;

@end

