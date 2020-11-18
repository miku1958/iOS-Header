//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MXExtensionContext.h>

#import <MapKit/_MXExtensionHostContextType-Protocol.h>

@class NSString;
@protocol _MXExtensionURLHandling;

__attribute__((visibility("hidden")))
@interface _MXExtensionHostContext : _MXExtensionContext <_MXExtensionHostContextType>
{
    id<_MXExtensionURLHandling> _URLHandlingDelegate;
}

@property (weak, nonatomic) id<_MXExtensionURLHandling> URLHandlingDelegate; // @synthesize URLHandlingDelegate=_URLHandlingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

