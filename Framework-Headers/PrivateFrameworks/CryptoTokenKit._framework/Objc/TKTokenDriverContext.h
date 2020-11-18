//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CryptoTokenKit/TKTokenDriverProtocol-Protocol.h>

@class NSString, TKTokenDriver;

@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol>
{
    TKTokenDriver *_driver;
    NSString *_tokenID;
}

@property (strong) TKTokenDriver *driver; // @synthesize driver=_driver;
@property (strong) NSString *tokenID; // @synthesize tokenID=_tokenID;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
