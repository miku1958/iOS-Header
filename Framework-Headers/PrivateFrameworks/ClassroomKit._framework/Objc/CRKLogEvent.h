//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface CRKLogEvent : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSDate *_date;
    NSDictionary *_userInfo;
}

@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 date:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;

@end

