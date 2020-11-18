//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutClient/NSObject-Protocol.h>

@class NSData, NSDate, NSString;

@protocol VCActionDonation <NSObject>

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *fullDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *keyImageData;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForDisplay;
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifierForLaunching;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id uniqueProperty;

- (void)createActionWithCompletionHandler:(void (^)(WFLAction *, NSError *))arg1;
@end

