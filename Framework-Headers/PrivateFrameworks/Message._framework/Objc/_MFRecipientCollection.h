//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface _MFRecipientCollection : NSObject
{
    NSMutableArray *_to;
    NSMutableArray *_cc;
    NSMutableArray *_bcc;
}

@property (readonly, copy, nonatomic) NSArray *bccRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *bccRecipients;
@property (readonly, copy, nonatomic) NSArray *ccRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *ccRecipients;
@property (readonly, copy, nonatomic) NSArray *toRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *toRecipients;

- (void).cxx_destruct;
- (void)addBCCRecipient:(id)arg1;
- (void)addBCCRecipientWithAddress:(id)arg1 displayName:(id)arg2;
- (void)addCCRecipient:(id)arg1;
- (void)addCCRecipientWithAddress:(id)arg1 displayName:(id)arg2;
- (void)addToRecipient:(id)arg1;
- (void)addToRecipientWithAddress:(id)arg1 displayName:(id)arg2;
- (id)init;

@end

