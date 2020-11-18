//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface PUMapItem : NSObject
{
    NSObject<NSCopying> *_itemId;
    CLLocation *_location;
    NSDate *_dateCreated;
}

@property (copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (copy, nonatomic) NSObject<NSCopying> *itemId; // @synthesize itemId=_itemId;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;

+ (CDUnknownBlockType)mapItemSortingComparatorNewestToOldest;
+ (CDUnknownBlockType)mapItemSortingComparatorOldestToNewest;
+ (id)stringForItemId:(id)arg1;
- (void).cxx_destruct;
- (long long)_mapItemSortingCompareWithMapItem:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)thumbnailImage;

@end
