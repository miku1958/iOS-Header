//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLItemThumbnailGeneratorProtocol-Protocol.h>

@class NSString, QLExtensionThumbnailGenerator, QLItemDataThumbnailGenerator, QLItemURLThumbnailGenerator;

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol>
{
    QLExtensionThumbnailGenerator *_extensionGenerator;
    QLItemURLThumbnailGenerator *_urlGenerator;
    QLItemDataThumbnailGenerator *_dataGenerator;
}

@property (strong, nonatomic) QLItemDataThumbnailGenerator *dataGenerator; // @synthesize dataGenerator=_dataGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) QLExtensionThumbnailGenerator *extensionGenerator; // @synthesize extensionGenerator=_extensionGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) QLItemURLThumbnailGenerator *urlGenerator; // @synthesize urlGenerator=_urlGenerator;

+ (BOOL)hasThirdPartyThumbnailGeneratorForItem:(id)arg1;
- (void).cxx_destruct;
- (id)_fetcherClassesForPreviewItem:(id)arg1;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 badgeType:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)generateThumbnailForItem:(id)arg1 ofSize:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

