//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WBSRemotePlistController;

@interface WBSDomainWhitelistManager : NSObject
{
    WBSRemotePlistController *_remotePlistController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithBuiltInWhitelistURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (void)isDomainWhitelisted:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForTermination;

@end

