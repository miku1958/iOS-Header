//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <Intents/INExtensionContextHosting-Protocol.h>

@class NSBundle, NSString;
@protocol INExtensionContextHostDelegate;

@interface INExtensionContextHost : NSExtensionContext <INExtensionContextHosting>
{
    id<INExtensionContextHostDelegate> _delegate;
    NSBundle *_extensionBundle;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<INExtensionContextHostDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSBundle *extensionBundle; // @synthesize extensionBundle=_extensionBundle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)extensionContextVendorWantsToCacheImage:(id)arg1;

@end

