//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@interface MPStoreFollowingRequest : MPModelRequest
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)itemClass;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (Class)sectionClass;
- (void)setAllowsDeferringExpensiveProperties:(BOOL)arg1;
- (void)setItemClass:(Class)arg1;
- (void)setItemProperties:(id)arg1;
- (void)setItemSortDescriptors:(id)arg1;
- (void)setSectionClass:(Class)arg1;
- (void)setSectionProperties:(id)arg1;
- (void)setSectionSortDescriptors:(id)arg1;

@end
