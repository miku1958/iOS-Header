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

@end
