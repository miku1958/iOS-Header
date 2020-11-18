//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PHFetchResult;

@interface PHALibraryChangeDetails : NSObject
{
    unsigned long long _changeType;
    NSArray *_inserts;
    NSArray *_deletes;
    NSArray *_updates;
    NSDictionary *_changedAssetIdentifierToWorkerFlagsMap;
    PHFetchResult *_changedAssetsFetchResult;
}

@property (strong) NSDictionary *changedAssetIdentifierToWorkerFlagsMap; // @synthesize changedAssetIdentifierToWorkerFlagsMap=_changedAssetIdentifierToWorkerFlagsMap;
@property (strong) PHFetchResult *changedAssetsFetchResult; // @synthesize changedAssetsFetchResult=_changedAssetsFetchResult;
@property (copy, setter=_setDeletes:) NSArray *deletes; // @synthesize deletes=_deletes;
@property (copy, setter=_setInserts:) NSArray *inserts; // @synthesize inserts=_inserts;
@property (readonly) unsigned long long type;
@property (copy, setter=_setUpdates:) NSArray *updates; // @synthesize updates=_updates;

+ (id)changeDetailsForUpdatedMoments:(id)arg1;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1;

@end

