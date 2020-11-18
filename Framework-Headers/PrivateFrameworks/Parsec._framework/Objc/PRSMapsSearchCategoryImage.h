//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSImage.h>

@class GEOSearchCategory;

@interface PRSMapsSearchCategoryImage : PRSImage
{
    GEOSearchCategory *_geoSearchCategory;
}

@property (readonly) GEOSearchCategory *geoSearchCategory; // @synthesize geoSearchCategory=_geoSearchCategory;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGEOSearchCategory:(id)arg1;

@end
