//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAP2AccessoryServerPairingDriverWorkItem.h>

@class NSError;

@interface HAP2AccessoryServerPairingDriverAuthPromptWorkItem : HAP2AccessoryServerPairingDriverWorkItem
{
    unsigned long long _permissionType;
    NSError *_cancelError;
}

@property (strong, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property (readonly, nonatomic) unsigned long long permissionType; // @synthesize permissionType=_permissionType;

+ (id)promptForType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (id)description;
- (id)initWithPermissionType:(unsigned long long)arg1;
- (void)runForPairingDriver:(id)arg1;

@end

