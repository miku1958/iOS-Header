//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <AvatarUI/AVTDiscardableContent-Protocol.h>

@class AVTAttributeValueView, NSString, UIView;

@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent>
{
    CDUnknownBlockType discardableContentHandler;
    UIView *_attributeView;
}

@property (strong, nonatomic) UIView *attributeView; // @synthesize attributeView=_attributeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType discardableContentHandler; // @synthesize discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) AVTAttributeValueView *valueView;

+ (id)cellIdentifier;
- (void).cxx_destruct;
- (void)discardContent;
- (void)prepareForReuse;

@end

