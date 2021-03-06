//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>
#import <ClockKit/NSSecureCoding-Protocol.h>
#import <ClockKit/TLIdentifiable-Protocol.h>

@class CLKUserActivity, NSDictionary, NSString, NSUserActivity;

@interface CLKComplication : NSObject <NSSecureCoding, TLIdentifiable, NSCopying>
{
    CLKUserActivity *_clkUserActivity;
    long long _family;
    NSString *_identifier;
    NSDictionary *_userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long family; // @synthesize family=_family;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)complicationWithFamily:(long long)arg1 descriptor:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)tl_isEqualToIdentifiable:(id)arg1;

@end

