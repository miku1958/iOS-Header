//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXArrayChangeDetails.h>

@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails
{
}

- (BOOL)hasIncrementalChanges;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)arg1;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)arg1;

@end
