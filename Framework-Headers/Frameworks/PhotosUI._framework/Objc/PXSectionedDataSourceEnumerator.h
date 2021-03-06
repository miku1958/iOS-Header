//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXEnumerator.h>

@class NSNumber, PXIndexPathSet, PXSectionedDataSource;

@interface PXSectionedDataSourceEnumerator : PXEnumerator
{
    NSNumber *_cachedCount;
    long long _currentPhase;
    struct PXSimpleIndexPath _lastIndexPath;
    PXSectionedDataSource *_dataSource;
    PXIndexPathSet *_indexPathSet;
    unsigned long long _enumeratedTypes;
}

@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) unsigned long long enumeratedTypes; // @synthesize enumeratedTypes=_enumeratedTypes;
@property (readonly, nonatomic) PXIndexPathSet *indexPathSet; // @synthesize indexPathSet=_indexPathSet;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath)_nextItemIndexPathFromIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)_nextSectionIndexPathFromIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)_nextSubitemIndexPathFromIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_setToInitialState;
- (void)_transitionToNextPhase;
- (unsigned long long)count;
- (id)init;
- (id)initWithDataSource:(id)arg1 indexPathSet:(id)arg2 enumeratedTypes:(unsigned long long)arg3;
- (id)nextObject;
- (void)reset;

@end

