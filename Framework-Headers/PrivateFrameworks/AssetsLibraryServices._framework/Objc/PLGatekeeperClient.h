//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject
{
    PLAssetsdClient *_assetsdClient;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getLibrarySizes:(CDUnknownBlockType)arg1;
- (void)getLibrarySizesFromDB:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(BOOL)arg4 streamingAllowed:(BOOL)arg5 restrictToPlayable:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 handler:(CDUnknownBlockType)arg8;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(BOOL)arg3 streamingAllowed:(BOOL)arg4 restrictToPlayable:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 handler:(CDUnknownBlockType)arg7;

@end
