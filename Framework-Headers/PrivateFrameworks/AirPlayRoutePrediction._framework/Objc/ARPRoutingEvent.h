//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, NSDictionary, NSString;

@interface ARPRoutingEvent : NSObject
{
    NSString *_bundleID;
    NSString *_outputDeviceID;
    NSDateInterval *_interval;
    NSDictionary *_probabilityVector;
}

@property (readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property (readonly, copy, nonatomic) NSString *outputDeviceID; // @synthesize outputDeviceID=_outputDeviceID;
@property (readonly, nonatomic) NSDictionary *probabilityVector; // @synthesize probabilityVector=_probabilityVector;

+ (id)mostRecentRoutingEventInDateInterval:(id)arg1 knowledgeStore:(id)arg2 eventLimit:(unsigned long long)arg3 longFormVideoFilter:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleID:(id)arg1 outputDeviceID:(id)arg2 interval:(id)arg3 probabilityVector:(id)arg4;

@end

