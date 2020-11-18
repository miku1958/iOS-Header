//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFeedItemFeature, FCFeedRange, NSString;

@interface FCFeedDatabaseLookup : NSObject
{
    BOOL _cachedOnly;
    NSString *_feedID;
    FCFeedRange *_feedRange;
    unsigned long long _maxCount;
    FCFeedItemFeature *_requiredFeature;
}

@property (nonatomic) BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property (copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property (copy, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;
@property (nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property (copy, nonatomic) FCFeedItemFeature *requiredFeature; // @synthesize requiredFeature=_requiredFeature;

- (void).cxx_destruct;

@end
