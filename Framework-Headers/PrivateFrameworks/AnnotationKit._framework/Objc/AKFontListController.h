//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIFont;

@interface AKFontListController : NSObject
{
    NSArray *_fonts;
    UIFont *_defaultFont;
}

@property (strong) UIFont *defaultFont; // @synthesize defaultFont=_defaultFont;
@property (strong) NSArray *fonts; // @synthesize fonts=_fonts;

+ (id)attributedStringForFont:(id)arg1;
- (void).cxx_destruct;
- (id)_createFontsList;
- (id)initWithController:(id)arg1;

@end

