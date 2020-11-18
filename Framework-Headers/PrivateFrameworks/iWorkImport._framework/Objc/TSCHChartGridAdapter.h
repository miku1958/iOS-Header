//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class NSString, TSCHChartGrid;

__attribute__((visibility("hidden")))
@interface TSCHChartGridAdapter : NSObject <NSFastEnumeration>
{
    TSCHChartGrid *mGrid;
    unsigned long long mIndex;
}

@property (readonly, nonatomic) TSCHChartGrid *grid; // @synthesize grid=mGrid;
@property (strong, nonatomic) NSString *name;

- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithChartGrid:(id)arg1 index:(unsigned long long)arg2;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id *)valuesAtIndexes:(struct _NSRange)arg1;

@end

