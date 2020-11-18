//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRecord.h>

@class CKServerChangeToken, NSData, NSDate, NSOrderedSet, NSString;

@interface WFCloudKitSyncToken : WFRecord
{
    NSString *_identifier;
    NSString *_account;
    NSDate *_date;
    NSData *_serverChangeTokenData;
    NSData *_lastOrderingData;
    NSData *_lastOrderingCloudKitRecordMetadata;
    NSData *_syncEngineMetadata;
    NSData *_syncFlagsCloudKitRecordMetadata;
}

@property (copy, nonatomic) NSString *account; // @synthesize account=_account;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSOrderedSet *lastOrdering;
@property (copy, nonatomic) NSData *lastOrderingCloudKitRecordMetadata; // @synthesize lastOrderingCloudKitRecordMetadata=_lastOrderingCloudKitRecordMetadata;
@property (copy, nonatomic) NSData *lastOrderingData; // @synthesize lastOrderingData=_lastOrderingData;
@property (strong, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSData *serverChangeTokenData; // @synthesize serverChangeTokenData=_serverChangeTokenData;
@property (copy, nonatomic) NSData *syncEngineMetadata; // @synthesize syncEngineMetadata=_syncEngineMetadata;
@property (copy, nonatomic) NSData *syncFlagsCloudKitRecordMetadata; // @synthesize syncFlagsCloudKitRecordMetadata=_syncFlagsCloudKitRecordMetadata;

+ (id)accountForContainerEnvironmentString:(id)arg1 userRecordID:(id)arg2;
+ (id)defaultPropertyValues;
+ (id)ignoredPropertyNames;
- (void).cxx_destruct;
- (id)newTokenWithCopiedPayload;

@end
