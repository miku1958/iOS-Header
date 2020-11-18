//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPStoreArtworkRequestToken, NSArray, NSDictionary, NSString;

@interface MPStoreItemMovieClip : NSObject
{
    NSDictionary *_lookupDictionary;
}

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
@property (readonly, copy, nonatomic) MPStoreArtworkRequestToken *previewArtworkRequestToken;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithLookupDictionary:(id)arg1;

@end

