//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, PXSearchTokenRepresentedObject, UIImage, UISearchToken;

@interface PXSearchToken : NSObject
{
    struct UISearchToken *_searchObject;
    PXSearchTokenRepresentedObject *_representedObject;
    struct UIImage *_image;
    NSString *_text;
    NSAttributedString *_attributedText;
}

@property (copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) PXSearchTokenRepresentedObject *representedObject; // @synthesize representedObject=_representedObject;
@property (strong, nonatomic) UISearchToken *searchObject; // @synthesize searchObject=_searchObject;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)initWithAttributedText:(id)arg1 searchObject:(struct UISearchToken *)arg2 representedObject:(id)arg3;
- (id)initWithText:(id)arg1 image:(struct UIImage *)arg2 representedObject:(id)arg3;
- (id)initWithText:(id)arg1 searchObject:(struct UISearchToken *)arg2 representedObject:(id)arg3;
- (id)textValue;

@end
