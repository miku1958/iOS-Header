//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSSecureCoding-Protocol.h>
#import <Pasteboard/PBItemRepresentationDataTransferDelegate-Protocol.h>

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, NSURL, NSUUID;
@protocol NSObject, PBItemDataTransferDelegate;

@interface PBItem : NSObject <NSSecureCoding, PBItemRepresentationDataTransferDelegate>
{
    BOOL _itemQueue_isStoredOnServer;
    NSData *_itemQueue_primaryData;
    NSURL *_itemQueue_primaryFileURL;
    id<PBItemDataTransferDelegate> _itemQueue_dataTransferDelegate;
    NSDictionary *_itemQueue_privateMetadata;
    NSMutableDictionary *_itemQueue_representationByType;
    NSMutableOrderedSet *_itemQueue_typeOrder;
    NSMutableDictionary *_itemQueue_preferredRepresentationByType;
    NSMutableDictionary *_itemQueue_visibilityByType;
    NSMutableDictionary *_itemQueue_dataAvailabilityByType;
    NSMutableDictionary *_itemQueue_patternDetections;
    id _itemQueue_localUserInfo;
    id<NSObject> _itemQueue_localObject;
    NSDictionary *_itemQueue_metadata;
    NSUUID *_UUID;
}

@property (readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly, copy, nonatomic) NSArray *availableTypes; // @dynamic availableTypes;
@property (weak, nonatomic) id<PBItemDataTransferDelegate> dataTransferDelegate; // @dynamic dataTransferDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *itemQueue_dataAvailabilityByType; // @synthesize itemQueue_dataAvailabilityByType=_itemQueue_dataAvailabilityByType;
@property (weak, nonatomic) id<PBItemDataTransferDelegate> itemQueue_dataTransferDelegate; // @synthesize itemQueue_dataTransferDelegate=_itemQueue_dataTransferDelegate;
@property (nonatomic) BOOL itemQueue_isStoredOnServer; // @synthesize itemQueue_isStoredOnServer=_itemQueue_isStoredOnServer;
@property (strong, nonatomic) id<NSObject> itemQueue_localObject; // @synthesize itemQueue_localObject=_itemQueue_localObject;
@property (strong, nonatomic) id itemQueue_localUserInfo; // @synthesize itemQueue_localUserInfo=_itemQueue_localUserInfo;
@property (copy, nonatomic) NSDictionary *itemQueue_metadata; // @synthesize itemQueue_metadata=_itemQueue_metadata;
@property (strong, nonatomic) NSMutableDictionary *itemQueue_patternDetections; // @synthesize itemQueue_patternDetections=_itemQueue_patternDetections;
@property (strong, nonatomic) NSMutableDictionary *itemQueue_preferredRepresentationByType; // @synthesize itemQueue_preferredRepresentationByType=_itemQueue_preferredRepresentationByType;
@property (strong, nonatomic) NSData *itemQueue_primaryData; // @synthesize itemQueue_primaryData=_itemQueue_primaryData;
@property (strong, nonatomic) NSURL *itemQueue_primaryFileURL; // @synthesize itemQueue_primaryFileURL=_itemQueue_primaryFileURL;
@property (strong, nonatomic) NSDictionary *itemQueue_privateMetadata; // @synthesize itemQueue_privateMetadata=_itemQueue_privateMetadata;
@property (strong, nonatomic) NSMutableDictionary *itemQueue_representationByType; // @synthesize itemQueue_representationByType=_itemQueue_representationByType;
@property (strong, nonatomic) NSMutableOrderedSet *itemQueue_typeOrder; // @synthesize itemQueue_typeOrder=_itemQueue_typeOrder;
@property (strong, nonatomic) NSMutableDictionary *itemQueue_visibilityByType; // @synthesize itemQueue_visibilityByType=_itemQueue_visibilityByType;
@property (strong, nonatomic) id localObject;
@property (strong, nonatomic) id localUserInfo; // @dynamic localUserInfo;
@property (copy, nonatomic) NSDictionary *metadata; // @dynamic metadata;
@property (strong, nonatomic) NSDictionary *privateMetadata;
@property (readonly, nonatomic) NSArray *representations;
@property (readonly) Class superclass;

+ (id)allowedClassesForSecureCoding;
+ (id)item;
+ (id)itemWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;
+ (id)itemWithData:(id)arg1 type:(id)arg2;
+ (id)itemWithObject:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (BOOL)_canInstantiateObjectOfClass:(Class)arg1;
- (void)_commonInitGenerateUUID:(BOOL)arg1;
- (id)_itemQueue_copyWithDoNothingRepresentations;
- (void)_loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_representationForType:(id)arg1;
- (void)addDataRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addFileCopyRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addOpenInPlaceRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addPatternDetections:(id)arg1;
- (void)addRepresentation:(id)arg1;
- (void)addRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (void)addRepresentationType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (id)availableTypesWithPreferredRepresentation:(unsigned long long)arg1;
- (BOOL)canInstantiateObjectOfClass:(Class)arg1;
- (id)copyWithDoNothingRepresentations;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratePatternDetectionsForPatterns:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)hasRepresentationConformingToType:(id)arg1;
- (BOOL)hasRepresentationOfType:(id)arg1;
- (id)init;
- (id)initDoNothing;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFileURL:(id)arg1 type:(id)arg2 outError:(id *)arg3;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (id)initWithNSItemProvider:(id)arg1;
- (id)initWithObject:(id)arg1;
- (BOOL)isDataAvailableImmediatelyForType:(id)arg1;
- (id)itemQueue_availableTypes;
- (BOOL)itemQueue_canInstantiateObjectOfClass:(Class)arg1;
- (BOOL)itemQueue_hasRepresentationConformingToType:(id)arg1;
- (BOOL)itemQueue_hasRepresentationOfType:(id)arg1;
- (void)itemQueue_removeRepresentationOfType:(id)arg1;
- (id)itemQueue_representationForType:(id)arg1;
- (void)itemQueue_setDataTransferDelegate:(id)arg1;
- (void)itemQueue_setItemRepresentation:(id)arg1;
- (void)itemRepresentation:(id)arg1 beganDataTransferWithProgress:(id)arg2;
- (void)itemRepresentationFinishedDataTransfer:(id)arg1;
- (void)loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)preferredRepresentationForType:(id)arg1;
- (void)removeRepresentationOfType:(id)arg1;
- (id)representationConformingToType:(id)arg1;
- (void)uikit_addRepresentationType:(id)arg1 loaderBlock:(CDUnknownBlockType)arg2;
- (BOOL)uikit_canInstantiateObjectOfClass:(Class)arg1;
- (void)uikit_loadObjectOfClass:(Class)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)uikit_loadRepresentationAsType:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)v2_addFileCopyRepresentationType:(id)arg1 loader:(CDUnknownBlockType)arg2;
- (void)v2_addRepresentationType:(id)arg1 preferredRepresentation:(unsigned long long)arg2 loader:(CDUnknownBlockType)arg3;
- (long long)visibilityForType:(id)arg1;

@end
