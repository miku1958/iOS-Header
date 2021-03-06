//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/UIActivityItemLinkPresentationSource-Protocol.h>
#import <VideosUI/UIActivityItemSource-Protocol.h>

@class NSItemProvider, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VUIShareURLActivityItem : NSObject <UIActivityItemSource, UIActivityItemLinkPresentationSource>
{
    NSItemProvider *_itemProvider;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_shareURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURL:(id)arg4;

@end

