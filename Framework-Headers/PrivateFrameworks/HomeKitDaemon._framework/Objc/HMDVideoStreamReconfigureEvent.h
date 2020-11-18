//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject
{
    unsigned long long _eventType;
    NSDate *_timestamp;
}

@property (readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property (readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEventType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

