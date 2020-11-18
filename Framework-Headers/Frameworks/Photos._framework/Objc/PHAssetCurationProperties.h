//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet
{
    NSDate *_addedDate;
}

@property (readonly, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;

+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

