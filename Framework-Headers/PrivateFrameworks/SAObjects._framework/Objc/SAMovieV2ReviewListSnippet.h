//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSString, SALocalSearchReviewList;

@interface SAMovieV2ReviewListSnippet : SAUISnippet
{
}

@property (copy, nonatomic) NSString *movieName;
@property (strong, nonatomic) SALocalSearchReviewList *reviewList;

+ (id)reviewListSnippet;
+ (id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

