//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/NSSecureCoding-Protocol.h>

@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding>
{
    unsigned long long _repairType;
    BOOL _shouldNotify;
    BOOL _force;
    NSString *_followUpType;
}

@property (copy, nonatomic) NSString *followUpType; // @synthesize followUpType=_followUpType;
@property (nonatomic) BOOL force; // @synthesize force=_force;
@property (nonatomic) unsigned long long repairType;
@property (nonatomic) BOOL shouldNotify; // @synthesize shouldNotify=_shouldNotify;

+ (id)contextForOfflinePasscodeChange;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForSettingUpBiometrics;
+ (id)contextForStateRepair;
+ (id)contextWithType:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

