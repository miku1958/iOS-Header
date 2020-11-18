//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailSupport/MSAttachmentInfo.h>

@class NSString;

@interface MFComposeAttachmentInfo : MSAttachmentInfo
{
    BOOL _isBasicImage;
    BOOL _isDisplayableImage;
    NSString *_className;
}

@property (readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property (readonly, nonatomic) BOOL isBasicImage; // @synthesize isBasicImage=_isBasicImage;
@property (readonly, nonatomic) BOOL isDisplayableImage; // @synthesize isDisplayableImage=_isDisplayableImage;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(BOOL)arg3 isDisplayableImage:(BOOL)arg4 className:(id)arg5;

@end
