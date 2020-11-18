//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/MSMailDefaultService.h>

@class NSArray, NSString;

@interface MSPushRegistration : MSMailDefaultService
{
    NSString *_bundleIdentifier;
    NSString *_accountIdentifier;
    NSString *_notificationNamePrefix;
    NSArray *_mailboxNames;
}

@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSArray *mailboxNames; // @synthesize mailboxNames=_mailboxNames;
@property (copy, nonatomic) NSString *notificationNamePrefix; // @synthesize notificationNamePrefix=_notificationNamePrefix;

- (void)dealloc;
- (id)init;
- (void)registerForPush:(CDUnknownBlockType)arg1;

@end

