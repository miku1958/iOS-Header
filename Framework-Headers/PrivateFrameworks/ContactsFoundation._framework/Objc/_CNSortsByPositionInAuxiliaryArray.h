//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface _CNSortsByPositionInAuxiliaryArray : NSObject
{
    NSDictionary *_ranks;
    NSArray *_auxiliaryValues;
    CDUnknownBlockType _transform;
}

@property (readonly, copy, nonatomic) NSArray *auxiliaryValues; // @synthesize auxiliaryValues=_auxiliaryValues;
@property (readonly, copy, nonatomic) NSDictionary *ranks; // @synthesize ranks=_ranks;
@property (readonly, copy, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;

+ (CDUnknownBlockType)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (CDUnknownBlockType)comparator;
- (id)initWithAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;
- (void)prepareRankingIndex;
- (id)rankForObject:(id)arg1;

@end

