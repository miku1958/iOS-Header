//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerFunctionDetails : RWIProtocolJSONObject
{
}

@property (copy, nonatomic) NSString *displayName;
@property (strong, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *scopeChain;

- (id)initWithLocation:(id)arg1;

@end

