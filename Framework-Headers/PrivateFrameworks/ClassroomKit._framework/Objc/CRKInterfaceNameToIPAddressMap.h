//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CRKInterfaceNameToIPAddressMap : NSObject
{
    NSDictionary *mIPAddressesByInterfaceName;
}

+ (id)makeEnumerator;
+ (id)makeIPAddressesByInterfaceName;
- (void).cxx_destruct;
- (id)IPAddressForInterfaceName:(id)arg1;
- (id)init;

@end
