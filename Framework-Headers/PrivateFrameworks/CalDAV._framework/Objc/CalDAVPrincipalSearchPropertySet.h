//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CalDAVPrincipalSearchPropertySet : NSObject
{
    NSSet *_stringProperties;
}

@property (strong, nonatomic) NSSet *stringProperties; // @synthesize stringProperties=_stringProperties;
@property (readonly, nonatomic) BOOL supportsPropertySearch;

+ (id)searchSetWithProperties:(id)arg1;
- (void).cxx_destruct;
- (id)initWithSearchProperties:(id)arg1;
- (id)initWithStringProperties:(id)arg1;
- (BOOL)isEqualToPropertySet:(id)arg1;
- (BOOL)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (BOOL)supportsWellKnownType:(int)arg1;

@end

