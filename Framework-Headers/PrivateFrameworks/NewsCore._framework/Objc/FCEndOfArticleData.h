//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCStreamingResults, NSArray;

@interface FCEndOfArticleData : NSObject
{
    NSArray *_allTopics;
    FCStreamingResults *_publisherHeadlines;
    FCStreamingResults *_relatedHeadlines;
}

@property (strong, nonatomic) NSArray *allTopics; // @synthesize allTopics=_allTopics;
@property (strong, nonatomic) FCStreamingResults *publisherHeadlines; // @synthesize publisherHeadlines=_publisherHeadlines;
@property (strong, nonatomic) FCStreamingResults *relatedHeadlines; // @synthesize relatedHeadlines=_relatedHeadlines;

- (void).cxx_destruct;

@end
