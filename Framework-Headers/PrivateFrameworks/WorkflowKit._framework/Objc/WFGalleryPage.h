//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSMutableCopying-Protocol.h>
#import <WorkflowKit/WFCloudKitItem-Protocol.h>

@class CKRecordID, NSArray, NSData, NSNumber, NSString;

@interface WFGalleryPage : NSObject <WFCloudKitItem, NSMutableCopying>
{
    CKRecordID *_identifier;
    NSString *_name;
    NSNumber *_minVersion;
    NSNumber *_isRoot;
    NSArray *_banners;
    NSArray *_collections;
    NSArray *_routines;
    NSArray *_donations;
    NSArray *_donationsGroupedByApp;
    NSArray *_automationSuggestions;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

@property (copy, nonatomic) NSArray *automationSuggestions; // @synthesize automationSuggestions=_automationSuggestions;
@property (readonly, nonatomic) NSArray *banners; // @synthesize banners=_banners;
@property (readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property (readonly, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *donations; // @synthesize donations=_donations;
@property (readonly, nonatomic) NSArray *donationsGroupedByApp; // @synthesize donationsGroupedByApp=_donationsGroupedByApp;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSNumber *isRoot; // @synthesize isRoot=_isRoot;
@property (readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property (readonly, nonatomic) NSNumber *minVersion; // @synthesize minVersion=_minVersion;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly, nonatomic) NSArray *routines; // @synthesize routines=_routines;
@property (readonly) Class superclass;

+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (id)subPageMatchingName:(id)arg1;
- (id)subPageWithIdentifier:(id)arg1;

@end

