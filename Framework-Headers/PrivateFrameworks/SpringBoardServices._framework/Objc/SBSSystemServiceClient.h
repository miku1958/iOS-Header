//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSSystemServiceClient : SBSServiceFacilityClient
{
    BOOL _buttonEventServiceIsWaitingForServerMessages;
}

+ (id)serviceFacilityIdentifier;
- (void)_handleButtonEventConsumePressMessage:(id)arg1;
- (void)acquireAssertionOfType:(long long)arg1 forReason:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)arg1;
- (void)setEventMask:(unsigned long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;

@end
