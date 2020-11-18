//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOComposedETARouteLeg : NSObject <NSSecureCoding>
{
    NSArray *_steps;
}

@property (strong, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property (readonly, nonatomic) double travelDuration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithPrecision:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
