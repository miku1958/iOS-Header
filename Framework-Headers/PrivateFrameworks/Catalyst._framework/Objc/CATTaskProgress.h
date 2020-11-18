//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Catalyst/NSCopying-Protocol.h>
#import <Catalyst/NSMutableCopying-Protocol.h>
#import <Catalyst/NSSecureCoding-Protocol.h>

@class NSDictionary, NSError, NSString, NSUUID;

@interface CATTaskProgress : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    BOOL _isCancelable;
    BOOL _isCanceled;
    NSUUID *_UUID;
    unsigned long long _phase;
    id _resultObject;
    NSError *_error;
    NSDictionary *_userInfo;
    long long _completedUnitCount;
    long long _totalUnitCount;
    NSString *_requestClassName;
}

@property (copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL isCancelable; // @synthesize isCancelable=_isCancelable;
@property (nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property (nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property (copy, nonatomic) NSString *requestClassName; // @synthesize requestClassName=_requestClassName;
@property (strong, nonatomic) id resultObject; // @synthesize resultObject=_resultObject;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property (strong, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (void)assertResultObject:(id)arg1 isValidForRequestClassName:(id)arg2;
+ (Class)classForResultObjectWithRequestClassName:(id)arg1;
+ (id)progressForOperation:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)progressStateDescription;
- (void)setProgress:(id)arg1;

@end

