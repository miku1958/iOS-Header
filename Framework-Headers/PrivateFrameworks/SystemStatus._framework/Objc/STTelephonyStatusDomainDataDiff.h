//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/STStatusDomainDataDiff-Protocol.h>

@class BSSettings, NSString, STTelephonyStatusDomainSIMInfoDiff;

@interface STTelephonyStatusDomainDataDiff : NSObject <STStatusDomainDataDiff>
{
    STTelephonyStatusDomainSIMInfoDiff *_SIMOneInfoDiff;
    STTelephonyStatusDomainSIMInfoDiff *_SIMTwoInfoDiff;
    BSSettings *_changes;
}

@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfoDiff *SIMOneInfoDiff; // @synthesize SIMOneInfoDiff=_SIMOneInfoDiff;
@property (readonly, copy, nonatomic) STTelephonyStatusDomainSIMInfoDiff *SIMTwoInfoDiff; // @synthesize SIMTwoInfoDiff=_SIMTwoInfoDiff;
@property (readonly, copy, nonatomic) BSSettings *changes; // @synthesize changes=_changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)diffFromData:(id)arg1 toData:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyToMutableData:(id)arg1;
- (id)dataByApplyingToData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSIMOneInfoDiff:(id)arg1 SIMTwoInfoDiff:(id)arg2 changes:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

