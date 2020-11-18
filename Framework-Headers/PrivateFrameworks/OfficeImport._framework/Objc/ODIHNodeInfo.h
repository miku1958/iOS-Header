//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIHNodeInfo : NSObject
{
    int mTreeDepth;
    int mRow;
    struct ODIHRange mXRange;
    BOOL mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector *mXRanges;
}

- (void)addToXOffsetRelativeToParent:(float)arg1;
- (BOOL)connectToVerticalSide;
- (void)dealloc;
- (int)extraRowsBetweenParentAndSelf;
- (id)init;
- (int)row;
- (void)setConnectToVerticalSide:(BOOL)arg1;
- (void)setExtraRowsBetweenParentAndSelf:(int)arg1;
- (void)setRow:(int)arg1;
- (void)setTreeDepth:(int)arg1;
- (void)setXOffsetRelativeToParent:(float)arg1;
- (void)setXRange:(struct ODIHRange)arg1;
- (int)treeDepth;
- (float)xOffsetRelativeToParent;
- (struct ODIHRange)xRange;
- (struct ODIHRangeVector *)xRanges;

@end
