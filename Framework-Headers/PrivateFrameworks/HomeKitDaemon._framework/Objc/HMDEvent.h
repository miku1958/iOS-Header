//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDEventTrigger, NSUUID;

@interface HMDEvent : NSObject <NSSecureCoding>
{
    HMDEventTrigger *_eventTrigger;
    NSUUID *_uuid;
}

@property (weak, nonatomic) HMDEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
