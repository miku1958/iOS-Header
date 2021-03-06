//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>

@class NSString;

@interface CNReputationHandle : NSObject <NSCopying>
{
    NSString *_stringValue;
    long long _type;
}

@property (readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)descriptionForType:(long long)arg1;
+ (id)handleWithEmailAddress:(id)arg1;
+ (id)handleWithPhoneNumber:(id)arg1;
+ (id)handleWithStringValue:(id)arg1;
- (void).cxx_destruct;
- (void)configureBuilder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithStringValue:(id)arg1 type:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

