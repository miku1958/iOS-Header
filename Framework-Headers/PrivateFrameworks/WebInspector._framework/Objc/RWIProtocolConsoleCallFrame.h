//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject
{
}

@property (nonatomic) int columnNumber;
@property (copy, nonatomic) NSString *functionName;
@property (nonatomic) int lineNumber;
@property (copy, nonatomic) NSString *url;

- (id)initWithFunctionName:(id)arg1 url:(id)arg2 lineNumber:(int)arg3 columnNumber:(int)arg4;

@end
