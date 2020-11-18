//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/FCForYouBridgedFeedGroupStore-Protocol.h>

@class NSString;
@protocol FCForYouMagazineFeedCursor;

@protocol FCForYouMagazineFeedManaging <FCForYouBridgedFeedGroupStore>
- (id<FCForYouMagazineFeedCursor>)cursorForTopOfFeed;
- (void)fetchNextGroupFromCursor:(id<FCForYouMagazineFeedCursor>)arg1 completion:(void (^)(id<FCForYouBridgedFeedGroup>, id<FCForYouMagazineFeedCursor>, NSError *))arg2;
- (id<FCForYouMagazineFeedCursor>)knownCursorForIdentifier:(NSString *)arg1;
@end
