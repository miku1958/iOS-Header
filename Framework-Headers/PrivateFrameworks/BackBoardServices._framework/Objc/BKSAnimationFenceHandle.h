//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSInvalidatable-Protocol.h>
#import <BackBoardServices/BSXPCCoding-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable>
{
    unsigned long long _fenceName;
    BSMachPortSendRight *_caFence;
    BSMachPortSendRight *_preFence;
    BSMachPortSendRight *_preFenceTrigger;
    unsigned long long _handleName;
    int _valid;
    BOOL _shouldTrace;
}

@property (readonly, copy, nonatomic) NSString *_trace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSMachPortSendRight *trigger; // @synthesize trigger=_preFenceTrigger;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;

+ (id)newFenceHandleForContext:(id)arg1;
+ (id)newSystemFenceHandle;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned int)CAPort;
- (id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 shouldTrace:(BOOL)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;

@end
