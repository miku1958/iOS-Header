//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAutocompleteFilter-Protocol.h>

@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter>
{
    unsigned long long _types;
}

@property (readonly, nonatomic) unsigned long long types; // @synthesize types=_types;

- (BOOL)applyToAutocompleteParameters:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithResultTypes:(unsigned long long)arg1;

@end
