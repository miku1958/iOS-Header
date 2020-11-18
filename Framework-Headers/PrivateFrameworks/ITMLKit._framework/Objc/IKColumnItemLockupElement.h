//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKButtonElement, IKImageElement, IKOrdinalElement, IKTextBadgeAttachment, IKTextElement, IKVideoElement, NSArray, NSString;

@interface IKColumnItemLockupElement : IKViewElement
{
}

@property (readonly, strong, nonatomic) IKButtonElement *button;
@property (readonly, copy, nonatomic) NSString *columnItemType;
@property (readonly, strong, nonatomic) IKTextElement *descriptionText;
@property (readonly, nonatomic) BOOL hasSeparator;
@property (readonly, nonatomic) IKImageElement *image;
@property (readonly, nonatomic) NSArray *images;
@property (readonly, nonatomic) BOOL isWatchlisted;
@property (readonly, nonatomic) BOOL onlyVisibleOnColumnHighlight;
@property (readonly, strong, nonatomic) IKOrdinalElement *ordinal;
@property (readonly, strong, nonatomic) IKTextElement *secondarySubtitle;
@property (readonly, strong, nonatomic) IKTextElement *subtitle;
@property (readonly, nonatomic) IKTextBadgeAttachment *subtitleBadge;
@property (readonly, strong, nonatomic) NSArray *textElements;
@property (readonly, strong, nonatomic) IKTextElement *title;
@property (readonly, nonatomic) IKTextBadgeAttachment *titleBadge;
@property (readonly, strong, nonatomic) IKVideoElement *video;

- (void)_computeTitle:(id *)arg1 subtitle:(id *)arg2 secondarySubtitle:(id *)arg3 unstyledTextElements:(id *)arg4;

@end

