//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject
{
}

@property (strong, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *postData;
@property (copy, nonatomic) NSString *url;

- (id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3;

@end

