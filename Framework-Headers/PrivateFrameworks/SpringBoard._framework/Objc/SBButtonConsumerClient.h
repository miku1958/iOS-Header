//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol FBSServiceFacilityClientHandle;

@interface SBButtonConsumerClient : NSObject
{
    BOOL _entitledToConsumeButtonsInBackground;
    BOOL _application;
    BOOL _runningVisible;
    BOOL _suspended;
    id<FBSServiceFacilityClientHandle> _systemServiceClient;
    NSMutableSet *_registrations;
}

@property (nonatomic, getter=isApplication) BOOL application; // @synthesize application=_application;
@property (readonly, nonatomic) BOOL canReceiveEvents;
@property (nonatomic, getter=isEntitledToConsumeButtonsInBackground) BOOL entitledToConsumeButtonsInBackground; // @synthesize entitledToConsumeButtonsInBackground=_entitledToConsumeButtonsInBackground;
@property (strong, nonatomic) NSMutableSet *registrations; // @synthesize registrations=_registrations;
@property (nonatomic, getter=isRunningVisible) BOOL runningVisible; // @synthesize runningVisible=_runningVisible;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property (strong, nonatomic) id<FBSServiceFacilityClientHandle> systemServiceClient; // @synthesize systemServiceClient=_systemServiceClient;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

