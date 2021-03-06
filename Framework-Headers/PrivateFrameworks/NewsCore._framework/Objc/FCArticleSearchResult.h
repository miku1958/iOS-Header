//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SFSearchResult;
@protocol FCHeadlineProviding;

@interface FCArticleSearchResult : NSObject
{
    NSString *_articleID;
    id<FCHeadlineProviding> _deflatedHeadline;
    id<FCHeadlineProviding> _inflatedHeadline;
    SFSearchResult *_searchResult;
}

@property (readonly, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property (readonly, nonatomic) id<FCHeadlineProviding> deflatedHeadline; // @synthesize deflatedHeadline=_deflatedHeadline;
@property (strong, nonatomic) id<FCHeadlineProviding> inflatedHeadline; // @synthesize inflatedHeadline=_inflatedHeadline;
@property (strong, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;

- (void).cxx_destruct;
- (id)initWithParsecSearchResult:(id)arg1 cloudContext:(id)arg2;

@end

