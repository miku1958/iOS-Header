//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ADClient : NSObject
{
}

+ (id)sharedClient;
- (void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2;
- (void)determineAppInstallationAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;

@end

