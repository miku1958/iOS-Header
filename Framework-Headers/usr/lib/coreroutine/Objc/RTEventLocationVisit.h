//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTEventContext.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class RTLocationOfInterest;

@interface RTEventLocationVisit : RTEventContext <NSSecureCoding>
{
    RTLocationOfInterest *_locationOfInterest;
}

@property (readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterest:(id)arg1 source:(long long)arg2;

@end
