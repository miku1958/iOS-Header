//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SafariServicesExtras)

@property (readonly, nonatomic) NSString *sf_URLScheme;
@property (readonly, nonatomic) BOOL sf_isFeedScheme;

- (id)_sf_ensurePathExtension:(id)arg1;
- (id)sf_lastPathComponentWithoutZipExtension;
- (id)sf_stringByReplacingLastOccurrenceOfWhitespaceWithANonBreakingSpace;
- (id)sf_stringByReplacingMarkupCharactersWithHTMLEntities;
@end
