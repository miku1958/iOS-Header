//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccountUI/NSObject-Protocol.h>

@class ACAccount, ACDataclassAction, ACUIAccountOperationsHelper, ACUIDataclassActionPicker, NSError;

@protocol ACUIAccountOperationsDelegate <NSObject>
- (ACDataclassAction *)operationsHelper:(ACUIAccountOperationsHelper *)arg1 desiredDataclassActionFromPicker:(ACUIDataclassActionPicker *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didRemoveAccount:(ACAccount *)arg2 withSuccess:(BOOL)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 didSaveAccount:(ACAccount *)arg2 withSuccess:(BOOL)arg3 error:(NSError *)arg4;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willRemoveAccount:(ACAccount *)arg2;
- (void)operationsHelper:(ACUIAccountOperationsHelper *)arg1 willSaveAccount:(ACAccount *)arg2;

@optional
- (BOOL)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveAccount:(ACAccount *)arg2;
- (long long)operationsHelper:(ACUIAccountOperationsHelper *)arg1 shouldRemoveOrDisableAccount:(ACAccount *)arg2;
@end

