//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHUnretainedParent-Protocol.h>

@class TSCHLegendModelCache;

@interface TSCHLegendViewCache : NSObject <TSCHUnretainedParent>
{
    unsigned long long mCellCount;
    unsigned long long mNumberOfRows;
    unsigned long long mNumberOfColumns;
    struct CGSize mFinalSize;
    TSCHLegendModelCache *mModelCache;
    struct CGPoint *mCellOrigins;
}

@property (readonly) struct CGSize legendSize; // @synthesize legendSize=mFinalSize;
@property (readonly) unsigned long long numberOfColumns; // @synthesize numberOfColumns=mNumberOfColumns;
@property (readonly) unsigned long long numberOfRows; // @synthesize numberOfRows=mNumberOfRows;

- (void).cxx_destruct;
- (void)clearParent;
- (void)dealloc;
- (id)initWithLegendModelCache:(id)arg1 legendWidth:(double)arg2;
- (struct CGPoint)originForCell:(id)arg1;

@end

