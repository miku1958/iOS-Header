//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationshipCollection : NSObject
{
    NSMutableDictionary *mIdentifierMap;
    NSMutableDictionary *mTypeMap;
}

- (void).cxx_destruct;
- (id)initWithRelationshipsXml:(struct _xmlDoc *)arg1 baseLocation:(id)arg2;
- (id)relationshipForIdentifier:(id)arg1;
- (id)relationshipsByType:(id)arg1;

@end
