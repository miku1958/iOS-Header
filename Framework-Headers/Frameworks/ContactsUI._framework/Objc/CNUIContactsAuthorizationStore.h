//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIContactsAuthorizationModelFetching-Protocol.h>
#import <ContactsUI/CNUIContactsAuthorizationModelSaving-Protocol.h>

@class NSString;
@protocol CNTCCSettings, CNUICoreRemoteApplicationIconFetching;

__attribute__((visibility("hidden")))
@interface CNUIContactsAuthorizationStore : NSObject <CNUIContactsAuthorizationModelFetching, CNUIContactsAuthorizationModelSaving>
{
    NSString *_bundleIdentifier;
    id<CNTCCSettings> _tccSettings;
    id<CNUICoreRemoteApplicationIconFetching> _iconFetcher;
}

@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNUICoreRemoteApplicationIconFetching> iconFetcher; // @synthesize iconFetcher=_iconFetcher;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<CNTCCSettings> tccSettings; // @synthesize tccSettings=_tccSettings;

- (void).cxx_destruct;
- (id)contactsAuthorizationModel;
- (id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)recordForBundleIdentifier:(id)arg1;
- (id)records;
- (id)saveContactsAuthorizationModel:(id)arg1;

@end

