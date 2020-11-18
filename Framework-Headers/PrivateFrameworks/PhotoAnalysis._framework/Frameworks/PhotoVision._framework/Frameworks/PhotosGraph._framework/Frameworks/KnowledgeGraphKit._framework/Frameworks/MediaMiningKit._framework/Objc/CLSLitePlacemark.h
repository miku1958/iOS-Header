//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSSecureCoding-Protocol.h>

@class CLLocation, CLRegion, NSArray, NSDictionary, NSString;

@interface CLSLitePlacemark : NSObject <NSSecureCoding>
{
    struct CLLocationCoordinate2D _coordinate;
    struct CLLocationCoordinate2D _regionCenter;
    double _regionRadius;
    NSString *_regionIdentifier;
    NSDictionary *_addressDictionary;
    NSArray *_areasOfInterest;
}

@property (readonly, nonatomic) NSDictionary *addressDictionary; // @synthesize addressDictionary=_addressDictionary;
@property (readonly, nonatomic) NSArray *areasOfInterest; // @synthesize areasOfInterest=_areasOfInterest;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CLRegion *region;

+ (id)litePlacemarkFromCLPlacemark:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

