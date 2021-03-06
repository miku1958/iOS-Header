//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSString, PKCurrencyAmount;

@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject>
{
    NSString *_identifier;
    unsigned long long _status;
    unsigned long long _activityType;
    NSString *_activityIdentifier;
    NSDate *_openDate;
    NSDate *_lastUpdatedDate;
    PKCurrencyAmount *_amount;
    NSString *_reasonCode;
}

@property (copy, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property (nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property (copy, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property (copy, nonatomic) NSDate *openDate; // @synthesize openDate=_openDate;
@property (copy, nonatomic) NSString *reasonCode; // @synthesize reasonCode=_reasonCode;
@property (nonatomic) unsigned long long status; // @synthesize status=_status;
@property (readonly) Class superclass;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

