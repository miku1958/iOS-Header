//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVApplicationController.h>

#import <VideosUI/IKAppContextDelegatePrivate-Protocol.h>

@class NSString;

@interface VUIApplicationController : TVApplicationController <IKAppContextDelegatePrivate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appContext:(id)arg1 scriptForURL:(id)arg2 cachePolicy:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;

@end

