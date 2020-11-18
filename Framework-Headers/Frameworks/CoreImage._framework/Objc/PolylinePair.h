//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Polyline;

__attribute__((visibility("hidden")))
@interface PolylinePair : NSObject
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
    struct CGPoint normVtop;
    struct CGPoint axisV;
    struct CGPoint normVbottom;
    double sdelta;
    float maxsize;
    struct CGRect xyBoundsRect;
    struct CGPath *boundsPath;
    Polyline *_top;
    Polyline *_bottom;
}

@property struct CGPoint axisV; // @synthesize axisV;
@property (readonly, strong) Polyline *bottom; // @synthesize bottom=_bottom;
@property (readonly) struct CGPath *boundsPath; // @synthesize boundsPath;
@property struct CGPoint normVbottom; // @synthesize normVbottom;
@property struct CGPoint normVtop; // @synthesize normVtop;
@property double s0; // @synthesize s0;
@property double s1; // @synthesize s1;
@property (readonly, strong) Polyline *top; // @synthesize top=_top;

- (void)accomodatePoint:(struct CGPoint)arg1;
- (void)bridgeGapsLinear;
- (void)constructBezierWithToleranceTop:(float)arg1 bottom:(float)arg2;
- (id)createTopBottomRegion;
- (void)dealloc;
- (void)expandWithToleranceTop:(float)arg1 bottom:(float)arg2;
- (void)extrapolateAndJoinTopAndBottom;
- (id)initWithMaxsize:(float)arg1 segmentDelta:(float)arg2 andAxis:(struct CGPoint)arg3;
- (int)npoints;
- (struct CGRect)xyBoundsRect;

@end

