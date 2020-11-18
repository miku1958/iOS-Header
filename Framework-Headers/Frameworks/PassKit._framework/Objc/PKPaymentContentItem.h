//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSURLRequest;

@interface PKPaymentContentItem : NSObject <NSSecureCoding>
{
    NSURLRequest *_imageRequest;
    struct CGImage *_image;
    NSAttributedString *_title;
    NSAttributedString *_label;
}

@property (nonatomic) struct CGImage *image; // @synthesize image=_image;
@property (copy, nonatomic) NSURLRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property (copy, nonatomic) NSAttributedString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPaymentContentItem:(id)arg1;

@end

