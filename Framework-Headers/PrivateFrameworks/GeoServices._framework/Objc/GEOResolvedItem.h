//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDResolvedItem, NSString;

@interface GEOResolvedItem : NSObject
{
    GEOPDResolvedItem *_resolvedItem;
}

@property (readonly, nonatomic) NSString *extractedTerm;
@property (readonly, nonatomic) BOOL hasResultIndex;
@property (readonly, nonatomic) int itemType;
@property (readonly, nonatomic) unsigned long long resultIndex;

- (void).cxx_destruct;
- (id)initWithAutocompleteResolvedItem:(id)arg1;
- (id)initWithResolvedItem:(id)arg1;

@end

