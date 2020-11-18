//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CoreFollowUpUI/FLExtensionHostContextInterface-Protocol.h>

@class NSString;
@protocol FLExtensionHostContextInterface;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface>
{
    id<FLExtensionHostContextInterface> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FLExtensionHostContextInterface> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)extensionDidFinish;
- (id)remoteContextWithErrorHandler:(CDUnknownBlockType)arg1;

@end

