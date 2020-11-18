//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class NSString, NSURL;

@interface FPUIActionExtensionContext : NSExtensionContext
{
    NSString *_domainIdentifier;
    NSURL *_initialURL;
}

@property (copy) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property (copy) NSURL *initialURL; // @synthesize initialURL=_initialURL;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (id)_remoteContext;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequest;
- (void)completeRequestWithUserInfo:(id)arg1;
- (void)didEncounterError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
