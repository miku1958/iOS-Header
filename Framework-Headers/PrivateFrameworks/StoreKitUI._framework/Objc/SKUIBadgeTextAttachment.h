//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSObject, NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SKUIBadgeTextAttachment : NSTextAttachment <NSCopying>
{
    NSURL *_imageURL;
    NSObject<OS_dispatch_semaphore> *_imageLoadingSemaphore;
}

@property (readonly, nonatomic) struct CGSize badgeSize;
@property (strong) NSObject<OS_dispatch_semaphore> *imageLoadingSemaphore; // @synthesize imageLoadingSemaphore=_imageLoadingSemaphore;
@property (readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;

- (void).cxx_destruct;
- (void)_ensureImageIsLoaded;
- (void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
