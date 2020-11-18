//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ReplayKit/RPVideoEditorExtensionHostProtocol-Protocol.h>

@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol>
{
    RPVideoEditorHostViewController *_hostViewController;
}

@property (weak, nonatomic) RPVideoEditorHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;
- (id)extensionObjectProxy;

@end
