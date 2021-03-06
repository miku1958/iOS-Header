//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/NSCopying-Protocol.h>
#import <ActivityAchievements/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate, NSDateComponents, NSString;

@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_1bc457c2 _smallEarnedDateComponents;
    unsigned char _creatorDevice;
    unsigned long long _uniqueNameIndex;
    unsigned long long _key;
    HKQuantity *_value;
    NSDate *_createdDate;
}

@property (strong, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property (nonatomic) unsigned char creatorDevice; // @synthesize creatorDevice=_creatorDevice;
@property (strong, nonatomic) NSDateComponents *earnedDateComponents;
@property (nonatomic) unsigned long long key; // @synthesize key=_key;
@property (strong, nonatomic) NSString *templateUniqueName;
@property (strong, nonatomic) HKQuantity *value; // @synthesize value=_value;

+ (id)_allTemplateUniqueNames;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCodable:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

