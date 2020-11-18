//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CryptoTokenKit/TKTokenDriverProtocol-Protocol.h>

@class NSString, TKTokenDriver;

__attribute__((visibility("hidden")))
@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol>
{
    BOOL _invalidated;
    TKTokenDriver *_driver;
    NSString *_tokenID;
}

@property (strong) TKTokenDriver *driver; // @synthesize driver=_driver;
@property BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (strong) NSString *tokenID; // @synthesize tokenID=_tokenID;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

