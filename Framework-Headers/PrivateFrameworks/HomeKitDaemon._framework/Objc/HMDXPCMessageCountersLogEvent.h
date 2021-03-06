//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSNumber, NSString;

@interface HMDXPCMessageCountersLogEvent : HMDLogEvent
{
    NSString *_type;
    NSString *_peerInformation;
    NSString *_messageName;
    NSNumber *_count;
}

@property (readonly, nonatomic) NSNumber *count; // @synthesize count=_count;
@property (readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property (readonly, nonatomic) NSString *peerInformation; // @synthesize peerInformation=_peerInformation;
@property (readonly, nonatomic) NSString *type; // @synthesize type=_type;

+ (id)XPCMessageCountersLogEventWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;
+ (id)identifier;
- (void).cxx_destruct;
- (id)__initWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4;
- (id)init;

@end

