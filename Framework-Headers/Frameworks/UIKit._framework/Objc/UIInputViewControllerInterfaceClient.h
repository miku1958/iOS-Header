//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;

__attribute__((visibility("hidden")))
@interface UIInputViewControllerInterfaceClient : NSExtensionContext
{
    id<_UIIVCInterface> _forwardingInterface;
}

@property (strong, nonatomic) id<_UIIVCInterface> forwardingInterface; // @synthesize forwardingInterface=_forwardingInterface;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_tearDownRemoteService;
- (void)dealloc;
- (id)responseDelegate;

@end

