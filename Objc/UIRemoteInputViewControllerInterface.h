//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <UIKit/_UIIVCResponseDelegate-Protocol.h>

@class NSString;
@protocol _UIIVCResponseDelegate;

__attribute__((visibility("hidden")))
@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate>
{
    id<_UIIVCResponseDelegate> _responseDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<_UIIVCResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performInputViewControllerOutput:(id)arg1;
- (void)_tearDownRemoteService;

@end

