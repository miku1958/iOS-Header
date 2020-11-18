//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPassContent.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding>
{
    BOOL _supportsTransitOnly;
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSDictionary *_localizedSuspendedReasonsByAID;
    NSArray *_availableActions;
}

@property (copy, nonatomic) NSString *appURLScheme; // @synthesize appURLScheme=_appURLScheme;
@property (copy, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property (copy, nonatomic) NSString *cobrandName; // @synthesize cobrandName=_cobrandName;
@property (copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID; // @synthesize localizedSuspendedReasonsByAID=_localizedSuspendedReasonsByAID;
@property (copy, nonatomic) NSString *messagePushTopic; // @synthesize messagePushTopic=_messagePushTopic;
@property (copy, nonatomic) NSURL *messageServiceURL; // @synthesize messageServiceURL=_messageServiceURL;
@property (nonatomic) BOOL supportsTransitOnly; // @synthesize supportsTransitOnly=_supportsTransitOnly;
@property (copy, nonatomic) NSString *transactionPushTopic; // @synthesize transactionPushTopic=_transactionPushTopic;
@property (copy, nonatomic) NSURL *transactionServiceURL; // @synthesize transactionServiceURL=_transactionServiceURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end

