//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSHashTable, NSMapTable, NSString, SKUIImageDataConsumer, SKUIResourceLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate>
{
    NSMapTable *_artworkRequestIDs;
    SKUIImageDataConsumer *_imageDataConsumer;
    SKUIResourceLoader *_loader;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_loader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIImageDataConsumer *imageDataConsumer; // @synthesize imageDataConsumer=_imageDataConsumer;
@property (readonly, nonatomic) struct CGSize imageSize;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)cachedImageForCategory:(id)arg1;
- (id)init;
- (id)initWithArtworkLoader:(id)arg1;
- (void)loadImageForCategory:(id)arg1 reason:(long long)arg2;
- (void)removeObserver:(id)arg1;

@end

