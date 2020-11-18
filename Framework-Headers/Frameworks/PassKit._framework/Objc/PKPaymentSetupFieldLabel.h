//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField
{
    NSString *_buttonTitle;
    NSString *_detailTitle;
    NSString *_detailSubtitle;
    NSString *_detailBody;
    NSString *_businessChatButtonTitle;
    NSString *_businessChatIdentifier;
    NSString *_businessChatIntentName;
    unsigned long long _alingment;
}

@property (nonatomic) unsigned long long alingment; // @synthesize alingment=_alingment;
@property (copy, nonatomic) NSString *businessChatButtonTitle; // @synthesize businessChatButtonTitle=_businessChatButtonTitle;
@property (copy, nonatomic) NSString *businessChatIdentifier; // @synthesize businessChatIdentifier=_businessChatIdentifier;
@property (copy, nonatomic) NSString *businessChatIntentName; // @synthesize businessChatIntentName=_businessChatIntentName;
@property (copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (copy, nonatomic) NSString *detailBody; // @synthesize detailBody=_detailBody;
@property (copy, nonatomic) NSString *detailSubtitle; // @synthesize detailSubtitle=_detailSubtitle;
@property (copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)_commonUpdate;
- (id)displayString;
- (unsigned long long)fieldType;
- (void)setCurrentValue:(id)arg1;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)arg1;

@end
