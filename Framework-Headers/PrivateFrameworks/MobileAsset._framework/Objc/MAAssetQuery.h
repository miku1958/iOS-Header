//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSString;

@interface MAAssetQuery : NSObject
{
    BOOL _augmentState;
    NSMutableArray *_queryParams;
    NSString *_assetType;
    NSArray *_results;
    long long _returnTypes;
    NSDate *_lastFetchDate;
}

@property (readonly, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property (readonly, nonatomic) BOOL augmentState; // @synthesize augmentState=_augmentState;
@property (readonly, nonatomic) NSDate *lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
@property (readonly, nonatomic) NSMutableArray *queryParams; // @synthesize queryParams=_queryParams;
@property (readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property (readonly, nonatomic) long long returnTypes; // @synthesize returnTypes=_returnTypes;

- (long long)addKeyValueArray:(id)arg1 with:(id)arg2;
- (long long)addKeyValuePair:(id)arg1 with:(id)arg2;
- (void)augmentResultsWithState:(BOOL)arg1;
- (void)dealloc;
- (void)getResultsFromMessage:(id)arg1;
- (id)initWithType:(id)arg1;
- (void)queryMetaData:(CDUnknownBlockType)arg1;
- (long long)queryMetaDataSync;
- (void)returnTypes:(long long)arg1;

@end

