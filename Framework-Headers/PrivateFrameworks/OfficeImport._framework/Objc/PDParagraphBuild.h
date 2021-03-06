//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild
{
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (void).cxx_destruct;
- (id)addTimeNodeData;
- (double)autoAdvanceTime;
- (int)buildLevel;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)arg1;
- (void)setBuildLevel:(int)arg1;
- (void)setIsReversedParagraphOrder:(BOOL)arg1;
- (void)setType:(int)arg1;
- (id)timeNodeDataAtIndex:(unsigned long long)arg1;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;
- (int)type;

@end

