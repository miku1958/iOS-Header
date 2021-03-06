//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICDeveloperTokenProvider-Protocol.h>

@class NSString;

@interface ICDeveloperTokenDefaultProvider : NSObject <ICDeveloperTokenProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchDeveloperTokenForClientInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;

@end

