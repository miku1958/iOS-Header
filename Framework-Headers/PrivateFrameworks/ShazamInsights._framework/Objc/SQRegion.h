//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface SQRegion : NSObject
{
    long long _magnitude;
    NSString *_name;
    CLLocation *_location;
    NSString *_identifier;
    NSString *_countryCode;
}

@property (copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) long long magnitude; // @synthesize magnitude=_magnitude;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)regionWithIdentifier:(id)arg1;
- (void).cxx_destruct;

@end

