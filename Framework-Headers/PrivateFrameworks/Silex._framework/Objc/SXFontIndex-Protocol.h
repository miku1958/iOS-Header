//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString;
@protocol SXFontAttributes;

@protocol SXFontIndex <NSObject>
- (id<SXFontAttributes>)fontAttributesForFontName:(NSString *)arg1;
- (NSString *)fontNameForFontAttributes:(id<SXFontAttributes>)arg1 size:(long long)arg2;
@end

