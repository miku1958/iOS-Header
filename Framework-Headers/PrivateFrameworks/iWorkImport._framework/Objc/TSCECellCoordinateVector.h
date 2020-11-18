//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSCECellCoordinateVector : NSObject
{
    vector_38b190b0 _cellCoordinates;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCellCoordinate:(struct TSUCellCoord)arg1;
- (vector_38b190b0 *)cellCoordinates;
- (unordered_set_c5f37819)cellCoordinatesSet;
- (id)init;
- (id)initWithArchive:(const struct CellCoordinateVectorArchive *)arg1;
- (void)removeAllCellCoordinates;
- (void)saveToArchive:(struct CellCoordinateVectorArchive *)arg1;

@end
