//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNKeyDescriptor-Protocol.h>

@class CNContactKeyVector, NSString;

@protocol CNKeyDescriptor_Private <CNKeyDescriptor>
- (void)_cn_executeGetterForRepresentedKeys:(id (^)(NSString *))arg1;
- (CNContactKeyVector *)_cn_ignorableKeys;
- (CNContactKeyVector *)_cn_optionalKeys;
- (CNContactKeyVector *)_cn_requiredKeys;

@optional
- (NSString *)_cn_recursiveDescriptionWithPrefix:(NSString *)arg1;
- (void)_cn_setUnauthorizedKeys:(CNContactKeyVector *)arg1;
- (CNContactKeyVector *)_cn_unauthorizedKeys;
@end
