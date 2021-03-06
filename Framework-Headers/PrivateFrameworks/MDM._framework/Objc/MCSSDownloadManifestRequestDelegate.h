//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import <MDM/SSDownloadManifestRequestDelegate-Protocol.h>

@class NSString, SSDownloadManifestRequest, SSDownloadManifestResponse;

@interface MCSSDownloadManifestRequestDelegate : MCSSRequestDelegate <SSDownloadManifestRequestDelegate>
{
    SSDownloadManifestResponse *_response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) SSDownloadManifestRequest *request; // @dynamic request;
@property (nonatomic) BOOL shouldHideUserPrompts;
@property (readonly) Class superclass;

+ (id)instanceWithURLRequest:(id)arg1;
- (void).cxx_destruct;
- (void)downloadManifestRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end

