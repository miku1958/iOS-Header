//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTransitLineMapModel.h>

__attribute__((visibility("hidden")))
@interface VKSelectedTransitLineMapModel : VKTransitLineMapModel
{
}

- (void)cloneSelectedItemsFromTransitLineModel:(id)arg1;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg3;
- (unsigned long long)mapLayerPosition;
- (void)setSelectedLines:(const unordered_set_6cd805f9 *)arg1;
- (void)setSelectedNodes:(const unordered_set_6cd805f9 *)arg1;

@end
