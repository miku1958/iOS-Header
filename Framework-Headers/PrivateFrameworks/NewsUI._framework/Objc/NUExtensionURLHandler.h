//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUURLHandling-Protocol.h>
#import <NewsUI/SXURLHandling-Protocol.h>

@class NSExtensionContext, NSString;

@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling>
{
    NSExtensionContext *_extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithExtensionContext:(id)arg1;
- (void)openURL:(id)arg1;
- (void)openURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

