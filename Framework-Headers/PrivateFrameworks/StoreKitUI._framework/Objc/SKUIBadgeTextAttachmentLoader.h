//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSHashTable, NSMapTable, NSString, SKUIResourceLoader;

@interface SKUIBadgeTextAttachmentLoader : NSObject <SKUIArtworkRequestDelegate>
{
    NSMapTable *_imageRequests;
    SKUIResourceLoader *_resourceLoader;
    NSHashTable *_stringViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)connectStringView:(id)arg1;
- (void)disconnectStringView:(id)arg1;
- (id)initWithResourceLoader:(id)arg1;
- (BOOL)loadImageForBadge:(id)arg1 layout:(id)arg2 reason:(long long)arg3;

@end

