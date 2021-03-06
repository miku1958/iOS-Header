//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/CNUIPRLikenessLoadingPlaceholderProvider.h>

@interface CNUIPRLikenessLoadingGroupPlaceholderProvider : CNUIPRLikenessLoadingPlaceholderProvider
{
    unsigned long long _backgroundStyle;
}

@property (readonly, nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;

- (id)initWithBackgroundStyle:(unsigned long long)arg1;
- (struct CGImage *)renderCircularImageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)renderRoundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;

@end

