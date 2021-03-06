//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemThumbnailGeneratorProtocol-Protocol.h>

@class NSString, QLExtensionThumbnailGenerator;

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol>
{
    QLExtensionThumbnailGenerator *_extensionGenerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) QLExtensionThumbnailGenerator *extensionGenerator; // @synthesize extensionGenerator=_extensionGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetcherClassesForPreviewItem:(id)arg1;
- (void)_generateThumbnailForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(struct CGSize)arg3 minimumDimension:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_generateThumbnailWithFPItem:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_generateThumbnailWithURL:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

