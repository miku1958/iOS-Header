//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSTables/NSObject-Protocol.h>

@class NSArray, TSCETrackedReference;

@protocol TSCEReferenceTrackerDelegate <NSObject>
- (NSArray *)cellRangeWasInserted:(const struct TSCERangeRef *)arg1;
- (void)referencedCellWasModified:(TSCETrackedReference *)arg1;
- (BOOL)shouldRewriteOnCellMerge;
- (BOOL)shouldRewriteOnRangeMove;
- (BOOL)shouldRewriteOnSort;
- (BOOL)shouldRewriteOnTableIDReassignment;
- (BOOL)shouldRewriteOnTectonicShift;
- (BOOL)shouldRewriteOnTranspose;
@end

