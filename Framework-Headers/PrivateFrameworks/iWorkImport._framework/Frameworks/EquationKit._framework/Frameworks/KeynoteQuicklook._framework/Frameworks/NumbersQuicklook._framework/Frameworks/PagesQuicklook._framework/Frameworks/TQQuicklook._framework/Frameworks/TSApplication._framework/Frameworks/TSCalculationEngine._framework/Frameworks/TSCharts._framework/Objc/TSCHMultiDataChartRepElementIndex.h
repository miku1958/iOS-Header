//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying>
{
    unsigned long long mSeriesIndex;
    unsigned long long mValueIndex;
}

@property (readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
@property (readonly, nonatomic) unsigned long long valueIndex; // @synthesize valueIndex=mValueIndex;

+ (id)repElementIndexWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSeriesIndex:(unsigned long long)arg1 valueIndex:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)seriesIndexSet;
- (id)valueIndexSet;

@end

