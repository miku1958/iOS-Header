//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject
{
}

@property (copy, nonatomic) NSArray *callFrames;
@property (strong, nonatomic) RWIProtocolConsoleStackTrace *parentStackTrace;
@property (nonatomic) BOOL topCallFrameIsBoundary;
@property (nonatomic) BOOL truncated;

- (id)initWithCallFrames:(id)arg1;

@end

