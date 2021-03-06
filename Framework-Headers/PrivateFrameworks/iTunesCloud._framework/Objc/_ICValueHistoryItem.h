//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@interface _ICValueHistoryItem : NSObject <NSSecureCoding>
{
    unsigned long long _timestamp;
    id _value;
}

@property (readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) id value; // @synthesize value=_value;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 timestamp:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

