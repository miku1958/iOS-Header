//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitServices/NSObject-Protocol.h>

@class NSArray, NSNumber, UISApplicationInitializationContextParameters;
@protocol __NSString__;

@protocol UISApplicationSupportXPCServerInterface <NSObject>
- (void)destroyScenesPersistentIdentifiers:(NSArray<__NSString__> *)arg1 animationType:(NSNumber *)arg2 destroySessions:(NSNumber *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (void)initializeClientWithParameters:(UISApplicationInitializationContextParameters *)arg1 completion:(void (^)(UISApplicationInitializationContext *, NSError *))arg2;
- (oneway void)requestPasscodeUnlockUIWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
@end

