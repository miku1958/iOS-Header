//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PSIDatabase;
@protocol OS_dispatch_queue;

@interface PSIGroupResult : NSObject
{
    PSIDatabase *_idx;
    PSIDatabase *_heldIdx;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    BOOL _didFetchOwningContentString;
    float _score;
    NSArray *_contentStrings;
    NSArray *_matchRanges;
    struct __CFArray *_categories;
    struct __CFArray *_owningGroupIds;
    struct __CFArray *_assetIds;
}

@property (strong, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property (readonly) NSArray *assetUUIDs;
@property (strong, nonatomic) struct __CFArray *categories; // @synthesize categories=_categories;
@property (strong, nonatomic) NSArray *contentStrings; // @synthesize contentStrings=_contentStrings;
@property (weak, nonatomic) PSIDatabase *idx; // @synthesize idx=_idx;
@property (readonly, nonatomic) unsigned long long matchCount;
@property (strong, nonatomic) NSArray *matchRanges; // @synthesize matchRanges=_matchRanges;
@property (readonly) NSString *owningContentString;
@property (strong, nonatomic) struct __CFArray *owningGroupIds; // @synthesize owningGroupIds=_owningGroupIds;
@property (nonatomic) float score; // @synthesize score=_score;

- (id)_prepareForFetchWithCount:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2 outFetchOwningContentString:(BOOL *)arg3;
- (void)dealloc;
- (id)description;
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)unitTestDescription;

@end

