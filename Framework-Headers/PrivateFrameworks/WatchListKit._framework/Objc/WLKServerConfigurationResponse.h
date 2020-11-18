//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface WLKServerConfigurationResponse : NSObject
{
    NSDictionary *_dictionary;
    NSDictionary *_endpointsDictionary;
    NSDictionary *_serverRoutesDictionary;
    NSDictionary *_requiredRequestKeyValuePairsDictionary;
    unsigned long long _expirationInSeconds;
    NSDictionary *_channelsByID;
    NSArray *_orderedChannels;
}

@property (readonly, copy, nonatomic) NSDictionary *channelsByID; // @synthesize channelsByID=_channelsByID;
@property (readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property (readonly, nonatomic) NSDictionary *endpointsDictionary; // @synthesize endpointsDictionary=_endpointsDictionary;
@property (readonly, nonatomic) unsigned long long expirationInSeconds; // @synthesize expirationInSeconds=_expirationInSeconds;
@property (readonly, copy, nonatomic) NSArray *orderedChannels; // @synthesize orderedChannels=_orderedChannels;
@property (readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary; // @synthesize requiredRequestKeyValuePairsDictionary=_requiredRequestKeyValuePairsDictionary;
@property (readonly, nonatomic) NSDictionary *serverRoutesDictionary; // @synthesize serverRoutesDictionary=_serverRoutesDictionary;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

