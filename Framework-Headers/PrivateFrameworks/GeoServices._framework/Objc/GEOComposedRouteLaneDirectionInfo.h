//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEOComposedRouteLaneDirectionInfo : NSObject <NSSecureCoding>
{
    int _direction;
    float _angle;
}

@property (readonly, nonatomic) float angle;
@property (readonly, nonatomic) int direction;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneArrowHead:(id)arg1;

@end

