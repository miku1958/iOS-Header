//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/NSObject-Protocol.h>

@class CSSearchableIndex, NSArray, NSData, NSString, NSURL;

@protocol CSSearchableIndexDelegate <NSObject>
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg2;
- (void)searchableIndex:(CSSearchableIndex *)arg1 reindexSearchableItemsWithIdentifiers:(NSArray *)arg2 acknowledgementHandler:(void (^)(void))arg3;

@optional
- (NSData *)dataForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 error:(out id *)arg4;
- (NSURL *)fileURLForSearchableIndex:(CSSearchableIndex *)arg1 itemIdentifier:(NSString *)arg2 typeIdentifier:(NSString *)arg3 inPlace:(BOOL)arg4 error:(out id *)arg5;
- (void)searchableIndexDidFinishThrottle:(CSSearchableIndex *)arg1;
- (void)searchableIndexDidThrottle:(CSSearchableIndex *)arg1;
@end

