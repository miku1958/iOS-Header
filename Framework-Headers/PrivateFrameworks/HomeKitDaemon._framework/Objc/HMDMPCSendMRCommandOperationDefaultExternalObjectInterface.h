//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMPCSendMRCommandOperationExternalObjectInterface-Protocol.h>

@class NSString;

@interface HMDMPCSendMRCommandOperationDefaultExternalObjectInterface : HMFObject <HMDMPCSendMRCommandOperationExternalObjectInterface>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createMPCAssistantCommand;

@end
