//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, OCPPackage, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackagePart : NSObject
{
    NSURL *mLocation;
    OCPPackageRelationshipCollection *mRelationships;
    struct _xmlDoc *mDocument;
    NSMutableDictionary *mAlternateContentMap;
    OCPPackage *mPackage;
}

@property (readonly, weak) OCPPackage *package; // @synthesize package=mPackage;

- (void).cxx_destruct;
- (id)contentType;
- (void)copyToFile:(id)arg1;
- (id)data;
- (void)dealloc;
- (struct _xmlNode *)fallbackNodeForChoiceNode:(struct _xmlNode *)arg1;
- (id)firstPartWithRelationshipOfType:(id)arg1;
- (id)initWithLocation:(id)arg1 relationshipsXml:(struct _xmlDoc *)arg2 package:(id)arg3;
- (id)location;
- (id)relationshipForIdentifier:(id)arg1;
- (id)relationshipsByType:(id)arg1;
- (void)setFallbackNode:(struct _xmlNode *)arg1 forChoiceNode:(struct _xmlNode *)arg2;
- (struct _xmlDoc *)xmlDocument;
- (struct _xmlTextReader *)xmlReader;

@end
