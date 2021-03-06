//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSPlugInQuery.h>

@class NSArray, NSDictionary;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery
{
    NSDictionary *_queryDict;
    NSArray *_extensionIdentifiers;
    NSArray *_extensionPointIdentifiers;
    CDUnknownBlockType _filterBlock;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_initWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;
- (id)_queryDictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesPlugin:(unsigned int)arg1 pluginData:(const struct LSPluginData *)arg2 withDatabase:(id)arg3;

@end

