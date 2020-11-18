//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface HMDNetworkRouterFirewallRuleICMPType : NSObject
{
    unsigned char _protocol;
    NSNumber *_typeValue;
    struct NSDictionary *_jsonDictionary;
}

@property (readonly, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;
@property (readonly, nonatomic) unsigned char protocol; // @synthesize protocol=_protocol;
@property (readonly, nonatomic) NSNumber *typeValue; // @synthesize typeValue=_typeValue;

+ (id)createListWithJSONDictionary:(struct NSDictionary *)arg1 key:(id)arg2;
+ (id)createWithJSONDictionary:(struct NSDictionary *)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJSONDictionary:(struct NSDictionary *)arg1 protocol:(unsigned char)arg2 typeValue:(id)arg3;

@end
