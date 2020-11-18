//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSPredicate, UIColor;

@interface UIFontPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _includeFaces;
    BOOL _displayUsingSystemFont;
    BOOL __hideSearchBar;
    unsigned int _filteredTraits;
    NSPredicate *_filteredLanguagesPredicate;
    UIColor *__tintColor;
}

@property (nonatomic, setter=_setHideSearchBar:) BOOL _hideSearchBar; // @synthesize _hideSearchBar=__hideSearchBar;
@property (strong, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // @synthesize _tintColor=__tintColor;
@property (nonatomic) BOOL displayUsingSystemFont; // @synthesize displayUsingSystemFont=_displayUsingSystemFont;
@property (copy, nonatomic) NSPredicate *filteredLanguagesPredicate; // @synthesize filteredLanguagesPredicate=_filteredLanguagesPredicate;
@property (nonatomic) unsigned int filteredTraits; // @synthesize filteredTraits=_filteredTraits;
@property (nonatomic) BOOL includeFaces; // @synthesize includeFaces=_includeFaces;

+ (id)filterPredicateForFilteredLanguages:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
