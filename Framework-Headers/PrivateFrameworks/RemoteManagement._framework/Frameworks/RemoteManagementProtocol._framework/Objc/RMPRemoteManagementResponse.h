//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface RMPRemoteManagementResponse : CEMPayloadBase
{
    NSString *_UDID;
    NSString *_userShortName;
    NSString *_syncToken;
    NSString *_status;
    NSString *_requestUUID;
    NSArray *_errorChain;
}

@property (copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property (copy, nonatomic) NSArray *errorChain; // @synthesize errorChain=_errorChain;
@property (copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property (copy, nonatomic) NSString *status; // @synthesize status=_status;
@property (copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
@property (copy, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;

+ (id)responseWithUDID:(id)arg1 withUserShortName:(id)arg2 withSyncToken:(id)arg3 withStatus:(id)arg4 withRequestUUID:(id)arg5 withErrorChain:(id)arg6;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)loadResponseFromDictionary:(id)arg1 error:(id *)arg2;
- (id)serialize;

@end

