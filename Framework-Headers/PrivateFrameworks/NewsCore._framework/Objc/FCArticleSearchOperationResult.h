//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCArticleSearchOperationFeedbackResult, FCArticleStreamingResults;

@interface FCArticleSearchOperationResult : NSObject
{
    FCArticleStreamingResults *_articles;
    FCArticleSearchOperationFeedbackResult *_feedBack;
}

@property (strong, nonatomic) FCArticleStreamingResults *articles; // @synthesize articles=_articles;
@property (strong, nonatomic) FCArticleSearchOperationFeedbackResult *feedBack; // @synthesize feedBack=_feedBack;

- (void).cxx_destruct;

@end
