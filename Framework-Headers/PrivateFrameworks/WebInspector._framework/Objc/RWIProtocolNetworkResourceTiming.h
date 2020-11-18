//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject
{
}

@property (nonatomic) double connectEnd;
@property (nonatomic) double connectStart;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) double navigationStart;
@property (nonatomic) double requestStart;
@property (nonatomic) double responseStart;
@property (nonatomic) double secureConnectionStart;

- (id)initWithNavigationStart:(double)arg1 domainLookupStart:(double)arg2 domainLookupEnd:(double)arg3 connectStart:(double)arg4 connectEnd:(double)arg5 secureConnectionStart:(double)arg6 requestStart:(double)arg7 responseStart:(double)arg8;

@end

