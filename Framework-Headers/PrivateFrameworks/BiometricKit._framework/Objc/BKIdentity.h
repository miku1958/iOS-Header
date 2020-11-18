//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface BKIdentity : NSObject
{
    unsigned int _userID;
    NSUUID *_uuid;
    long long _type;
    NSString *_name;
    NSDate *_creationTime;
}

@property (strong, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) unsigned int userID; // @synthesize userID=_userID;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)identity;
- (void).cxx_destruct;
- (id)initWithDeviceIdentity:(id)arg1;
- (id)serverIdentity;

@end

