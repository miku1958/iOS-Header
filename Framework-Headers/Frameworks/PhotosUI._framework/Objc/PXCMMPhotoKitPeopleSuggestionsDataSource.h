//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSource.h>

@class NSObject, PXCMMPhotoKitPeopleSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMPhotoKitPeopleSuggestionsDataSource : PXCMMPeopleSuggestionsDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXCMMPhotoKitPeopleSuggestionsDataSourceState *__state;
}

@property (readonly, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state; // @synthesize _state=__state;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)initWithState:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;

@end

