//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkResponse;

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject
{
}

@property (nonatomic) double bodySize;
@property (strong, nonatomic) RWIProtocolNetworkResponse *response;
@property (copy, nonatomic) NSString *sourceMapURL;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *url;

- (id)initWithUrl:(id)arg1 type:(long long)arg2 bodySize:(double)arg3;

@end

