//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContextKitExtraction/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CKContextDonation : NSObject <NSSecureCoding>
{
    NSMutableArray *_items;
    unsigned long long _nonce;
    NSString *_donorBundleIdentifier;
}

@property (readonly, nonatomic) NSString *donorBundleIdentifier; // @synthesize donorBundleIdentifier=_donorBundleIdentifier;
@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic) unsigned long long nonce; // @synthesize nonce=_nonce;

+ (id)establishServiceConnection;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_concatenatedRequestTextUsingDebugText:(BOOL)arg1;
- (void)addItem:(id)arg1;
- (id)concatenatedRequestsDebugText;
- (id)concatenatedRequestsText;
- (id)description;
- (void)donate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDonations:(id)arg1 donorBundleIdentifier:(id)arg2;
- (id)initWithDonorBundleIdentifier:(id)arg1;

@end
