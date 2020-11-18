//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXTextStyleFontDescribing-Protocol.h>

@class NSString, UIColor;
@protocol SXTextStyleFontAttributes;

@interface SXDropCapStyle : SXJSONObject <SXTextStyleFontDescribing>
{
}

@property (readonly, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXTextStyleFontAttributes> fontAttributes; // @dynamic fontAttributes;
@property (readonly, nonatomic) NSString *fontName; // @dynamic fontName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long numberOfCharacters; // @dynamic numberOfCharacters;
@property (readonly, nonatomic) long long numberOfLines; // @dynamic numberOfLines;
@property (readonly, nonatomic) long long numberOfRaisedLines; // @dynamic numberOfRaisedLines;
@property (readonly, nonatomic) long long padding; // @dynamic padding;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *textColor; // @dynamic textColor;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end

