//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ContactsDonation/_CNDExtensionContextProtocol-Protocol.h>

@class NSString;

@interface _CNDExtensionContext : NSExtensionContext <_CNDExtensionContextProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)makeHostProtocol;
+ (id)makeVendorProtocol;

@end

