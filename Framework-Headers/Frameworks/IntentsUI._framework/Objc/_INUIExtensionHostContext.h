//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <IntentsUI/_INUIExtensionContextHosting-Protocol.h>

@class NSString;
@protocol INUIExtensionHostContextDelegate;

__attribute__((visibility("hidden")))
@interface _INUIExtensionHostContext : NSExtensionContext <_INUIExtensionContextHosting>
{
    id<INUIExtensionHostContextDelegate> _extensionHostContextDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<INUIExtensionHostContextDelegate> extensionHostContextDelegate; // @synthesize extensionHostContextDelegate=_extensionHostContextDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (id)_errorHandlingExtensionContextProxy;
- (void)requestHandlingOfIntent:(id)arg1;
- (void)setExtensionContextState:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

