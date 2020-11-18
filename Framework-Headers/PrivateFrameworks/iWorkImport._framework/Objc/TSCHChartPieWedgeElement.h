//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCHChartSeries;

__attribute__((visibility("hidden")))
@interface TSCHChartPieWedgeElement : NSObject <NSCopying>
{
    struct TSCHChartPieWedgeElementLayoutSystem mLayoutSystem;
    double mRadius;
    double mMidAngle;
    double mStartAngle;
    double mEndAngle;
    double mLabelExplosion;
    double mWedgeExplosion;
    TSCHChartSeries *mSeries;
}

@property (readonly, nonatomic) double angleAtWedgeTip;
@property (readonly, nonatomic) struct CGPoint centerPoint;
@property (nonatomic) double endAngle; // @synthesize endAngle=mEndAngle;
@property (nonatomic) double labelExplosion; // @synthesize labelExplosion=mLabelExplosion;
@property (nonatomic) struct TSCHChartPieWedgeElementLayoutSystem layoutSystem; // @synthesize layoutSystem=mLayoutSystem;
@property (nonatomic) double midAngle; // @synthesize midAngle=mMidAngle;
@property (nonatomic) double radius; // @synthesize radius=mRadius;
@property (weak, nonatomic) TSCHChartSeries *series; // @synthesize series=mSeries;
@property (nonatomic) double startAngle; // @synthesize startAngle=mStartAngle;
@property (nonatomic) double wedgeExplosion; // @synthesize wedgeExplosion=mWedgeExplosion;

- (void).cxx_destruct;
- (BOOL)angleInRange:(double)arg1 startAngle:(double)arg2 endAngle:(double)arg3;
- (struct CGPoint)arcEndPoint;
- (struct CGPoint)arcStartPoint;
- (struct CGPoint)bendedLineMidpointWithStartPoint:(struct CGPoint)arg1 length:(double)arg2 shouldBeUpwards:(BOOL)arg3;
- (BOOL)calloutLineIntersectsWedgeWithStartPoint:(struct CGPoint)arg1 midPoint:(struct CGPoint)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGPoint)defaultBendedLineEndpointWithStartPoint:(struct CGPoint)arg1;
- (struct CGPoint)defaultBendedLineMidpointWithStartPoint:(struct CGPoint)arg1;
- (struct CGPoint)defaultLabelCenterPoint;
- (struct CGPoint)defaultLabelCenterPointForLabelWithSize:(struct CGSize)arg1 bended:(BOOL)arg2;
- (struct CGPoint)defaultLabelEndpointForBendedLineLabels;
- (struct CGRect)defaultLabelRectForLabelWithSize:(struct CGSize)arg1 bended:(BOOL)arg2;
- (struct CGPoint)firstHalfOfBendedLineVectorNormalizedShouldBeUpwards:(BOOL)arg1;
- (id)initWithRadius:(double)arg1 startAngle:(double)arg2 midAngle:(double)arg3 endAngle:(double)arg4 labelExplosion:(double)arg5 wedgeExplosion:(double)arg6 series:(id)arg7;
- (BOOL)isInUpperHalfOfChartWithStartPoint:(struct CGPoint)arg1;
- (BOOL)isOnLeftSideOfChart;
- (struct TSCHChartPieLabelRects)labelRectsForFirstLabelWithSize:(struct CGSize)arg1 secondLabelSize:(struct CGSize)arg2 stacked:(BOOL)arg3 stackedLabelCenterAlign:(BOOL)arg4 placeToTheSideOfPieChart:(BOOL)arg5;
- (BOOL)lineIntersectsLineWithStartPoint:(struct CGPoint)arg1 firstLineEndPoint:(struct CGPoint)arg2 secondLineStartPoint:(struct CGPoint)arg3 secondLineEndPoint:(struct CGPoint)arg4 outIntersectionPoint:(struct CGPoint *)arg5;
- (BOOL)lineIntersectsWedgeWithLineStartPoint:(struct CGPoint)arg1 lineEndPoint:(struct CGPoint)arg2;
- (struct CGPoint)midpointOnClosestEdgeToWedgeTip:(struct CGRect)arg1;
- (struct CGPoint)normalizedWedgeBisectionVector;
- (struct CGPoint)pointAlongWedgeBisectionInChartCoordinateSpaceWithFloatDistanceFromWedgeTip:(double)arg1;
- (struct CGPoint)pointAlongWedgeBisectionInChartCoordinateSpaceWithPercentDistanceFromWedgeTip:(double)arg1;
- (struct CGPoint)pointAtWedgeCircumferenceMiddleInChartCoordinateSpace;
- (struct CGPoint)pointAtWedgeTipInChartCoordinateSpace;
- (BOOL)pointWithinWedgeSpread:(struct CGPoint)arg1;
- (BOOL)pointWithinWedgeSpread:(struct CGPoint)arg1 percentage:(double)arg2;
- (void)setToChartCoordinateSpaceWithChartBodyCenterPoint:(struct CGPoint)arg1;
- (void)setToLocalCoordinateSpace;
- (BOOL)shouldUsePerpendicularBendedLineWithStartPoint:(struct CGPoint)arg1;
- (BOOL)wedgeBisectionIntersectsRect:(struct CGRect)arg1 outIntersectionPointClosestToWedgeTip:(struct CGPoint *)arg2;

@end

