//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCollectionSearchResult.h>

@class NSArray, PSITripResult;

@interface PLTripSearchResult : PLCollectionSearchResult
{
}

@property (readonly, nonatomic) NSArray *momentUUIDs;
@property (readonly, nonatomic) PSITripResult *tripResult;

- (id)initWithGroupResult:(id)arg1 collectionResult:(id)arg2;
- (id)initWithGroupResult:(id)arg1 tripResult:(id)arg2;
- (id)subtitle;
- (unsigned long long)type;

@end

