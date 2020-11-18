//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView
{
    struct CGSize _textSize;
    NSString *_displayString;
    UIImage *_image;
    double _maxImageHeight;
}

+ (double)defaultHeight;
+ (id)imageForAttachment:(id)arg1;
+ (struct CGRect)imageRectForAttachment:(id)arg1;
+ (id)pngDataForAttachment:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)image;
- (struct CGRect)imageRect;
- (id)initWithAttachment:(id)arg1;

@end

