//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@interface PXResultRecord : NSObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id)description;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)fetchResult;
- (id)filteredFetchResult;
- (id)includedOids;
- (id)inclusionPredicate;
- (BOOL)isCurated;
- (long long)keyAssetIndex;
- (id)keyAssetsFetchResult;
- (BOOL)reverseSortOrder;
- (BOOL)wantsCuration;

@end
