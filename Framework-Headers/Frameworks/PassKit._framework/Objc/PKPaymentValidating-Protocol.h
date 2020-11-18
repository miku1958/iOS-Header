//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@protocol PKPaymentValidating <NSObject>
- (BOOL)isValidWithError:(id *)arg1;

@optional
+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
- (BOOL)isValidWithAPIType:(unsigned long long)arg1 withError:(id *)arg2;
@end
