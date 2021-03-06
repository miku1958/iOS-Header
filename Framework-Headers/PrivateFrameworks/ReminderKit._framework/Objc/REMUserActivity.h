//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSData *_storage;
}

@property (readonly, nonatomic) NSData *storage; // @synthesize storage=_storage;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)dataFromUserActivity:(id)arg1;
+ (id)stringForActivityType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)userActivityWithDictionaryData:(id)arg1 error:(id *)arg2;
+ (void)userActivityWithUserActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)archivedDictionaryData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)debugDescriptionDetails;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriIntent:(id)arg1;
- (id)initWithType:(long long)arg1 storage:(id)arg2;
- (id)initWithUniversalLink:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (id)initWithUserActivityData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)siriIntent;
- (id)universalLink;
- (id)userActivity;
- (id)userActivityData;

@end

