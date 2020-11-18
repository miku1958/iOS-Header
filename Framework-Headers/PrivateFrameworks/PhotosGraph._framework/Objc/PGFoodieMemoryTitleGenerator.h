//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphAddressNode, PGGraphBusinessNode, PGGraphLocationCityNode, PGGraphNode, PGGraphPersonNode;
@protocol PGGraphLocationOrArea;

@interface PGFoodieMemoryTitleGenerator : PGTitleGenerator
{
    long long _type;
    PGGraphLocationCityNode *_cityNode;
    PGGraphBusinessNode *_businessNode;
    PGGraphPersonNode *_personNode;
    PGGraphAddressNode *_addressNode;
    PGGraphNode<PGGraphLocationOrArea> *_tripLocationNode;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)_timeTitleForTripAndWeekend;
- (id)_typeString;
- (id)initWithMomentNodes:(id)arg1 addressNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 businessNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 cityNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 personNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 tripLocationNode:(id)arg2;

@end
