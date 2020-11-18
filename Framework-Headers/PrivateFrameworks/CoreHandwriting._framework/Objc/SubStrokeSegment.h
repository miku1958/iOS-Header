//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber;

@interface SubStrokeSegment : NSObject
{
    BOOL _isFullStroke;
    NSNumber *_segmentID;
    unsigned long long _startStrokeIndex;
    unsigned long long _startPointIndex;
    unsigned long long _endStrokeIndex;
    unsigned long long _endPointIndex;
    NSMutableArray *_relatedSegmentIDs;
    struct CGRect _segmentBounds;
}

@property (nonatomic) unsigned long long endPointIndex; // @synthesize endPointIndex=_endPointIndex;
@property (nonatomic) unsigned long long endStrokeIndex; // @synthesize endStrokeIndex=_endStrokeIndex;
@property (nonatomic) BOOL isFullStroke; // @synthesize isFullStroke=_isFullStroke;
@property (strong, nonatomic) NSMutableArray *relatedSegmentIDs; // @synthesize relatedSegmentIDs=_relatedSegmentIDs;
@property (nonatomic) struct CGRect segmentBounds; // @synthesize segmentBounds=_segmentBounds;
@property (strong, nonatomic) NSNumber *segmentID; // @synthesize segmentID=_segmentID;
@property (nonatomic) unsigned long long startPointIndex; // @synthesize startPointIndex=_startPointIndex;
@property (nonatomic) unsigned long long startStrokeIndex; // @synthesize startStrokeIndex=_startStrokeIndex;

+ (struct CGRect)boundingBoxFromSegmentID:(unsigned long long)arg1 toSegmentID:(unsigned long long)arg2 withSegments:(id)arg3 withSourceDrawing:(id)arg4;
+ (void)computeRelatedSegments:(id)arg1 withDelayedSegments:(id)arg2;
+ (id)generateSubStrokeSegmentsFromDrawing:(id)arg1 withSegmentationPoints:(id)arg2 extractDelayedStrokeIDs:(set_6c38b8e1)arg3 extractedDelayedSegments:(id *)arg4;
+ (unsigned long long)indexForSegmentID:(id)arg1 fromSegments:(id)arg2;
- (void)dealloc;
- (id)initWithSegmentID:(id)arg1 startStrokeIndex:(unsigned long long)arg2 startPointIndex:(unsigned long long)arg3 endStrokeIndex:(unsigned long long)arg4 endPointIndex:(unsigned long long)arg5 segmentBounds:(struct CGRect)arg6 isFullStroke:(BOOL)arg7;

@end

