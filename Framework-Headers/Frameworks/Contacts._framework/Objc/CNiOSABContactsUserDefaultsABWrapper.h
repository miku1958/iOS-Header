//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABContactsUserDefaultsABWrapper : NSObject
{
}

- (unsigned int)ABPersonGetCompositeNameFormatForRecord:(void *)arg1;
- (unsigned int)ABPersonGetEditNameFormat;
- (unsigned int)ABPersonGetShortNameFormat;
- (BOOL)ABPersonGetShortNameFormatEnabled;
- (BOOL)ABPersonGetShortNamePreferNicknames;
- (unsigned int)ABPersonGetSortOrdering;
- (void)ABPersonSetCompositeNameFormat:(unsigned int)arg1;
- (void)ABPersonSetShortNameFormat:(unsigned int)arg1;
- (void)ABPersonSetShortNameFormatEnabled:(BOOL)arg1;
- (void)ABPersonSetShortNamePreferNicknames:(BOOL)arg1;
- (id)abDefaultCountryCode;
- (id)displayedContactsFilterRepresentationPref;
- (void)setDisplayedContactsFilterRepresentationPref:(id)arg1;

@end

