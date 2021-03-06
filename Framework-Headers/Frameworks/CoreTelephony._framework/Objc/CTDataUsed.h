//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTDataUsage;

@interface CTDataUsed : NSObject <NSCopying, NSSecureCoding>
{
    CTDataUsage *_native;
    CTDataUsage *_proxied;
}

@property (readonly, nonatomic) CTDataUsage *native; // @synthesize native=_native;
@property (readonly, nonatomic) CTDataUsage *proxied; // @synthesize proxied=_proxied;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addNativeUsage:(id)arg1;
- (void)addProxiedUsage:(id)arg1;
- (void)addUsage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsage:(id)arg1 proxied:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

