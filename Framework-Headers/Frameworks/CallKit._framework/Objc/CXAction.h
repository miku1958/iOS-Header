//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCopying-Protocol.h>
#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableString, NSString, NSUUID;
@protocol CXActionDelegate;

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    long long _state;
    long long _failureReason;
    NSDate *_commitDate;
    id<CXActionDelegate> _delegate;
}

@property (copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (strong, nonatomic) NSDate *commitDate; // @synthesize commitDate=_commitDate;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) NSMutableString *customDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXActionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long failureReason; // @synthesize failureReason=_failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *timeoutDate;

+ (BOOL)supportsSecureCoding;
+ (double)timeout;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fail;
- (void)failWithError:(id)arg1;
- (void)fulfill;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (void)updateAsFailedWithReason:(long long)arg1;
- (void)updateAsFulfilled;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end
