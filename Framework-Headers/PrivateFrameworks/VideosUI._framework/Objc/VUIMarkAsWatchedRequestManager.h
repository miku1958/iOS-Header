//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VUIMarkAsWatchedRequestManager : NSObject
{
    NSMutableDictionary *_ongoingItemIDOperationDictionary;
}

@property (strong, nonatomic) NSMutableDictionary *ongoingItemIDOperationDictionary; // @synthesize ongoingItemIDOperationDictionary=_ongoingItemIDOperationDictionary;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)sendRequestForItemID:(id)arg1 itemType:(id)arg2 channelID:(id)arg3;

@end

