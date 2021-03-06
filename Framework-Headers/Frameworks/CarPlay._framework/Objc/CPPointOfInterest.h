//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPImageSet, CPTextButton, MKMapItem, NSString, NSUUID, UIImage;

@interface CPPointOfInterest : NSObject <NSSecureCoding>
{
    MKMapItem *_location;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSString *_detailTitle;
    NSString *_detailSubtitle;
    NSString *_detailSummary;
    CPTextButton *_primaryButton;
    CPTextButton *_secondaryButton;
    id _userInfo;
    NSUUID *_identifier;
    CPImageSet *_pinImageSet;
}

@property (copy, nonatomic) NSString *detailSubtitle; // @synthesize detailSubtitle=_detailSubtitle;
@property (copy, nonatomic) NSString *detailSummary; // @synthesize detailSummary=_detailSummary;
@property (copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) MKMapItem *location; // @synthesize location=_location;
@property (strong, nonatomic) UIImage *pinImage; // @dynamic pinImage;
@property (strong, nonatomic) CPImageSet *pinImageSet; // @synthesize pinImageSet=_pinImageSet;
@property (strong, nonatomic) CPTextButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property (strong, nonatomic) CPTextButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 detailTitle:(id)arg5 detailSubtitle:(id)arg6 detailSummary:(id)arg7 pinImage:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPointOfInterest:(id)arg1;

@end

