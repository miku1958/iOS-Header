//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isActiveDevice;
    BOOL _isThisDevice;
    BOOL _isCompanionDevice;
    BOOL _isAutoMeCapable;
    NSString *_deviceId;
    NSString *_deviceName;
    NSString *_idsDeviceId;
}

@property (copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property (copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (copy, nonatomic) NSString *idsDeviceId; // @synthesize idsDeviceId=_idsDeviceId;
@property (nonatomic) BOOL isActiveDevice; // @synthesize isActiveDevice=_isActiveDevice;
@property (nonatomic) BOOL isAutoMeCapable; // @synthesize isAutoMeCapable=_isAutoMeCapable;
@property (nonatomic) BOOL isCompanionDevice; // @synthesize isCompanionDevice=_isCompanionDevice;
@property (nonatomic) BOOL isThisDevice; // @synthesize isThisDevice=_isThisDevice;

+ (id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(BOOL)arg4 isThisDevice:(BOOL)arg5 isCompanionDevice:(BOOL)arg6 isAutoMeCapable:(BOOL)arg7;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateIsActive:(BOOL)arg1 isThisDevice:(BOOL)arg2;

@end

