//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeychainItemAttributes-Protocol.h>

@class NSString;

@interface SFKeychainDataAttributes : NSObject <SFKeychainItemAttributes>
{
    id _keychainDataAttributesInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
