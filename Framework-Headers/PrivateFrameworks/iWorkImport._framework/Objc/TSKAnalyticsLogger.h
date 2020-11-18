//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKAnalyticsLogger : NSObject
{
    BOOL _shouldSummarize;
    BOOL _logApplicationName;
    BOOL _recalculateWillLog;
    BOOL _cachedWillLogAnalytics;
    BOOL _requireExplicitFinish;
    BOOL _recalculateDomain;
    long long _samplingPercentage;
    NSString *_baseDomain;
    NSString *_cachedFullDomain;
    CDStruct_f6aba300 _miniOSVersion;
    CDStruct_f6aba300 _minOSXVersion;
}

@property (copy, nonatomic) NSString *baseDomain; // @synthesize baseDomain=_baseDomain;
@property (copy, nonatomic) NSString *cachedFullDomain; // @synthesize cachedFullDomain=_cachedFullDomain;
@property (nonatomic) BOOL cachedWillLogAnalytics; // @synthesize cachedWillLogAnalytics=_cachedWillLogAnalytics;
@property (readonly, nonatomic) BOOL canLogAnalytics; // @dynamic canLogAnalytics;
@property (readonly, nonatomic) NSString *domain; // @dynamic domain;
@property (nonatomic) BOOL logApplicationName; // @synthesize logApplicationName=_logApplicationName;
@property (nonatomic) CDStruct_f6aba300 minOSXVersion; // @synthesize minOSXVersion=_minOSXVersion;
@property (nonatomic) CDStruct_f6aba300 miniOSVersion; // @synthesize miniOSVersion=_miniOSVersion;
@property (nonatomic) BOOL recalculateDomain; // @synthesize recalculateDomain=_recalculateDomain;
@property (nonatomic) BOOL recalculateWillLog; // @synthesize recalculateWillLog=_recalculateWillLog;
@property (nonatomic) BOOL requireExplicitFinish; // @synthesize requireExplicitFinish=_requireExplicitFinish;
@property (nonatomic) long long samplingPercentage; // @synthesize samplingPercentage=_samplingPercentage;
@property (nonatomic) BOOL shouldSummarize; // @synthesize shouldSummarize=_shouldSummarize;
@property (readonly, nonatomic) BOOL willLogAnalytics; // @dynamic willLogAnalytics;

+ (void)logDistributionValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logDistributionValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3 logApplicationName:(BOOL)arg4;
+ (void)logScalarValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logScalarValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 logApplicationName:(BOOL)arg4;
+ (id)loggerWithDomain:(id)arg1;
- (void).cxx_destruct;
- (void)finishMessage;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (void)logDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)logScalarValue:(long long)arg1 forKey:(id)arg2;
- (void)p_finishMessage;
- (void)p_logASLMessageWithDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithScalarValue:(long long)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithValueString:(char *)arg1 forKey:(id)arg2;
- (id)p_qualifiedStringForKey:(id)arg1;
- (void)p_startMessage;
- (void)startMessage;

@end

