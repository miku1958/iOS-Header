//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/TILinguisticAssetDownloading-Protocol.h>

@interface TILinguisticAssetDownloadClient : NSObject <TILinguisticAssetDownloading>
{
}

+ (id)_dispatchQueue;
+ (CDUnknownBlockType)_internalHandlerForHandler:(CDUnknownBlockType)arg1 connection:(id)arg2;
- (id)_newXPCConnection;
- (void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
