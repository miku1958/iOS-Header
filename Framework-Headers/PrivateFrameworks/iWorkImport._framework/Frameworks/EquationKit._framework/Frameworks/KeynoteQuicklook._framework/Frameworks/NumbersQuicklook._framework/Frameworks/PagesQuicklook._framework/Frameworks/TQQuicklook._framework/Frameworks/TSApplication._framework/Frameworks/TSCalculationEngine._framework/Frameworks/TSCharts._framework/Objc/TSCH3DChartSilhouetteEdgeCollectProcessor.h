//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DResource, TSCH3Dvec3DataBuffer;

@interface TSCH3DChartSilhouetteEdgeCollectProcessor : TSCH3DRetargetRenderProcessor
{
    struct EdgeDetectionParameters mEdgeDetectionParameters;
    TSCH3DResource *mVertices;
    TSCH3Dvec3DataBuffer *mEdges;
}

@property (readonly, nonatomic) TSCH3Dvec3DataBuffer *edges; // @synthesize edges=mEdges;
@property (strong, nonatomic) TSCH3DResource *vertices; // @synthesize vertices=mVertices;

- (id).cxx_construct;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (void)dealloc;
- (id)initWithEdgeDetectionParameters:(const struct EdgeDetectionParameters *)arg1;
- (id)matrix;
- (void)submit:(id)arg1;

@end

