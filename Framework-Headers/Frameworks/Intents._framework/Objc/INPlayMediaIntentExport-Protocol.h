//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INMediaItem, INMediaSearch, INPrivatePlayMediaIntentData, NSArray, NSDate, NSNumber, NSString;

@protocol INPlayMediaIntentExport <NSObject, JSExport>

@property (copy, nonatomic) NSArray *alternativeResults;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (copy, nonatomic) NSArray *buckets;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) INMediaItem *mediaContainer;
@property (copy, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) INMediaSearch *mediaSearch;
@property (nonatomic) long long parsecCategory;
@property (copy, nonatomic) NSNumber *playShuffled;
@property (nonatomic) long long playbackQueueLocation;
@property (nonatomic) long long playbackRepeatMode;
@property (copy, nonatomic) NSNumber *playbackSpeed;
@property (copy, nonatomic) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) NSString *recoID;
@property (copy, nonatomic) NSNumber *resumePlayback;

- (id)init;
@end

