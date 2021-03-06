//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class FMFHandle, NSDate, NSSet, NSString;

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestType;
    FMFHandle *_fromHandle;
    NSSet *_toHandles;
    NSDate *_endDate;
    NSString *_groupId;
    NSString *_requestId;
}

@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) FMFHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property (strong, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property (strong, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property (nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) NSSet *toHandles; // @synthesize toHandles=_toHandles;

+ (id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6;

@end

