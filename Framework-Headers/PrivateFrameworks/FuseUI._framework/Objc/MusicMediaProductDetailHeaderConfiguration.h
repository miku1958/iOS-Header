//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPArtworkCatalog, NSString;

@interface MusicMediaProductDetailHeaderConfiguration : NSObject
{
    BOOL _shouldIncludeHeader;
    BOOL _shouldUseSplitMainForContentView;
    MPArtworkCatalog *_headerArtworkCatalog;
    unsigned long long _headerStyle;
    NSString *_lockupArtworkProperty;
}

@property (strong, nonatomic) MPArtworkCatalog *headerArtworkCatalog; // @synthesize headerArtworkCatalog=_headerArtworkCatalog;
@property (nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property (copy, nonatomic) NSString *lockupArtworkProperty; // @synthesize lockupArtworkProperty=_lockupArtworkProperty;
@property (nonatomic) BOOL shouldIncludeHeader; // @synthesize shouldIncludeHeader=_shouldIncludeHeader;
@property (nonatomic) BOOL shouldUseSplitMainForContentView; // @synthesize shouldUseSplitMainForContentView=_shouldUseSplitMainForContentView;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
