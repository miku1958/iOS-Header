//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipKit/NSObject-Protocol.h>

@class NSString, TPSConstellationContentParser, UIFont;

@protocol TPSConstellationContentParserDelegate <NSObject>

@optional
- (NSString *)constellationContentParser:(TPSConstellationContentParser *)arg1 personalizedStringForID:(unsigned long long)arg2;
- (void)constellationContentParserAttributedStringUpdated:(TPSConstellationContentParser *)arg1;
- (UIFont *)constellationContentParserBoldFont:(TPSConstellationContentParser *)arg1;
- (UIFont *)constellationContentParserItalicFont:(TPSConstellationContentParser *)arg1;
@end
