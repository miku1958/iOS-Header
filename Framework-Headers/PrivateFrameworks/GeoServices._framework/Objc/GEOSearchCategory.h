//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOFeatureStyleAttributes, GEOPDAutocompleteEntry, GEOPDBrowseCategory, NSArray, NSData, NSString, NSURL;
@protocol GEOVenueIdentifier;

@interface GEOSearchCategory : NSObject <NSSecureCoding>
{
    GEOPDBrowseCategory *_browseCategory;
    GEOPDAutocompleteEntry *_autocompleteEntry;
    NSArray *_subcategories;
}

@property (readonly, nonatomic, getter=_autocompleteEntry) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property (readonly, nonatomic) int displayMode;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSURL *mapsURL;
@property (readonly, nonatomic) NSString *popularTokenString;
@property (readonly, nonatomic) NSString *shortDisplayString;
@property (readonly, nonatomic) int sortOrder;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic, getter=isSubCategorySameAsTopLevel) BOOL subCategorySameAsTopLevel;
@property (readonly, nonatomic) int subCategoryType;
@property (readonly, nonatomic) NSArray *subcategories; // @synthesize subcategories=_subcategories;
@property (readonly, nonatomic, getter=_suggestionEntryMetadata) NSData *suggestionEntryMetadata;
@property (readonly, nonatomic) id<GEOVenueIdentifier> venueIdentifier;

+ (id)categoryForURL:(id)arg1;
+ (void)sendFeedbackForVisibleCategories:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_browseCategory;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutocompleteEntry:(id)arg1;
- (id)initWithBrowseCategory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (void)sendFeedback;
- (id)serverMetadata;

@end

