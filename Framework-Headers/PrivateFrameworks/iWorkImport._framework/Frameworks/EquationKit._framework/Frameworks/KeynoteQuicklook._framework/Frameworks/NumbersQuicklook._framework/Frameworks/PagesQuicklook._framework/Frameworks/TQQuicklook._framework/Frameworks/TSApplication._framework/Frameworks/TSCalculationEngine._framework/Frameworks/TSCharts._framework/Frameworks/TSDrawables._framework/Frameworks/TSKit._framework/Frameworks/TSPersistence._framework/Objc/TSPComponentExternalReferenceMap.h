//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/NSCopying-Protocol.h>

@interface TSPComponentExternalReferenceMap : NSObject <NSCopying>
{
    struct unordered_map<const long long, TSP::ComponentExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentExternalReferenceInfo>>> *_map;
}

- (void)addExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 componentIsVersioned:(BOOL)arg4;
- (void)appendReferencesFromMessage:(const RepeatedPtrField_5bff772f *)arg1 componentIsVersioned:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)enumerateExternalReferences:(CDUnknownBlockType)arg1;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (id)init;
- (id)initFromMessage:(const struct ComponentInfo *)arg1;
- (id)initWithComponentExternalReferenceMap:(id)arg1;
- (id)initWithMapSize:(unsigned long long)arg1;
- (void)saveToMessage:(struct ComponentInfo *)arg1;

@end

