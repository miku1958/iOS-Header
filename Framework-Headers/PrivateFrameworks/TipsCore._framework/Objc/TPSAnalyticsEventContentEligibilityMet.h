//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSArray, NSString;

@interface TPSAnalyticsEventContentEligibilityMet : TPSAnalyticsEvent
{
    NSString *_contentID;
    NSString *_bundleID;
    NSArray *_eligibleContext;
    unsigned long long _displayType;
}

@property (readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property (readonly, nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property (readonly, nonatomic) NSArray *eligibleContext; // @synthesize eligibleContext=_eligibleContext;

+ (id)classSet;
+ (id)eventWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 date:(id)arg5;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithContentID:(id)arg1 bundleID:(id)arg2 eligibleContext:(id)arg3 displayType:(unsigned long long)arg4 date:(id)arg5;
- (id)duetEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;

@end

