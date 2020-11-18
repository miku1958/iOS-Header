//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKDisbursementApplicationInformation : NSObject <NSSecureCoding>
{
    NSString *_vendorName;
    NSString *_itemName;
    NSData *_iconData;
}

@property (copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property (copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property (copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVendorName:(id)arg1 itemName:(id)arg2 iconData:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
