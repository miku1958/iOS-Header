//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, PXSectionedChangeDetailsRepository, PXSectionedDataSource;

@interface PXSectionedDataSourceManager : PXObservable
{
    NSMutableArray *_waitingConditions;
    PXSectionedDataSource *_dataSource;
    PXSectionedChangeDetailsRepository *_changeHistory;
}

@property (readonly, nonatomic) PXSectionedChangeDetailsRepository *changeHistory; // @synthesize changeHistory=_changeHistory;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;

- (void).cxx_destruct;
- (void)_reevaluateWaitingConditions;
- (void)_setDataSource:(id)arg1;
- (void)_waitingConditionDidTimeout:(id)arg1;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (id)createInitialDataSource;
- (void)didPublishChanges;
- (id)init;
- (id)mutableChangeObject;
- (id)queryObserversInterestingObjectReferences;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (void)waitForCondition:(CDUnknownBlockType)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
