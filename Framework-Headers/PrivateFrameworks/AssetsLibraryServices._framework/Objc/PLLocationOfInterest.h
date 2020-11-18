//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation;

@interface PLLocationOfInterest : NSObject
{
    long long _type;
    CLLocation *_location;
    double _radius;
}

@property (readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)locationOfInterestWithType:(long long)arg1 location:(id)arg2 radius:(double)arg3;
- (id)_descriptionType;
- (void)dealloc;
- (id)description;

@end

