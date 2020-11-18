//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MAElementFilter.h>

@class KGEdgeFilter, MARelation;

@interface MAEdgeFilter : MAElementFilter
{
}

@property (readonly, nonatomic) MARelation *anyDirectionRelation;
@property (readonly, nonatomic) MARelation *inRelation;
@property (readonly, nonatomic) KGEdgeFilter *kgEdgeFilter;
@property (readonly, nonatomic) MARelation *outRelation;

+ (BOOL)scanInstance:(out id *)arg1 withScanner:(id)arg2;
- (void)appendVisualStringToString:(id)arg1;
- (BOOL)matchesEdge:(id)arg1;

@end
