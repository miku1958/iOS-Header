//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class CTCarrierSpaceUsagePlanItemData, CTCarrierSpaceUsagePlanItemMessages, CTCarrierSpaceUsagePlanItemVoice, NSDate, NSString;

@interface CTCarrierSpaceUsagePlanMetrics : NSObject <NSSecureCoding>
{
    BOOL _currentUsedPlan;
    BOOL _throttled;
    NSString *_planLabel;
    long long _planCategory;
    CTCarrierSpaceUsagePlanItemData *_dataUsage;
    CTCarrierSpaceUsagePlanItemMessages *_messages;
    CTCarrierSpaceUsagePlanItemVoice *_voice;
    NSString *_remainingBalance;
    NSDate *_lastUpdatedAt;
}

@property (nonatomic) BOOL currentUsedPlan; // @synthesize currentUsedPlan=_currentUsedPlan;
@property (strong, nonatomic) CTCarrierSpaceUsagePlanItemData *dataUsage; // @synthesize dataUsage=_dataUsage;
@property (strong, nonatomic) NSDate *lastUpdatedAt; // @synthesize lastUpdatedAt=_lastUpdatedAt;
@property (strong, nonatomic) CTCarrierSpaceUsagePlanItemMessages *messages; // @synthesize messages=_messages;
@property (nonatomic) long long planCategory; // @synthesize planCategory=_planCategory;
@property (strong, nonatomic) NSString *planLabel; // @synthesize planLabel=_planLabel;
@property (strong, nonatomic) NSString *remainingBalance; // @synthesize remainingBalance=_remainingBalance;
@property (nonatomic) BOOL throttled; // @synthesize throttled=_throttled;
@property (strong, nonatomic) CTCarrierSpaceUsagePlanItemVoice *voice; // @synthesize voice=_voice;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
