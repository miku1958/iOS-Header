//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKServiceProviderPurchaseAction : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;

+ (id)actionWithDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToServiceProviderPurchaseAction:(id)arg1;

@end

