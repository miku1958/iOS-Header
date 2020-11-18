//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, UIImage;

@interface _MSMessageMediaPayload : NSObject <NSSecureCoding>
{
    BOOL _isSticker;
    UIImage *_image;
    NSURL *_mediaURL;
    NSString *_mediaType;
    NSString *_text;
    NSData *_mediaData;
    NSString *_mediaFilename;
    NSData *_data;
    NSString *_accessibilityLabel;
    NSDictionary *_attributionInfo;
}

@property (copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (copy, nonatomic) NSDictionary *attributionInfo; // @synthesize attributionInfo=_attributionInfo;
@property (copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) BOOL isSticker; // @synthesize isSticker=_isSticker;
@property (copy, nonatomic) NSData *mediaData; // @synthesize mediaData=_mediaData;
@property (copy, nonatomic) NSString *mediaFilename; // @synthesize mediaFilename=_mediaFilename;
@property (copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property (copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSticker:(id)arg1;

@end
