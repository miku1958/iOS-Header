//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaLibrary, MPModelKind, NSArray;

@interface MPMediaLibraryEntityTranslationContext : NSObject
{
    BOOL _multiQuery;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedEntityIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    MPModelKind *_modelKind;
}

@property (strong, nonatomic) NSArray *allowedEntityIdentifiers; // @synthesize allowedEntityIdentifiers=_allowedEntityIdentifiers;
@property (nonatomic) unsigned long long filteringOptions; // @synthesize filteringOptions=_filteringOptions;
@property (strong, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property (strong, nonatomic) MPModelKind *modelKind; // @synthesize modelKind=_modelKind;
@property (nonatomic, getter=isMultiQuery) BOOL multiQuery; // @synthesize multiQuery=_multiQuery;
@property (strong, nonatomic) NSArray *scopedContainers; // @synthesize scopedContainers=_scopedContainers;

- (void).cxx_destruct;

@end

