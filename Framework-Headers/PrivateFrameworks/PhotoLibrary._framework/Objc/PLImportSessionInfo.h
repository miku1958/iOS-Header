//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexSet, NSMutableIndexSet;

@interface PLImportSessionInfo : NSObject
{
    NSMutableIndexSet *_importIndexes;
    NSMutableIndexSet *_importInProgressIndexes;
    NSMutableIndexSet *_importErrorIndexes;
    NSMutableIndexSet *_importCompleteIndexes;
    BOOL _importComplete;
    BOOL _importStopped;
    BOOL _importingSelection;
}

@property (readonly, strong, nonatomic) NSIndexSet *completedIndexes; // @synthesize completedIndexes=_importCompleteIndexes;
@property (readonly, strong, nonatomic) NSIndexSet *errorIndexes; // @synthesize errorIndexes=_importErrorIndexes;
@property (nonatomic) BOOL importComplete; // @synthesize importComplete=_importComplete;
@property (readonly, strong, nonatomic) NSIndexSet *importIndexes; // @synthesize importIndexes=_importIndexes;
@property (nonatomic) BOOL importStopped; // @synthesize importStopped=_importStopped;
@property (nonatomic) BOOL importingSelection; // @synthesize importingSelection=_importingSelection;
@property (readonly, strong, nonatomic) NSIndexSet *inProgressIndexes; // @synthesize inProgressIndexes=_importInProgressIndexes;

- (BOOL)_isImportCompleteForIndex:(unsigned long long)arg1;
- (void)addIndexToImport:(unsigned long long)arg1;
- (void)beginImportForIndex:(unsigned long long)arg1;
- (void)completeImportForIndex:(unsigned long long)arg1 error:(BOOL)arg2;
- (void)dealloc;
- (id)initWithImportIndexes:(id)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)shiftIndexesStartingAtIndex:(unsigned long long)arg1 by:(unsigned long long)arg2;

@end

