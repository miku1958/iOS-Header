//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCArticleIDFeedDescriptor.h>

@class NSArray;

@interface FCArticlesFeedDescriptor : FCArticleIDFeedDescriptor
{
    NSArray *_articleIDs;
}

@property (readonly, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 articleIDs:(id)arg2;
- (id)name;
- (id)streamOfLatestArticleIDsWithContext:(id)arg1;

@end
