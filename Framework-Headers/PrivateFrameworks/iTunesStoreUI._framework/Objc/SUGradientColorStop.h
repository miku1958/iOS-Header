//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSSecureCoding-Protocol.h>

@interface SUGradientColorStop : NSObject <NSSecureCoding>
{
    double _r;
    double _g;
    double _b;
    double _a;
    double _offset;
    struct CGColor *_rawColor;
}

@property (readonly, nonatomic) double offset;

+ (BOOL)supportsSecureCoding;
- (long long)compare:(id)arg1;
- (struct CGColor *)copyCGColor;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(struct CGColor *)arg1 offset:(double)arg2;

@end
