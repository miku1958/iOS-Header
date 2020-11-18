//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDShapeLayout.h>

@class NSObject, TSDConnectionLineInfo, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout, TSUBezierPath;
@protocol TSDInfo;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineAbstractLayout : TSDShapeLayout
{
    TSUBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDLayout *mConnectedFrom;
    TSDLayout *mConnectedTo;
    NSObject<TSDInfo> *mConnectedFromInfo;
    NSObject<TSDInfo> *mConnectedToInfo;
    TSUBezierPath *mCachedFromWrapPath;
    TSUBezierPath *mCachedToWrapPath;
    double mCachedFromOutset;
    double mCachedToOutset;
    TSUBezierPath *mCachedFromOutsetWrapPath;
    TSUBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    BOOL mValidConnections;
    BOOL mVisibleLine;
    BOOL mValidLine;
    struct CGPoint mLooseEndPosition;
    struct CGPoint mAcumulatedDrag;
    BOOL mUseResizePoints[3];
    struct CGPoint mResizeControlPoints[3];
    BOOL mUseDynamicOutsets;
    double mDynamicOutsetFrom;
    double mDynamicOutsetTo;
    unsigned long long mDynamicOutsetType;
}

@property (weak, nonatomic) TSDLayout *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
@property (weak, nonatomic) NSObject<TSDInfo> *connectedFromInfo; // @synthesize connectedFromInfo=mConnectedFromInfo;
@property (readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
@property (weak, nonatomic) TSDLayout *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property (weak, nonatomic) NSObject<TSDInfo> *connectedToInfo; // @synthesize connectedToInfo=mConnectedToInfo;
@property (readonly, nonatomic) TSDConnectionLineInfo *connectionLineInfo;
@property (nonatomic) double dynamicOutsetFrom; // @synthesize dynamicOutsetFrom=mDynamicOutsetFrom;
@property (nonatomic) double dynamicOutsetTo; // @synthesize dynamicOutsetTo=mDynamicOutsetTo;
@property (nonatomic) unsigned long long dynamicOutsetType; // @synthesize dynamicOutsetType=mDynamicOutsetType;
@property (readonly, nonatomic) double outsetFrom;
@property (readonly, nonatomic) double outsetTo;
@property (readonly, nonatomic, getter=isStraightLine) BOOL straightLine;
@property (nonatomic) BOOL useDynamicOutsets; // @synthesize useDynamicOutsets=mUseDynamicOutsets;
@property (readonly, nonatomic) BOOL validLine; // @synthesize validLine=mValidLine;

- (void).cxx_destruct;
- (id)additionalLayoutsForRepCreation;
- (struct CGRect)boundsForStandardKnobs;
- (BOOL)canBeIntersected;
- (BOOL)canEndpointsCoincide;
- (BOOL)canFlip;
- (BOOL)canResetTextAndObjectHandles;
- (void)checkConnections;
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(BOOL)arg4 isValid:(BOOL *)arg5;
- (void)connectedLayoutDisconnected:(id)arg1;
- (void)connectedLayoutInvalidated:(id)arg1;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (void)dealloc;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (void)invalidateAndCleanupConnectedLayouts;
- (void)invalidateConnections;
- (void)invalidatePath;
- (void)invalidatePosition;
- (void)invalidateSize;
- (BOOL)isDraggable;
- (BOOL)isInvisible;
- (id)layoutInfoGeometry;
- (id)p_infoForConnectingToInfo:(id)arg1;
- (BOOL)p_isConnectedToLockedObjects;
- (BOOL)p_isInfoAKeynoteMasterObject:(id)arg1;
- (void)parentDidChange;
- (id)path;
- (BOOL)pathIsLineSegment;
- (BOOL)pathIsOpen;
- (id)pathSource;
- (void)processChangedProperty:(int)arg1;
- (id)reliedOnLayouts;
- (void)removeConnections;
- (BOOL)shouldAdjustForStrokeWidthForCollabCursor;
- (BOOL)shouldDisplayGuides;
- (BOOL)shouldValidate;
- (BOOL)supportsFlipping;
- (BOOL)supportsResize;
- (BOOL)supportsRotation;
- (struct CGPoint)unclippedHeadPoint;
- (struct CGPoint)unclippedTailPoint;
- (void)updateConnectedPath;
- (int)wrapType;

@end

