//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem
{
    NSURLCredential *_credential;
    NSURLProtectionSpace *_protectionSpace;
}

@property (readonly, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;

- (void).cxx_destruct;
- (id)completion;
- (id)initWithCredential:(id)arg1;
- (id)initWithCredential:(id)arg1 protectionSpace:(id)arg2;

@end

