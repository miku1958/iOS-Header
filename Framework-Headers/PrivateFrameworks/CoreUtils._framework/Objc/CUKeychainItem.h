//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface CUKeychainItem : NSObject
{
    BOOL _invisible;
    BOOL _legacy;
    int _accessibleType;
    int _syncType;
    NSString *_accessGroup;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSString *_identifier;
    NSDictionary *_metadata;
    NSArray *_removedMetadata;
    NSString *_name;
    NSData *_persistentRef;
    NSDictionary *_secrets;
    NSString *_type;
    NSString *_userDescription;
    NSString *_viewHint;
}

@property (copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property (nonatomic) int accessibleType; // @synthesize accessibleType=_accessibleType;
@property (readonly, copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (readonly, copy, nonatomic) NSDate *dateModified; // @synthesize dateModified=_dateModified;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL invisible; // @synthesize invisible=_invisible;
@property (nonatomic) BOOL legacy; // @synthesize legacy=_legacy;
@property (copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSData *persistentRef; // @synthesize persistentRef=_persistentRef;
@property (copy, nonatomic) NSArray *removedMetadata; // @synthesize removedMetadata=_removedMetadata;
@property (copy, nonatomic) NSDictionary *secrets; // @synthesize secrets=_secrets;
@property (nonatomic) int syncType; // @synthesize syncType=_syncType;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property (copy, nonatomic) NSString *viewHint; // @synthesize viewHint=_viewHint;

- (void).cxx_destruct;
- (id)_attributesDictionaryWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (void)_mergeItem:(id)arg1;
- (BOOL)_updateWithAttributesDictionary:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (BOOL)isEqualToKeychainItem:(id)arg1 flags:(unsigned int)arg2;

@end

