//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, PKActivationMethodTableViewCell, PKPaymentVerificationController;

@interface PKPaymentSetupVerificationMethodTableController : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    PKActivationMethodTableViewCell *_sizingCell;
    PKPaymentVerificationController *_verificationController;
    NSArray *_verificationChannels;
    unsigned long long _selectedIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *verificationChannels; // @synthesize verificationChannels=_verificationChannels;
@property (readonly, nonatomic) PKPaymentVerificationController *verificationController; // @synthesize verificationController=_verificationController;

- (void).cxx_destruct;
- (id)_detailTextLabelForChannel:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithVerificationController:(id)arg1;
- (id)newVerificationRequest;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

