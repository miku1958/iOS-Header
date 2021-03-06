//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont, UIFontDescriptor;

@interface PLCommentsFontCache : NSObject
{
    UIFontDescriptor *__shortCaptionFontDescriptor;
    UIFontDescriptor *__emphasizedShortCaptionFontDescriptor;
    UIFontDescriptor *__shortSubheadlineFontDescriptor;
    UIFontDescriptor *__bodyFontDescriptor;
    UIFontDescriptor *__emphasizedBodyFontDescriptor;
    UIFontDescriptor *__shortBodyFontDescriptor;
}

@property (readonly, nonatomic) UIFont *commentAttributionDateFont;
@property (readonly, nonatomic) UIFont *commentAttributionNameFont;
@property (readonly, nonatomic) UIFont *commentEntryFont;
@property (readonly, nonatomic) UIFont *commentSendButtonFont;
@property (readonly, nonatomic) UIFont *commentTextFont;
@property (readonly, nonatomic) UIFont *likeFont;
@property (readonly, nonatomic) UIFont *youLikeFont;

+ (id)sharedCache;
- (id)_bodyFontDescriptor;
- (void)_contentSizesDidChange:(id)arg1;
- (id)_emphasizedBodyFontDescriptor;
- (id)_emphasizedShortCaptionFontDescriptor;
- (void)_invalidateCache;
- (id)_shortBodyFontDescriptor;
- (id)_shortCaptionFontDescriptor;
- (id)_shortSubheadlineFontDescriptor;
- (void)dealloc;
- (id)init;

@end

