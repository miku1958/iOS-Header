//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDiscoveryTrigger.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKDiscoveryLocationTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying>
{
    double _longitude;
    double _latitude;
    double _radius;
}

@property (readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

