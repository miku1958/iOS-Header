//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/NSObject-Protocol.h>
#import <QuickLookThumbnailing/NSXPCProxyCreating-Protocol.h>

@protocol QLThumbnailGenerationRequest <NSXPCProxyCreating, NSObject>
- (void)cancel;
- (void)waitForCompletionWithHandler:(void (^)(NSError *))arg1;
@end

