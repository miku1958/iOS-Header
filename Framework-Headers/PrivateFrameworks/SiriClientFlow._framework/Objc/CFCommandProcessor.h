//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriClientFlow/CFCommandProcessing-Protocol.h>

@class CFCommandQueuer, CFServiceHelper, NSString;

@interface CFCommandProcessor : NSObject <CFCommandProcessing>
{
    CFServiceHelper *_serviceHelper;
    CFCommandQueuer *_commandQueuer;
}

@property (strong, nonatomic) CFCommandQueuer *commandQueuer; // @synthesize commandQueuer=_commandQueuer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CFServiceHelper *serviceHelper; // @synthesize serviceHelper=_serviceHelper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleOneWayCommand:(id)arg1;
- (id)initWithServiceHelper:(id)arg1 commandQueuer:(id)arg2;
- (void)isDeviceLockedWithPasscodeWithCompletion:(CDUnknownBlockType)arg1;

@end
