//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSMetricsEvent : NSObject
{
    BOOL _shouldSuppressUserInfo;
    BOOL _shouldSuppressDSIDHeader;
    NSString *_eventType;
}

@property (readonly, strong, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property (readonly, nonatomic) BOOL shouldSuppressDSIDHeader; // @synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader;
@property (readonly, nonatomic) BOOL shouldSuppressUserInfo; // @synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo;

+ (id)_globalCanaryLock;
+ (id)globalEventCanary;
+ (void)setGlobalEventCanary:(id)arg1;
- (void).cxx_destruct;
- (id)_dictionaryRepresentationOfBody;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2;
- (void)appendPropertiesToBody:(id)arg1;
- (id)decorateReportingURL:(id)arg1;
- (BOOL)isBlacklistedByConfiguration:(id)arg1;
- (BOOL)isFieldBlacklistEnabled;
- (id)millisecondsFromTimeInterval:(double)arg1;
- (BOOL)requiresDiagnosticSendingPermission;
- (double)timeIntervalFromMilliseconds:(id)arg1;

@end

