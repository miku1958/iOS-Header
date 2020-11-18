//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCCurrentIssuesCheckerResult, NSArray, NSSet;

@interface FCCurrentIssuesPromiseChainingData : NSObject
{
    NSArray *_resultingIssues;
    NSSet *_bundleChannelIDs;
    NSArray *_followedChannelIDs;
    NSArray *_autoFavoriteTagIDs;
    FCCurrentIssuesCheckerResult *_partialResult;
}

@property (strong, nonatomic) NSArray *autoFavoriteTagIDs; // @synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs;
@property (strong, nonatomic) NSSet *bundleChannelIDs; // @synthesize bundleChannelIDs=_bundleChannelIDs;
@property (strong, nonatomic) NSArray *followedChannelIDs; // @synthesize followedChannelIDs=_followedChannelIDs;
@property (strong, nonatomic) FCCurrentIssuesCheckerResult *partialResult; // @synthesize partialResult=_partialResult;
@property (strong, nonatomic) NSArray *resultingIssues; // @synthesize resultingIssues=_resultingIssues;

- (void).cxx_destruct;

@end
