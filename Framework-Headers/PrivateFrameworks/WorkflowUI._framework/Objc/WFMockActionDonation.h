//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/VCActionDonation-Protocol.h>

@class INShortcut, NSData, NSDate, NSString;

@interface WFMockActionDonation : NSObject <VCActionDonation>
{
    NSString *_sourceAppIdentifier;
    NSString *_title;
    NSString *_subtitle;
    NSString *_sourceAppIdentifierForLaunching;
    id _uniqueProperty;
    NSData *_actionData;
}

@property (readonly, copy, nonatomic) NSData *actionData; // @synthesize actionData=_actionData;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) INShortcut *shortcut;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching; // @synthesize sourceAppIdentifierForLaunching=_sourceAppIdentifierForLaunching;
@property (readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) id uniqueProperty; // @synthesize uniqueProperty=_uniqueProperty;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 actionData:(id)arg4;

@end

