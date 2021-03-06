//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPaymentCredentialMetadata : NSObject
{
    NSString *_localizedDisplayName;
    NSString *_value;
}

@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;

+ (Class)classForValueType:(id)arg1;
+ (id)paymentCredentialMetadataWithConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)displayString;
- (id)initWithConfiguration:(id)arg1;

@end

