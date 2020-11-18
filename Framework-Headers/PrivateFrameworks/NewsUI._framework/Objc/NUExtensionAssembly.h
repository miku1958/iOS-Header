//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NFAssembly-Protocol.h>

@class NSString;
@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject <NFAssembly>
{
    id<NUExtensionContextProvider> _extensionContextProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) id<NUExtensionContextProvider> extensionContextProvider; // @synthesize extensionContextProvider=_extensionContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithExtensionContextProvider:(id)arg1;
- (void)loadInRegistry:(id)arg1;

@end

