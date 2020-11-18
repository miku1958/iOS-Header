//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphOptimizedEdge.h>

@interface PGGraphPOIEdge : PGGraphOptimizedEdge
{
    unsigned int _poiIsImproved:1;
    unsigned int _poiIsSpecial:1;
    float _weight;
}

@property (nonatomic) BOOL poiIsImproved; // @synthesize poiIsImproved=_poiIsImproved;
@property (readonly, nonatomic) BOOL poiIsSpecial; // @synthesize poiIsSpecial=_poiIsSpecial;
@property (nonatomic) float weight; // @synthesize weight=_weight;

+ (id)filter;
- (unsigned short)domain;
- (id)edgeDescription;
- (BOOL)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toPOINode:(id)arg2 weight:(float)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;
- (id)label;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;

@end
