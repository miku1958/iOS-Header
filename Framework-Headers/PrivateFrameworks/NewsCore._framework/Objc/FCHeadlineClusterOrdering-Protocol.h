//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSOrderedSet;
@protocol FCFeedPersonalizing;

@protocol FCHeadlineClusterOrdering <NSObject>
- (NSOrderedSet *)orderTopicsWithClusteredHeadlines:(NSDictionary *)arg1 additionalHeadlines:(NSArray *)arg2 scoresByArticleID:(NSDictionary *)arg3 personalizer:(id<FCFeedPersonalizing>)arg4 tagNameProvider:(NSString * (^)(NSString *))arg5;
@end

