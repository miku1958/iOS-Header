//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, PSIDatabase;
@protocol OS_dispatch_queue;

@interface PSIGroupResult : NSObject <NSCopying>
{
    PSIDatabase *_idx;
    PSIDatabase *_heldIdx;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    BOOL _didFetchOwningContentString;
    float _score;
    NSArray *_searchTokens;
    PSIGroupResult *_additionalGroupResult;
    NSArray *_groups;
    struct __CFArray *_assetIds;
}

@property (strong, nonatomic) PSIGroupResult *additionalGroupResult; // @synthesize additionalGroupResult=_additionalGroupResult;
@property (strong, nonatomic) struct __CFArray *assetIds; // @synthesize assetIds=_assetIds;
@property (readonly) NSArray *assetUUIDs;
@property (readonly, strong, nonatomic) NSArray *contentStrings;
@property (copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property (weak, nonatomic) PSIDatabase *idx; // @synthesize idx=_idx;
@property (readonly, nonatomic) unsigned long long matchCount;
@property (readonly, strong, nonatomic) NSArray *matchRanges;
@property (readonly) NSString *owningContentString;
@property (nonatomic) float score; // @synthesize score=_score;
@property (strong, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;

- (void).cxx_destruct;
- (id)_prepareForFetchWithCount:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2 outFetchOwningContentString:(BOOL *)arg3;
- (long long)categoryAtIndex:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (unsigned long long)tokenCount;
- (id)unitTestDescription;

@end
