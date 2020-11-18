//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AirPlayRoutePrediction/NSCopying-Protocol.h>
#import <AirPlayRoutePrediction/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_sessions;
    double _routingSessionTimeout;
}

@property (readonly, nonatomic) double routingSessionTimeout; // @synthesize routingSessionTimeout=_routingSessionTimeout;
@property (readonly, nonatomic) NSArray *sessions; // @synthesize sessions=_sessions;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessions:(id)arg1 routingSessionTimeout:(double)arg2;

@end
