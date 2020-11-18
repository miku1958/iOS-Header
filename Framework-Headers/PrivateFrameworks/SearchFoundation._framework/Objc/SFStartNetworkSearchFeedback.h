//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSDictionary, NSString;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback
{
    NSString *_url;
    NSDictionary *_headers;
    unsigned long long _endpoint;
}

@property (nonatomic) unsigned long long endpoint; // @synthesize endpoint=_endpoint;
@property (copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property (copy, nonatomic) NSString *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5;
- (id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6;

@end
