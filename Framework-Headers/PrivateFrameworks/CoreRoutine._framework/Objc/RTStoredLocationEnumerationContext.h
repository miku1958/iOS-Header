//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying>
{
    RTStoredLocationEnumerationOptions *_options;
    unsigned long long _offset;
}

@property (readonly, nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property (readonly, copy, nonatomic) RTStoredLocationEnumerationOptions *options; // @synthesize options=_options;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnumerationOptions:(id)arg1;
- (id)initWithEnumerationOptions:(id)arg1 offset:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContext:(id)arg1;

@end

