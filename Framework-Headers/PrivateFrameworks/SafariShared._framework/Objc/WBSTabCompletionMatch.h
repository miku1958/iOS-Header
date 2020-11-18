//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSURLCompletionMatch.h>

@class NSString, NSURL;

@interface WBSTabCompletionMatch : WBSURLCompletionMatch
{
    NSURL *_url;
    NSString *_title;
}

@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (long long)_matchLocationForString:(id)arg1 url:(id)arg2 title:(id)arg3;
- (void).cxx_destruct;
- (id)initWithUserTypedString:(id)arg1 url:(id)arg2 title:(id)arg3;
- (id)originalURLString;
- (id)userVisibleURLString;

@end

