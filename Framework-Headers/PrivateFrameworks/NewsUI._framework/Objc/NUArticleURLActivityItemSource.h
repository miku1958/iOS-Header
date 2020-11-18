//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSURL;

@interface NUArticleURLActivityItemSource : NUArticleActivityItemSource
{
    NSURL *_articleURL;
}

@property (readonly, nonatomic) NSURL *articleURL; // @synthesize articleURL=_articleURL;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)bodyStringForMailMessage;
- (id)initWithHeadline:(id)arg1 URLModifier:(id)arg2;

@end

