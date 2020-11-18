//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSDiscardableContent-Protocol.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent>
{
    UIImage *_tintedImage;
    UIColor *_tintColor;
    struct {
        unsigned int isDiscarded:1;
        unsigned int isPressed:1;
        unsigned int useCount;
    } _flags;
}

@property (readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (readonly, nonatomic) UIImage *tintedImage; // @synthesize tintedImage=_tintedImage;

- (void).cxx_destruct;
- (id)_tintedDisclosureImage:(BOOL)arg1;
- (BOOL)beginContentAccess;
- (void)dealloc;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (unsigned long long)hash;
- (id)initWithPressed:(BOOL)arg1 tintColor:(id)arg2;
- (BOOL)isContentDiscarded;
- (BOOL)isEqual:(id)arg1;

@end
