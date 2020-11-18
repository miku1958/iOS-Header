//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKGridLayoutMetrics, GKSectionMetrics, NSMutableArray, NSString;

@interface GKMetricData : NSObject
{
    GKGridLayoutMetrics *_metrics;
    unsigned long long _currentMaxVisibleItemCount;
    unsigned long long _filteredTotalItemCount;
    NSMutableArray *_headerPinnableAttributes;
    NSMutableArray *_footerPinnableAttributes;
}

@property (nonatomic) unsigned long long currentMaxVisibleItemCount; // @synthesize currentMaxVisibleItemCount=_currentMaxVisibleItemCount;
@property (nonatomic) unsigned long long filteredTotalItemCount; // @synthesize filteredTotalItemCount=_filteredTotalItemCount;
@property (strong, nonatomic) NSMutableArray *footerPinnableAttributes; // @synthesize footerPinnableAttributes=_footerPinnableAttributes;
@property (strong, nonatomic) NSMutableArray *headerPinnableAttributes; // @synthesize headerPinnableAttributes=_headerPinnableAttributes;
@property (readonly, nonatomic) NSString *layoutKey;
@property (strong, nonatomic) GKGridLayoutMetrics *metrics; // @synthesize metrics=_metrics;
@property (readonly, nonatomic) GKSectionMetrics *sectionMetrics;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addAttributes:(id)arg1 forLocation:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)localDescription;

@end
