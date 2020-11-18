//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference;

__attribute__((visibility("hidden")))
@interface EDPivotArea : NSObject
{
    BOOL mGrandCol;
    BOOL mGrandRow;
    BOOL mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;
- (void).cxx_destruct;
- (id)description;
- (BOOL)grandCol;
- (BOOL)grandRow;
- (id)init;
- (id)offset;
- (BOOL)outline;
- (id)references;
- (void)setGrandCol:(BOOL)arg1;
- (void)setGrandRow:(BOOL)arg1;
- (void)setOffset:(id)arg1;
- (void)setOutline:(BOOL)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
