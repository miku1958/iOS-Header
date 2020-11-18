//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSCopying-Protocol.h>
#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSError, PSYActivityInfo;

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _finishedSending;
    BOOL _sawADropout;
    PSYActivityInfo *_activityInfo;
    double _activityProgress;
    NSError *_error;
    unsigned long long _activityState;
    long long _interruptionCount;
    unsigned long long _startDropoutCount;
}

@property (readonly, nonatomic) PSYActivityInfo *activityInfo; // @synthesize activityInfo=_activityInfo;
@property (readonly, nonatomic) double activityProgress; // @synthesize activityProgress=_activityProgress;
@property (readonly, nonatomic) unsigned long long activityState; // @synthesize activityState=_activityState;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic, getter=isFinishedSending) BOOL finishedSending; // @synthesize finishedSending=_finishedSending;
@property (readonly, nonatomic) long long interruptionCount; // @synthesize interruptionCount=_interruptionCount;
@property (readonly, nonatomic) BOOL sawADropout; // @synthesize sawADropout=_sawADropout;
@property (readonly, nonatomic) unsigned long long startDropoutCount; // @synthesize startDropoutCount=_startDropoutCount;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActivityInfo:(id)arg1 progress:(double)arg2 error:(id)arg3 state:(unsigned long long)arg4 finishedSending:(BOOL)arg5 interruptionCount:(long long)arg6 startDropoutCount:(unsigned long long)arg7 sawADropout:(BOOL)arg8;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)syncSessionActivityByUpdatingProgress:(double)arg1;

@end
