//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NNMKSyncedAccount : NSObject
{
    BOOL _shouldArchive;
    BOOL _resendRequested;
    NSString *_accountId;
    NSString *_displayName;
    NSArray *_emailAddresses;
    unsigned long long _resendInterval;
    unsigned long long _sourceType;
    NSString *_username;
    NSString *_localId;
}

@property (strong, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (strong, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property (nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;
@property (nonatomic) BOOL resendRequested; // @synthesize resendRequested=_resendRequested;
@property (nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property (nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property (strong, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)account;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

