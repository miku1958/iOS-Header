//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSTCellRegionIterating-Protocol.h>

@class NSString;

@interface TSTCellRegionColMajorIterator : NSObject <TSTCellRegionIterating>
{
    set_3ba0425c mCellRangeSet;
    CDStruct_0441cfb5 mCellID;
    CDStruct_5f1f7aa9 mBoundingCellRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (CDStruct_0441cfb5)getNext;
- (id)initWithCellRegion:(id)arg1;
- (void)terminate;

@end

