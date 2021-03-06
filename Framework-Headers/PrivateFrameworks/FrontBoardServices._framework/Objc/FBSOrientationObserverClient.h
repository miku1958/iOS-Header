//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSServiceFacilityClient
{
    id<FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

- (void).cxx_destruct;
- (void)_getActiveInterfaceOrientationSynchronously:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureConnectMessage:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;
- (void)invalidate;
- (void)registerOrientationInterest:(unsigned int)arg1;

@end

