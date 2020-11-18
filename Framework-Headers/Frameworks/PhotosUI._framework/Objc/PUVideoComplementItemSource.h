//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/UIActivityItemSource-Protocol.h>

@class NSString, NSURL, PFVideoComplement;

@interface PUVideoComplementItemSource : NSObject <UIActivityItemSource>
{
    NSURL *_bundleURL;
    PFVideoComplement *_videoComplement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithVideoComplement:(id)arg1 bundleAtURL:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)initWithVideoComplement:(id)arg1;
- (id)initWithVideoComplementBundleAtURL:(id)arg1;

@end
