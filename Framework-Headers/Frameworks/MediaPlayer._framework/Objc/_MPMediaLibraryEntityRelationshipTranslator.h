//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject
{
    BOOL _transient;
    struct ModelPropertyBase *_foreignPropertyBase;
    Class _relationshipModelClass;
    CDUnknownBlockType _validRelationshipHandler;
    shared_ptr_217a6612 _relationshipValidationProperties;
}

@property (readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;
@property (nonatomic) struct ModelPropertyBase *foreignPropertyBase; // @synthesize foreignPropertyBase=_foreignPropertyBase;
@property (nonatomic) Class relationshipModelClass; // @synthesize relationshipModelClass=_relationshipModelClass;
@property (nonatomic) shared_ptr_217a6612 relationshipValidationProperties; // @synthesize relationshipValidationProperties=_relationshipValidationProperties;
@property (nonatomic) BOOL transient; // @synthesize transient=_transient;
@property (copy, nonatomic) CDUnknownBlockType validRelationshipHandler; // @synthesize validRelationshipHandler=_validRelationshipHandler;

- (id).cxx_construct;
- (void).cxx_destruct;

@end

