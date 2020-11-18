//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <UIKit/_NSFileProviderVendor-Protocol.h>

@class NSFileProviderExtension;

__attribute__((visibility("hidden")))
@interface _NSFileProviderExtensionContext : NSExtensionContext <_NSFileProviderVendor>
{
    NSFileProviderExtension *_principalInstance;
}

@property (nonatomic) NSFileProviderExtension *principalInstance; // @synthesize principalInstance=_principalInstance;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)_URLForItemIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_identifierForItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_itemChangedAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performInitialSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)_providePlaceholderAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startProvidingItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stopProvidingItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
