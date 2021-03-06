//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NUArticleActivityItemSource.h>

@class NSString;

@interface NUArticleTextActivityItemSource : NUArticleActivityItemSource
{
    NSString *_itemTitle;
}

@property (readonly, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithHeadline:(id)arg1;

@end

