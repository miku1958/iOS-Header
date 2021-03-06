//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNUIAccountsFacadeRequestRunner;

__attribute__((visibility("hidden")))
@interface CNUIAccountsFacade : NSObject
{
    ACAccountStore *_accountStore;
    CNUIAccountsFacadeRequestRunner *_requestRunner;
}

@property (readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, nonatomic) CNUIAccountsFacadeRequestRunner *requestRunner; // @synthesize requestRunner=_requestRunner;

- (void).cxx_destruct;
- (void)fetchiCloudFamilyMembersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAccountStore:(id)arg1 requestRunner:(id)arg2;

@end

