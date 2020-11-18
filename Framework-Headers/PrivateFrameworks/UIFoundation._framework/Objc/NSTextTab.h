//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>
#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSSecureCoding, NSCopying, NSCoding>
{
    struct {
        unsigned int alignment:4;
        unsigned int refCount:24;
        unsigned int unused:4;
    } _flags;
    double _location;
    id _reserved;
}

@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) double location;
@property (readonly, nonatomic) NSDictionary *options;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)columnTerminatorsForLocale:(id)arg1;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 location:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (oneway void)release;
- (unsigned long long)tabStopType;

@end

