//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableRow : NSObject
{
    NSMutableArray *mCells;
    float mHeight;
}

- (void).cxx_destruct;
- (id)addCell;
- (id)cellAtIndex:(unsigned long long)arg1;
- (unsigned long long)cellCount;
- (id)description;
- (void)flipCellsRTL;
- (float)height;
- (id)init;
- (void)setHeight:(float)arg1;

@end

