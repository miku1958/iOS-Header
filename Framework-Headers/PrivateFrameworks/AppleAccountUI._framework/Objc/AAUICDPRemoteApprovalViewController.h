//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <AppleAccountUI/AAUICDPRemoteSecretChallengeHandler-Protocol.h>

@class CDPRemoteDeviceSecretValidator, NSArray, NSString;

@interface AAUICDPRemoteApprovalViewController : UITableViewController <AAUICDPRemoteSecretChallengeHandler>
{
    NSArray *_devices;
    CDPRemoteDeviceSecretValidator *_validator;
    BOOL _shouldShowCancelButton;
    CDUnknownBlockType _challengeResponseHandler;
}

@property (copy, nonatomic) CDUnknownBlockType challengeResponseHandler; // @synthesize challengeResponseHandler=_challengeResponseHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldShowCancelButton; // @synthesize shouldShowCancelButton=_shouldShowCancelButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)initWithDevices:(id)arg1 validator:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

