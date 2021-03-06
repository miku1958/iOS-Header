//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TransparencySettings : NSObject
{
    NSDictionary *_settings;
}

@property (strong) NSDictionary *settings; // @synthesize settings=_settings;

+ (BOOL)allowsInternalSecurityPolicies;
+ (double)defaultNetworkTimeout;
+ (double)defaultQueryCacheTimeout;
+ (id)deviceUserAgent;
+ (BOOL)getBool:(id)arg1;
- (void).cxx_destruct;

@end

