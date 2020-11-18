//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding>
{
    int _pid;
    unsigned int _contextID;
    NSString *_clientID;
    NSString *_displayUUID;
}

@property (readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property (readonly, nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
@property (readonly, copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;

+ (id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
+ (id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
+ (BOOL)supportsSecureCoding;
- (id)conciseDescription;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned int)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualNotIncludingClientIDAndPid:(id)arg1;
- (id)propertiesOneLevelMoreGeneric;
- (void)setPid:(int)arg1;

@end

