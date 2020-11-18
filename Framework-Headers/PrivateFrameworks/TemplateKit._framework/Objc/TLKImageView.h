//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <TemplateKit/TLKObservable-Protocol.h>

@class NSString, TLKImage, TLKImageFittingObject, TLKObserver;

@interface TLKImageView : UIImageView <TLKObservable>
{
    TLKImage *_tlkImage;
    unsigned long long _style;
    TLKImageFittingObject *_imageFittingObject;
    TLKObserver *_imageObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) TLKImageFittingObject *imageFittingObject; // @synthesize imageFittingObject=_imageFittingObject;
@property (strong) TLKObserver *imageObserver; // @synthesize imageObserver=_imageObserver;
@property unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (strong) TLKImage *tlkImage; // @synthesize tlkImage=_tlkImage;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (id)observableProperties;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateImageView;

@end
