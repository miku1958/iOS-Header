//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityMigrationTransferPreparationAction : SASProximityAction
{
    NSString *_deviceName;
}

@property (strong, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;
- (void).cxx_destruct;
- (BOOL)hasResponse;
- (id)requestPayload;

@end

