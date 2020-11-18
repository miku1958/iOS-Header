//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISBundle : NSObject <ISScalableCompositorResource>
{
    struct __CFBundle *_bundle;
}

@property (readonly, copy) NSURL *assetCatalogURL;
@property struct __CFBundle *bundle; // @synthesize bundle=_bundle;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly) Class superclass;

+ (id)frameworkBundle;
+ (id)frameworkLocalizedString:(id)arg1;
+ (id)iconsetResourceAssetsCatalogURL;
+ (id)iconsetResourceBundle;
+ (id)mainBundle;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)compositorResource;
- (void)dealloc;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithCFBundle:(struct __CFBundle *)arg1;
- (id)initWithURL:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;

@end
