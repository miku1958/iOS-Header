//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate;

@interface HMDHomeLocationData : HMFObject <NSSecureCoding>
{
    CLLocation *_location;
    NSDate *_locationUpdateTimestamp;
}

@property (readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 locationUpdateTimestamp:(id)arg2;

@end
