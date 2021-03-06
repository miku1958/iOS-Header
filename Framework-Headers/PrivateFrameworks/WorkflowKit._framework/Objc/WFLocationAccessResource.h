//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

#import <WorkflowKit/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CDUnknownBlockType _makeAvailableCompletionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (copy, nonatomic) CDUnknownBlockType makeAvailableCompletionHandler; // @synthesize makeAvailableCompletionHandler=_makeAvailableCompletionHandler;
@property (readonly) Class superclass;

+ (BOOL)isSystemResource;
- (void).cxx_destruct;
- (void)finishMakingAvailableWithSuccess:(BOOL)arg1 error:(id)arg2;
- (unsigned long long)globalLevelStatus;
- (id)icon;
- (id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)name;
- (id)protectedResourceDescription;

@end

