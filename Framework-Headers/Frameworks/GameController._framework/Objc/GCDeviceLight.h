//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class GCColor;

@interface GCDeviceLight : NSObject <NSSecureCoding>
{
    GCColor *_color;
}

@property (copy, nonatomic) GCColor *color; // @synthesize color=_color;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;

@end
