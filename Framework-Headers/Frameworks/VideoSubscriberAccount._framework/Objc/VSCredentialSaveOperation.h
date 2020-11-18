//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAccount, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation
{
    VSOptional *_result;
    VSAccount *_unsavedAccount;
    VSAccountStore *_accountStore;
}

@property (strong, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (strong, nonatomic) VSOptional *result; // @synthesize result=_result;
@property (strong, nonatomic) VSAccount *unsavedAccount; // @synthesize unsavedAccount=_unsavedAccount;

- (void).cxx_destruct;
- (void)_didSaveAccount:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3;
- (void)executionDidBegin;
- (id)init;
- (id)initWithUnsavedAccount:(id)arg1 accountStore:(id)arg2;

@end

