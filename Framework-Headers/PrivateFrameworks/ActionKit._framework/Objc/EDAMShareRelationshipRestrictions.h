//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMShareRelationshipRestrictions : FATObject
{
    NSNumber *_noSetReadOnly;
    NSNumber *_noSetReadPlusActivity;
    NSNumber *_noSetModify;
    NSNumber *_noSetFullAccess;
}

@property (strong, nonatomic) NSNumber *noSetFullAccess; // @synthesize noSetFullAccess=_noSetFullAccess;
@property (strong, nonatomic) NSNumber *noSetModify; // @synthesize noSetModify=_noSetModify;
@property (strong, nonatomic) NSNumber *noSetReadOnly; // @synthesize noSetReadOnly=_noSetReadOnly;
@property (strong, nonatomic) NSNumber *noSetReadPlusActivity; // @synthesize noSetReadPlusActivity=_noSetReadPlusActivity;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
