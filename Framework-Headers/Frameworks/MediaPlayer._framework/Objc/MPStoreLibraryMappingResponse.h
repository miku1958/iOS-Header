//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MPStoreLibraryMappingResponse : NSObject
{
    NSMutableDictionary *_storeIdentifierSetToLibraryIdentifierSet;
    long long _libraryAddedStatus;
}

@property (nonatomic) long long libraryAddedStatus; // @synthesize libraryAddedStatus=_libraryAddedStatus;

- (void).cxx_destruct;
- (id)libraryIdentifierSetForIdentifierSet:(id)arg1;
- (void)setLibraryIdentifierSet:(id)arg1 forIdentifierSet:(id)arg2;

@end

