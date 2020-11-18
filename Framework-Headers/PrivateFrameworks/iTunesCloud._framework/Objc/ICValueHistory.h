//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_items;
}

@property (readonly, nonatomic) long long count;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addValue:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)addValuesFromHistory:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1;
- (id)firstValueBeforeTimestamp:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastValue;
- (void)removeAllValues;
- (void)removeValuesBeforeTimestamp:(unsigned long long)arg1;

@end

