//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload
{
    NSArray *_trafficSelectors;
}

@property (strong) NSArray *trafficSelectors; // @synthesize trafficSelectors=_trafficSelectors;

+ (id)copyTypeDescription;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end

