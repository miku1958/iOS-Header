//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPBaseEntityTranslator.h>

@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator
{
}

+ (void)buildSchemaIfNeeded;
- (id)identifiersForContentItem:(id)arg1;
- (void)mapArtworkPropertyKey:(id)arg1;
- (void)mapIdentifierCreationBlock:(CDUnknownBlockType)arg1;
- (void)mapPropertyKey:(id)arg1 toDeviceSpecificUserInfoKey:(id)arg2;
- (void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2;
- (void)mapPropertyKey:(id)arg1 toUserInfoKey:(id)arg2;
- (void)mapPropertyKey:(id)arg1 toValueTransformer:(CDUnknownBlockType)arg2;
- (void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2;
- (id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3;
- (id)sectionObjectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3;

@end

