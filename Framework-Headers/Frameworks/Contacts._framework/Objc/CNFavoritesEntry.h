//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactChangesObserver-Protocol.h>

@class CNContact, CNContactProperty, CNContactStore, NSString;

@interface CNFavoritesEntry : NSObject <CNContactChangesObserver>
{
    NSString *_name;
    BOOL _dirty;
    BOOL _autoUpdating;
    int _abUid;
    int _abIdentifier;
    NSString *_actionType;
    NSString *_bundleIdentifier;
    long long _type;
    CNContact *_contact;
    NSString *_label;
    NSString *_value;
    NSString *_labeledValueIdentifier;
    NSString *_propertyKey;
    CNContactStore *_store;
    NSString *_abDatabaseUUID;
    NSString *_originalName;
}

@property (strong, nonatomic) NSString *abDatabaseUUID; // @synthesize abDatabaseUUID=_abDatabaseUUID;
@property (nonatomic) int abIdentifier; // @synthesize abIdentifier=_abIdentifier;
@property (nonatomic) int abUid; // @synthesize abUid=_abUid;
@property (strong, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property (readonly, nonatomic) BOOL autoUpdating; // @synthesize autoUpdating=_autoUpdating;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dirty; // @synthesize dirty=_dirty;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) NSString *labeledValueIdentifier; // @synthesize labeledValueIdentifier=_labeledValueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property (strong, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property (strong, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSString *value; // @synthesize value=_value;

+ (void)_runLookupWithStore:(id)arg1;
+ (id)contactFormatter;
+ (id)createLabeledValueForFavoritesEntryValue:(id)arg1 label:(id)arg2 iOSLegacyIdentifier:(int)arg3 propertyKey:(id)arg4;
+ (id)descriptorsForRequiredKeysForPropertyKey:(id)arg1;
+ (id)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2;
+ (BOOL)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 isEqualToValue:(id)arg3;
+ (void)initialize;
+ (id)instantMessageAddressForFavoritesEntryValue:(id)arg1;
+ (id)labeledValueValueForFavoritesEntryValue:(id)arg1 propertyKey:(id)arg2;
+ (id)rematchEntrySnapshot:(id)arg1 withStore:(id)arg2 noMatchFound:(BOOL *)arg3;
+ (id)sharedContactStore;
+ (id)socialProfileForFavoritesEntryValue:(id)arg1;
+ (id)valueStringFromInstantMessageAddress:(id)arg1;
+ (id)valueStringFromSocialProfile:(id)arg1;
- (void).cxx_destruct;
- (void)_convertFromEntryType:(long long)arg1 toActionType:(id *)arg2 bundleIdentifier:(id *)arg3;
- (int)_entryTypeForActionType:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 entryType:(long long)arg4 actionType:(id)arg5 bundleIdentifier:(id)arg6 store:(id)arg7;
- (void)_lookupChanged:(id)arg1;
- (void)_lookupNotFound;
- (void)_postEntryChanged;
- (void)_queueLookup;
- (void)_unqueueLookup;
- (void)contactDidChange:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)dictionaryRepresentation:(id *)arg1 isDirty:(BOOL *)arg2;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6;
- (id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2 autoUpdating:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)recheckContactStore;

@end

