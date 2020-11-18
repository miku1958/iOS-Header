//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSString, NSURL;

@interface _SFActivityItemProvider : UIActivityItemProvider
{
    NSURL *_url;
    NSString *_pageTitle;
}

@property (copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2;
- (id)item;

@end
