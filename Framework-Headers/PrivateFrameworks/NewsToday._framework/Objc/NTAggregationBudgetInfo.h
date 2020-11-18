//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NTPBSectionSlotCostInfo;

@interface NTAggregationBudgetInfo : NSObject <NSCopying>
{
    BOOL _respectMinMaxLimit;
    BOOL _allowSectionTitles;
    NTPBSectionSlotCostInfo *_sectionSlotCostInfo;
    unsigned long long _embedsLimit;
    double _slotsLimit;
}

@property (nonatomic) BOOL allowSectionTitles; // @synthesize allowSectionTitles=_allowSectionTitles;
@property (nonatomic) unsigned long long embedsLimit; // @synthesize embedsLimit=_embedsLimit;
@property (nonatomic) BOOL respectMinMaxLimit; // @synthesize respectMinMaxLimit=_respectMinMaxLimit;
@property (copy, nonatomic) NTPBSectionSlotCostInfo *sectionSlotCostInfo; // @synthesize sectionSlotCostInfo=_sectionSlotCostInfo;
@property (nonatomic) double slotsLimit; // @synthesize slotsLimit=_slotsLimit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
