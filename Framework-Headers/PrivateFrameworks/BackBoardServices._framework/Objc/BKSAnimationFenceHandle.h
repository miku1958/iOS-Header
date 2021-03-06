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
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldIgnoreTrigger;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSMachPortSendRight *trigger;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;

+ (id)newFenceHandleForCAFenceHandle:(id)arg1;
+ (id)newFenceHandleForContext:(id)arg1;
+ (id)newSystemFenceHandle;
+ (BOOL)supportsSecureCoding;
- (id)CAFenceHandle;
- (unsigned int)CAPort;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;

@end

