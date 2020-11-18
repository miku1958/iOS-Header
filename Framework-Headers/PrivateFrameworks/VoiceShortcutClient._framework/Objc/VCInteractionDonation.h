//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/VCActionDonation-Protocol.h>

@class INInteraction, INShortcut, NSDate, NSString;

@interface VCInteractionDonation : NSObject <VCActionDonation>
{
    NSString *_identifier;
    NSString *_sourceAppIdentifier;
    NSString *_title;
    NSString *_subtitle;
    INInteraction *_interaction;
}

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property (readonly, nonatomic) INShortcut *shortcut;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property (readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) id uniqueProperty;

+ (void)initialize;
+ (id)timestampDateFormatter;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 interaction:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
