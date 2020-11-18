//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, VSAccountStore, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCredentialSaveOperation : VSAsyncOperation
{
    VSOptional *_result;
    NSArray *_unsavedAccounts;
    VSAccountStore *_accountStore;
}

@property (strong, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (strong, nonatomic) VSOptional *result; // @synthesize result=_result;
@property (copy, nonatomic) NSArray *unsavedAccounts; // @synthesize unsavedAccounts=_unsavedAccounts;

- (void).cxx_destruct;
- (void)_didSaveAccounts:(id)arg1 withResult:(BOOL)arg2 error:(id)arg3;
- (void)executionDidBegin;
- (id)init;
- (id)initWithUnsavedAccounts:(id)arg1 accountStore:(id)arg2;

@end
