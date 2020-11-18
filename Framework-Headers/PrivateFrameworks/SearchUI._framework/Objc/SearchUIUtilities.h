//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SearchUIUtilities : NSObject
{
}

+ (struct CGRect)absoluteFrameForView:(id)arg1;
+ (id)addAspectRatioConstraintForImageView:(id)arg1;
+ (id)buttonColorForStyle:(unsigned long long)arg1;
+ (id)captionFont;
+ (BOOL)deviceSupportsRotation;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (id)hyphenatableStringForString:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2 cornersToRound:(unsigned long long)arg3 cornerRadius:(double)arg4;
+ (void)initialize;
+ (BOOL)isPortrait;
+ (BOOL)isWideScreen;
+ (struct CGSize)maxThumbnailSize;
+ (double)onePixelForCurrentScreenResolution;
+ (id)openOptions;
+ (void)openPunchout:(id)arg1;
+ (void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performOpenTask:(CDUnknownBlockType)arg1;
+ (double)separatorHeight;
+ (id)shortFootnoteFont;
+ (id)shortSubheadFont;
+ (double)standardTableCellContentInset;
+ (id)textColorForStyle:(unsigned long long)arg1;
+ (id)vibrantButtonColorForStyle:(unsigned long long)arg1;

@end

