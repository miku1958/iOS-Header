//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDLayout.h>

@class TSDImageLayout, TSDInfoGeometry, TSDPathSource;

@interface TSDMaskLayout : TSDLayout
{
    struct {
        unsigned int path:1;
        unsigned int tightPathBounds:1;
    } mMaskInvalidFlags;
    struct CGPath *mCachedPath;
    struct CGPath *mCachedPathNoScale;
    struct CGRect mCachedTightPathBounds;
    struct CGRect mCachedTightPathBoundsNoScale;
    double mPathScale;
    double mOriginalPathScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    BOOL mScalingInMaskMode;
}

@property (readonly, nonatomic) TSDImageLayout *imageLayout;
@property (nonatomic) double pathScale; // @synthesize pathScale=mPathScale;

- (void).cxx_destruct;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (id)dependentLayouts;
- (id)infoGeometry;
- (id)initWithInfo:(id)arg1;
- (void)invalidate;
- (void)invalidatePath;
- (id)maskInfo;
- (struct CGPath *)p_cachedPath;
- (struct CGPath *)p_cachedPathNoScale;
- (struct CGRect)p_cachedTightPathBounds;
- (struct CGRect)p_cachedTightPathBoundsNoScale;
- (void)p_calculateCachedPathIfNecessary;
- (void)p_calculateTightPathBoundsIfNecessary;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (struct CGPath *)path;
- (struct CGRect)pathBounds;
- (id)pathSource;
- (BOOL)shouldBeIncludedInParentFrameForCulling;

@end

