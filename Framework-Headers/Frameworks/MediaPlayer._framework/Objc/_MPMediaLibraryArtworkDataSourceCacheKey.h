//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject
{
    id _catalogIdentifier;
    struct CGSize _representationSize;
}

@property (copy, nonatomic) id catalogIdentifier; // @synthesize catalogIdentifier=_catalogIdentifier;
@property (nonatomic) struct CGSize representationSize; // @synthesize representationSize=_representationSize;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithArtworkCatalog:(id)arg1 representativeSize:(struct CGSize)arg2;
- (BOOL)isEqual:(id)arg1;

@end

