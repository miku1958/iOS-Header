//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;
@protocol NUIdentifiable;

@interface NUJSSchemaObject : NUJSModelObject
{
}

@property (readonly, nonatomic) id<NUIdentifiable> item;
@property (readonly, nonatomic) NUSchema *schema;

+ (id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;
- (BOOL)hasProperty:(id)arg1;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;

@end

