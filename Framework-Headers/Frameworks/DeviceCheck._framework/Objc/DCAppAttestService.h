//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DCAppAttestService : NSObject
{
}

@property (readonly, getter=isSupported) BOOL supported;

+ (id)sharedService;
- (BOOL)_isSupportedReturningError:(id *)arg1;
- (id)_loadAppUUID;
- (id)_rewrapAsDCError:(id)arg1;
- (void)_saveAppUUID:(id)arg1;
- (void)attestKey:(id)arg1 clientDataHash:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAssertion:(id)arg1 clientDataHash:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateKeyWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

