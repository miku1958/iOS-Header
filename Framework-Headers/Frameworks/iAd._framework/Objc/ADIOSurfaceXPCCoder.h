//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCCoder.h>

#import <iAd/NSSecureCoding-Protocol.h>

@interface ADIOSurfaceXPCCoder : NSXPCCoder <NSSecureCoding>
{
    double _scale;
}

@property double scale; // @synthesize scale=_scale;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
