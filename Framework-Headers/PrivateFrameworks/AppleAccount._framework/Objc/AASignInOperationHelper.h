//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface AASignInOperationHelper : NSObject
{
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (void)_refreshEnabledDataclassesForAccount:(id)arg1;
- (void)_saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)signInAccount:(id)arg1 enablingDataclasses:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end
