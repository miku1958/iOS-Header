//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL, WBSParsecImageRepresentation;

@interface WBSParsecBuyButton : WBSParsecModel
{
    BOOL _enabled;
    NSString *_title;
    NSString *_subtitle;
    NSString *_offerIdentifier;
    NSString *_adamID;
    WBSParsecImageRepresentation *_imageRepresentation;
    long long _imageAlignment;
    NSURL *_url;
}

@property (readonly, copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) long long imageAlignment; // @synthesize imageAlignment=_imageAlignment;
@property (readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property (readonly, copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property (readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)schema;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
