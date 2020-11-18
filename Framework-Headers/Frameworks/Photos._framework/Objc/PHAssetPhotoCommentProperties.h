//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoCommentProperties : PHAssetPropertySet
{
    BOOL _hasUserLiked;
    unsigned long long _commentCount;
    unsigned long long _likeCount;
}

@property (readonly, nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property (readonly, nonatomic) BOOL hasUserLiked; // @synthesize hasUserLiked=_hasUserLiked;
@property (readonly, nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;

+ (id)entityName;
+ (BOOL)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

