//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDContainerLayout.h>

#import <SilexText/TSDWrappable-Protocol.h>

@class NSMutableArray, NSString, TSDBezierPath, TSDWrapPolygon;

@interface STContainerLayout : TSDContainerLayout <TSDWrappable>
{
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
    NSMutableArray *_oldchildLayouts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *oldchildLayouts; // @synthesize oldchildLayouts=_oldchildLayouts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalLayouts;
- (BOOL)allowsConnections;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)childLayoutCreated:(id)arg1;
- (id)childrenForLayout;
- (void)dealloc;
- (void)dragBy:(struct CGPoint)arg1;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)arg1;
- (id)i_exteriorTextWrap;
- (id)i_externalWrapPath;
- (void)i_invalidateWrap;
- (id)i_wrapPath;
- (void)invalidate;
- (void)invalidateExteriorWrap;
- (void)invalidateParentForWrap;
- (BOOL)isHTMLWrap;
- (void)parentDidChange;
- (void)processChangedProperty:(int)arg1;
- (void)setGeometry:(id)arg1;
- (BOOL)supportsInspectorPositioning;
- (void)updateChildrenFromInfo;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)wrapPolygon;
- (int)wrapType;

@end

