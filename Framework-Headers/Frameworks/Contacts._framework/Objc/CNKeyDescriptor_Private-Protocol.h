//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNKeyDescriptor-Protocol.h>

@class NSSet, NSString;

@protocol CNKeyDescriptor_Private <CNKeyDescriptor>
- (void)_cn_executeGetterForRepresentedKeys:(id (^)(NSString *))arg1;

@optional
- (NSString *)_cn_recursiveDescriptionWithPrefix:(NSString *)arg1;
- (NSSet *)_cn_requiredKeys;
@end

