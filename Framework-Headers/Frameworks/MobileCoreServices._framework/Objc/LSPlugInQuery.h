//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/_LSQuery.h>

@interface LSPlugInQuery : _LSQuery
{
}

+ (id)pluginQuery;
+ (id)pluginQueryWithIdentifier:(id)arg1;
+ (id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(CDUnknownBlockType)arg2;
+ (id)pluginQueryWithURL:(id)arg1;
+ (id)pluginQueryWithUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (BOOL)_shouldCacheResolvedResults;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)sort:(BOOL)arg1 pluginIDs:(id)arg2 andYield:(CDUnknownBlockType)arg3 context:(struct LSContext *)arg4;

@end

