//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject
{
}

@property (nonatomic) double lineNumber;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSArray *stackTrace;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *url;

- (id)initWithType:(long long)arg1;

@end

