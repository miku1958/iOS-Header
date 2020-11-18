//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMediaItem-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFImage, SFPunchout, SFText;

@interface SFMediaItem : NSObject <SFMediaItem, NSSecureCoding, NSCopying>
{
    NSString *_title;
    SFText *_subtitleText;
    SFImage *_thumbnail;
    SFImage *_reviewGlyph;
    SFImage *_overlayImage;
    NSString *_reviewText;
    SFPunchout *_punchout;
    NSArray *_subtitleCustomLineBreaking;
    NSArray *_buyOptions;
    NSString *_contentAdvisory;
    SFImage *_contentAdvisoryImage;
}

@property (copy, nonatomic) NSArray *buyOptions; // @synthesize buyOptions=_buyOptions;
@property (copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property (strong, nonatomic) SFImage *contentAdvisoryImage; // @synthesize contentAdvisoryImage=_contentAdvisoryImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) SFImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property (strong, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property (strong, nonatomic) SFImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property (copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property (copy, nonatomic) NSArray *subtitleCustomLineBreaking; // @synthesize subtitleCustomLineBreaking=_subtitleCustomLineBreaking;
@property (strong, nonatomic) SFText *subtitleText; // @synthesize subtitleText=_subtitleText;
@property (readonly) Class superclass;
@property (strong, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

@end

