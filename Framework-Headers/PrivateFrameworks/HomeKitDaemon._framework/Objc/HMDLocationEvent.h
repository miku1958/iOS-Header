//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDEvent.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CLRegion;

@interface HMDLocationEvent : HMDEvent <NSSecureCoding>
{
    CLRegion *_region;
}

@property (strong, nonatomic) CLRegion *region; // @synthesize region=_region;
@property (readonly, copy, nonatomic) CLRegion *uniqueRegion;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)setRegionIfValid:(id)arg1;

@end
