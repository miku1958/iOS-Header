//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface Polyline : NSObject
{
    double s0;
    double s1;
    float xmax;
    float xmin;
    float ymax;
    float ymin;
    float arclength;
    double seglength;
    BOOL isempty;
    unsigned int nsegs;
    struct CGPoint axisV;
    struct CGPoint normV;
    double sdelta;
    float maxsize;
    struct CGRect xyBoundsRect;
    NSMutableData *yyData;
    struct CGPath *boundsPath;
}

@property struct CGPoint axisV; // @synthesize axisV;
@property (readonly) struct CGPath *boundsPath; // @synthesize boundsPath;
@property struct CGPoint normV; // @synthesize normV;
@property unsigned int nsegs; // @synthesize nsegs;
@property double s0; // @synthesize s0;
@property double s1; // @synthesize s1;
@property double seglength; // @synthesize seglength;
@property struct CGRect xyBoundsRect; // @synthesize xyBoundsRect;

- (void)accomodatePoint:(struct CGPoint)arg1;
- (void)bridgeGapsLinear;
- (void)bridgeGapsMinimum;
- (void)constructBezierWithToleranceOutside:(float)arg1 andInside:(float)arg2;
- (void)dealloc;
- (id)initWithMaxsize:(float)arg1 segmentDelta:(float)arg2 andAxis:(struct CGPoint)arg3;
- (void)lengthenStart:(float)arg1 end:(float)arg2;
- (BOOL)liesAbovePointX:(float)arg1 Y:(float)arg2;
- (BOOL)liesBelowPointX:(float)arg1 Y:(float)arg2;
- (void)printBounds;
- (void)printPoints;
- (void)printRect;
- (struct CGPoint)xyFromS2:(float)arg1;
- (struct CGPoint)xyFromS:(double)arg1;
- (float *)yy;

@end

