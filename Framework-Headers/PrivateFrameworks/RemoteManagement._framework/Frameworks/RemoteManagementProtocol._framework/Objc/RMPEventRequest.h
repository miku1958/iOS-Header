//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface RMPEventRequest : CEMPayloadBase
{
    NSString *_requestType;
    NSString *_UDID;
    NSString *_userShortName;
    NSArray *_messages;
}

@property (copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property (copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property (copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property (copy, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;

+ (id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)loadEventFromDictionary:(id)arg1 error:(id *)arg2;
- (id)serialize;

@end

