//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSArray, SSURLConnectionRequest;

@interface RadioSearchResultAccessedRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    NSArray *_searchResults;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithAccessedSearchResults:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
