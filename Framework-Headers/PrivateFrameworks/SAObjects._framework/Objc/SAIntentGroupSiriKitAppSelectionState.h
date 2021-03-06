//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SASyncAppIdentifyingInfo;

@interface SAIntentGroupSiriKitAppSelectionState : AceObject <SAAceSerializable>
{
}

@property (copy, nonatomic) NSString *appConfirmationState;
@property (copy, nonatomic) NSString *appCorrectionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *eligibleApps;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SASyncAppIdentifyingInfo *requestedApp;
@property (readonly) Class superclass;

+ (id)siriKitAppSelectionState;
+ (id)siriKitAppSelectionStateWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

