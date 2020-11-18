//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface USBudget : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _type;
    NSSet *_items;
    NSString *_calendarIdentifier;
    NSDictionary *_schedule;
}

@property (readonly, copy) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy) NSSet *items; // @synthesize items=_items;
@property (readonly, copy) NSDictionary *schedule; // @synthesize schedule=_schedule;
@property (readonly) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5;

@end

