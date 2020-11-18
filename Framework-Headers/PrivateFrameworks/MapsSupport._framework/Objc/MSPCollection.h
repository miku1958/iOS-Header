//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPCollectionStorage.h>

#import <MapsSupport/MSPImmutableObject-Protocol.h>
#import <MapsSupport/MSPMutableObject-Protocol.h>

@class MSPCollectionItemReplica, NSArray, NSLock, NSString, NSUUID;

@interface MSPCollection : MSPCollectionStorage <MSPMutableObject, MSPImmutableObject>
{
    NSLock *_lock;
    NSUUID *_storageIdentifier;
    NSArray *_items;
    MSPCollectionItemReplica *_itemReplica;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFavoritesCollection;
@property (strong, nonatomic) NSArray *itemIdentifiers;
@property (strong, nonatomic) MSPCollectionItemReplica *itemReplica; // @synthesize itemReplica=_itemReplica;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly) Class superclass;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;
- (void).cxx_destruct;
- (void)_noteWillMutate;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (id)copyIfValidWithError:(out id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 storageIdentifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFromCollection:(id)arg1 isUserVisibleChange:(out BOOL *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)removeItem:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)setCollectionDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storageIdentifier;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;

@end
