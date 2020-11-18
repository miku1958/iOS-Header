//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDevice : NSObject <HMObjectMerge, NSSecureCoding>
{
    BOOL _currentDevice;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (readonly, getter=isCurrentDevice) BOOL currentDevice; // @synthesize currentDevice=_currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

